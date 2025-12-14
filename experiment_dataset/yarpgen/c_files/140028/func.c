/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140028
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((var_10), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_2] [i_1]))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_4] [i_3] [i_1] [i_0]) % (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12990))) : (-2915304694011149891LL)));
                            var_20 = ((/* implicit */unsigned short) var_6);
                            arr_13 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */short) ((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            var_21 += ((/* implicit */long long int) ((((unsigned long long int) var_14)) == (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_12 [2ULL] [i_1] [i_1] [i_1] [i_1]))));
                            arr_19 [i_6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (var_8)));
                            var_24 = ((/* implicit */_Bool) (signed char)0);
                        }
                        var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((+(0U)))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (+(arr_5 [i_0])))), (max((var_8), (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        var_26 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_9)))));
        var_27 = ((/* implicit */long long int) var_16);
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        arr_24 [i_7] = arr_21 [i_7] [i_7];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_10))));
            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (signed char)0)))) && (((/* implicit */_Bool) arr_25 [i_7] [i_8]))));
            arr_27 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7])) / (((/* implicit */int) arr_26 [i_7] [i_8] [i_8]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
        }
        var_30 ^= ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((arr_25 [i_7] [i_7]), (((/* implicit */short) arr_22 [i_7]))))));
        arr_28 [i_7] &= ((/* implicit */int) arr_23 [i_7]);
        var_31 = ((/* implicit */_Bool) (short)(-32767 - 1));
    }
    var_32 += ((/* implicit */int) ((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) + (8120491175778122770LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (2250859926495519480LL)));
    var_33 = ((/* implicit */unsigned short) ((unsigned long long int) -995965535));
    var_34 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (1307653657)))) ? (4160233616788826879LL) : (var_7)))));
    var_35 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */signed char) var_0)))))));
}
