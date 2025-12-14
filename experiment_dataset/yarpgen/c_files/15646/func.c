/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15646
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) var_4);
                                var_18 = ((/* implicit */short) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2413413885007941468LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_6 [(unsigned char)7] [i_4])))) ? ((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))) : (-883452947)))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)24)) & (((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */_Bool) -883452924)) ? (((/* implicit */int) (unsigned short)6864)) : (883452947)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((-2413413885007941459LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((var_4) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((short) var_5)))))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((long long int) var_8))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0]))))), (((((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) ? ((+(-8785590103369470398LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) % (((/* implicit */int) var_0))))))))))));
                }
                arr_13 [i_1] [i_0] = (((((~(((/* implicit */int) (unsigned short)58671)))) + (2147483647))) << (((((/* implicit */int) var_13)) - (97))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)58672)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_17 [7LL] [i_1] [i_5] [(signed char)12] [i_1]))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                arr_21 [i_0] [15] [i_0] [i_6] [i_6] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((var_14) % (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((var_10), (((/* implicit */long long int) arr_2 [i_7] [i_5])))) : (((/* implicit */long long int) var_7)))) : ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (35184372088832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_7]))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */short) var_0)), (arr_15 [i_0] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_1] [i_6]), (((/* implicit */short) var_5)))))) : (((((/* implicit */_Bool) arr_15 [i_7] [i_6])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_1]))))));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                            {
                                var_22 = ((/* implicit */short) ((long long int) (+(arr_12 [i_0] [i_1] [i_0] [i_6] [i_0]))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_8] [i_0] [i_1] [i_1] [i_0]));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned char)7] [i_8])) ? (((/* implicit */int) arr_7 [i_0] [i_5] [15LL])) : (((/* implicit */int) (unsigned short)58675))))))));
                            }
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12))))))) / ((+(arr_6 [i_0] [i_5]))))))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-24))));
            }
        } 
    } 
    var_26 *= ((/* implicit */long long int) 0);
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) (((((-(((/* implicit */int) arr_27 [i_9])))) + (2147483647))) << (((((3302049960673497686LL) >> (((((/* implicit */int) arr_17 [i_9] [i_9] [8ULL] [i_11] [i_10 + 2])) - (51))))) - (11LL)))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [1LL] [(signed char)5] [i_11] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_14)))) ? (min((arr_8 [i_10] [i_10] [i_10] [i_10 + 2]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_17 [i_9] [i_10 + 1] [i_10 + 1] [i_11] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)6864)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)1))))))))))));
                    var_29 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)(-127 - 1))), (-6790767343276670906LL)));
                }
            } 
        } 
    } 
}
