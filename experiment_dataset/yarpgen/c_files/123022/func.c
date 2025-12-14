/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123022
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (3841642611418866667LL)))) - (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-530)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((int) arr_1 [i_0] [i_1])))))), (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((min((arr_1 [i_0] [i_0]), (((/* implicit */int) var_10)))) + (1917374525))))));
                arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_14))) ? (max((arr_2 [i_1]), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)3798))))))) : (((int) arr_4 [i_0] [i_1] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_21 = ((((83963279402579298LL) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)71)))))))) ? (((((((/* implicit */_Bool) -1850997664)) ? (-1850997664) : (-1850997664))) * (((/* implicit */int) ((((/* implicit */long long int) 1850997663)) <= (arr_0 [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(arr_15 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 2]))))));
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] &= ((/* implicit */short) arr_17 [i_0] [i_0] [i_4] [i_0] [i_4] [i_1]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_1] [i_2] [i_2])))) ? (((((/* implicit */int) (unsigned char)244)) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)71))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_2 [i_2]))) != (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-25756)), (arr_15 [i_5] [i_2] [i_0] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [i_5] [i_2])) < (10713284909571286402ULL))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_24 -= ((/* implicit */_Bool) (+(((arr_0 [i_0]) % (arr_6 [i_5] [i_5] [i_0])))));
                            arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) (+(arr_1 [i_0] [i_5])));
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_7] [i_0] [i_1]);
                        arr_28 [i_7] [i_2] [i_1] [i_1] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_7 [i_0] [i_1] [i_2])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) & (5057393926663063624ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] [i_7] [i_7]))));
                        arr_29 [i_0] [i_0] [i_0] [i_1] = arr_4 [i_1] [i_1] [i_1];
                        var_27 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))))))), (((short) ((signed char) arr_0 [i_0])))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_13 [8] [8] [i_2]))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (+(309739978)));
                            arr_35 [i_9] [i_1] [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1])) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_0]))))));
                            arr_36 [i_0] [i_1] [i_0] [i_1] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                            var_29 = ((/* implicit */unsigned int) (!(var_19)));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_8 - 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_8 - 1] [i_1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 4) 
                        {
                            arr_40 [i_10] [i_1] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_23 [i_10 - 1] [i_1] [i_2] [i_1] [i_1] [i_0])));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(arr_21 [i_10 + 2] [i_10 - 2] [i_8 - 1]))))));
                            arr_41 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_10 + 2] [i_10 + 2] [i_10 + 2]))));
                            arr_42 [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_8 - 1] [i_10] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 433439944947385079ULL))))));
                            var_32 += ((/* implicit */int) (((((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29440))))) - (arr_38 [i_8 - 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1])));
                        }
                        arr_43 [i_8] [i_1] [i_1] [i_1] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) ((10713284909571286430ULL) == (((/* implicit */unsigned long long int) arr_16 [i_1] [i_8]))))) : ((-2147483647 - 1))));
                    }
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3841642611418866667LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) == (arr_7 [i_0] [i_1] [i_2])))), ((-(arr_17 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0]))))))));
                    var_34 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_19)), ((short)-32765)))))))) > ((-(arr_13 [0ULL] [0ULL] [i_2])))));
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                {
                    arr_46 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(min((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_12)))), (-6307851449515080220LL)))));
                    var_35 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_1] [i_1] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_11] [i_11] [i_1]))) : (-3841642611418866668LL)))))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned char) var_5);
}
