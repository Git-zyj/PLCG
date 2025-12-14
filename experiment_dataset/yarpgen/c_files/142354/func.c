/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142354
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) <= (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_16))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)239)), (((long long int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((short) (short)32761))), (((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) + (29317))) - (27))))) | (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [(signed char)6]))))))));
        var_21 = ((/* implicit */short) var_14);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (int i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) (signed char)3))))), (var_16)));
                                var_22 = ((/* implicit */_Bool) arr_0 [i_1]);
                                var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_3]))));
                                var_24 *= ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) var_9)), (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)32761)), (arr_0 [i_1])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_1] [(signed char)5] [9U])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_4] [(unsigned char)6]))))), (min((16463270898129277314ULL), (((/* implicit */unsigned long long int) (short)-32761))))))));
                                var_25 *= ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_3 + 1] [i_5 + 2])) == (((/* implicit */int) arr_7 [i_1] [i_1] [i_5 + 2]))))) : (((/* implicit */int) ((unsigned short) var_6))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-13281))))))))) ? (min((((((/* implicit */_Bool) arr_8 [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [(signed char)6] [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16463270898129277314ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (_Bool)1))))) : (max((arr_8 [i_3]), (((/* implicit */int) arr_11 [i_3] [i_2])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) -1LL)))));
        var_28 ^= 1073741824;
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned char i_7 = 3; i_7 < 11; i_7 += 4) 
            {
                for (short i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (+((((~(((/* implicit */int) var_3)))) * (((/* implicit */int) arr_5 [i_8 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            var_30 |= ((/* implicit */short) max(((-(arr_8 [i_7 + 2]))), (((/* implicit */int) arr_2 [i_7 + 1]))));
                            var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [(unsigned char)10])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_18 [i_1] [i_1]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_7] [(_Bool)1] [i_7] [i_8] [i_6])) % (((/* implicit */int) arr_2 [i_8]))))) - ((-(arr_23 [i_1] [i_6] [i_6] [7ULL] [i_6])))))));
                            var_32 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((arr_6 [i_9 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 794528813)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_6] [i_7] [i_8] [i_7]))))))), ((-(arr_19 [i_1] [i_6] [i_9 - 1])))));
                            var_33 &= ((/* implicit */_Bool) max((arr_8 [i_7 - 3]), (((((-149394679) + (((/* implicit */int) var_14)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_14))));
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */short) ((signed char) min((16463270898129277314ULL), (((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_6] [i_8] [i_7] [i_7 + 1] [i_7 - 1])))));
                            var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                            arr_29 [7LL] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_12 [i_8 - 2] [i_10 - 1] [(signed char)0] [i_10 - 1])) >> (((((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32750))))) - (2025108355U)))))));
                            arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                    }
                } 
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) (short)27762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26230))) : (1983473175580274290ULL))), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (unsigned short)37753)))))))));
}
