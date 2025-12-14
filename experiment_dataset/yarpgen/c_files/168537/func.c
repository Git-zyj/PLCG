/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168537
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(_Bool)1] [i_3] [1ULL] [i_3] [i_0] [i_4] = ((/* implicit */unsigned short) (+(max((arr_11 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_4 + 1]), (((/* implicit */int) arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) arr_2 [i_0])) : (arr_3 [i_0]))) << ((((((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (1625205565U))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2])), (((unsigned short) 440599287U))))) ? ((~(arr_11 [i_2] [i_1] [i_0] [i_0] [i_0]))) : ((-2147483647 - 1))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_6]);
                            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_5] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) 2147483640)) : (3854368009U)));
                            arr_21 [i_6] [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) 127ULL));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_7] = (+(((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) 2147483647))))));
                            arr_27 [i_0] [i_0] [(short)7] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned short) (-(arr_16 [i_0] [i_1] [(unsigned short)3] [i_5] [i_7])));
                            arr_28 [i_7] [i_0] [i_2] [i_1] [i_0] [i_7] [i_7] = min((arr_3 [i_0]), (((/* implicit */long long int) max((3854368009U), (4184704826U)))));
                        }
                        var_19 = ((/* implicit */int) arr_2 [i_0]);
                        arr_29 [i_1] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_8] [i_2] = ((unsigned short) (signed char)105);
                        var_20 |= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                        /* LoopSeq 4 */
                        for (int i_9 = 3; i_9 < 7; i_9 += 1) 
                        {
                            arr_37 [i_9] = ((/* implicit */long long int) arr_11 [i_9 + 2] [6U] [i_2] [i_1] [i_0]);
                            arr_38 [(signed char)5] [i_1] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [9] [9] [i_2] [i_8] [i_9 + 3]))));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_43 [i_0] [i_0] [i_1] [i_0] [i_8] [i_10] = ((/* implicit */int) (+(arr_3 [i_8])));
                            arr_44 [i_0] [i_1] [i_0] [i_8] [i_10] = ((/* implicit */short) 440599288U);
                            arr_45 [i_0] [i_0] [i_2] [i_8] [6ULL] &= ((/* implicit */int) var_11);
                        }
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_50 [i_2] [i_8] [2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_8] [i_2] [i_2] [i_2] [i_1] [(unsigned char)2])) ? (3854367999U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            arr_51 [9] [i_1] [i_2] [i_8] [i_11] [1LL] = ((/* implicit */short) arr_22 [i_0] [(_Bool)1] [i_2] [i_8] [i_11] [(signed char)4]);
                            var_21 &= ((/* implicit */unsigned long long int) arr_9 [i_11] [5U] [i_2] [i_1] [i_0]);
                        }
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            arr_55 [i_0] [(unsigned char)7] [(unsigned char)7] [i_8] [i_8] [i_2] [i_1] = ((/* implicit */unsigned int) arr_18 [(unsigned short)6] [i_1] [i_2] [i_8] [i_1]);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_10))));
                            arr_56 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) -2229922358874950721LL);
                        }
                        var_23 = ((/* implicit */signed char) (short)-13186);
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_52 [i_13 - 2] [i_13] [i_13 - 2] [i_13] [i_13 - 2]))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35673)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) : (3496426857U)))) ? (arr_42 [i_0] [i_13 + 1] [i_0] [i_13 - 1] [i_13]) : (((/* implicit */unsigned long long int) arr_31 [i_13 - 1])))))));
                    }
                }
            } 
        } 
    } 
}
