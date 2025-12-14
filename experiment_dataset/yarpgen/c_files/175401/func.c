/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175401
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((max((arr_3 [i_1 + 1] [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1] [i_1])) ? (arr_3 [i_1 + 2] [i_1] [i_1]) : (var_12)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_9);
                    arr_7 [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4294967292U)))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                    var_18 -= ((/* implicit */signed char) max((((/* implicit */long long int) (~(((unsigned int) (unsigned short)21808))))), ((+((-9223372036854775807LL - 1LL))))));
                }
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 2] [i_1 + 1] [i_3]))) ? (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (9223372036854775802LL) : (((/* implicit */long long int) arr_5 [i_1] [i_1 + 2] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                    var_20 |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned int) 1016)) : (arr_8 [i_1 + 2] [i_1]))));
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) var_9);
                        var_23 = ((/* implicit */unsigned int) ((long long int) var_1));
                        var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_3] [(unsigned char)0] [i_3])))) | (((/* implicit */int) var_1))));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned char) (-(arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1])))))));
                }
                for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    arr_16 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_13 [i_5 - 1] [i_5] [i_5] [i_5]) : (((/* implicit */int) (unsigned short)0)))), (arr_13 [i_5 - 1] [i_5 + 1] [(unsigned short)13] [(_Bool)1])));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) var_6);
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) var_7);
                            var_27 = ((((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 2] [i_5 + 1]))) : (var_8))) / (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((0) << (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_6 + 1] [i_8])) ? ((~(18446744073709551594ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_1 - 2] [i_8])))))))));
                            var_29 = ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) var_5))));
                            var_30 = ((/* implicit */signed char) var_1);
                            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_1 - 1] [6] [i_6] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-18))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (var_16)));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_33 = ((((/* implicit */int) arr_28 [i_6] [i_10] [i_6] [i_5] [i_1] [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_15))))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1325471007U)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) arr_19 [i_0] [i_1] [3ULL] [i_6 + 3] [(unsigned char)5])) * (((/* implicit */int) arr_2 [i_1 + 2] [i_5 + 1] [i_6]))))));
                            var_35 = ((unsigned char) (unsigned char)22);
                        }
                        arr_31 [i_6] [i_5] [i_5] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((arr_9 [i_6 + 1] [i_6 + 1] [i_6] [i_5 + 2]) / (arr_9 [i_6 - 1] [i_6 + 3] [i_5] [i_5 + 1]))));
                        arr_32 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [i_5 + 2]))));
                        var_36 = ((/* implicit */int) var_8);
                    }
                    for (unsigned char i_11 = 1; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_35 [i_5] [i_1] = ((/* implicit */int) max((((unsigned short) 9223372036854775802LL)), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_28 [i_11 + 2] [i_11 + 2] [i_1] [i_11] [i_11] [(unsigned char)10]))))))));
                        var_37 -= ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_25 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5])), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_11 [i_1] [i_5 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_5] [i_11 + 2] [i_0] [i_1 - 2])) : (((/* implicit */int) var_2))))) : (arr_10 [i_0] [i_11 + 3]))))));
                        arr_36 [i_5 + 2] [i_1] [i_5] [i_0] |= ((/* implicit */unsigned short) var_1);
                        var_38 = ((/* implicit */int) arr_15 [i_5] [i_5]);
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 4; i_12 < 14; i_12 += 2) 
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_5 + 2])) ? (((/* implicit */int) arr_28 [i_0] [i_5] [i_0] [i_5 + 1] [i_5 + 2] [i_12])) : (((/* implicit */int) arr_28 [i_1 - 1] [(short)8] [i_1] [i_5] [i_5 + 2] [i_5]))));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_12 + 1] [15U] [i_1] [i_0])))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_42 [i_0] [i_5] [i_1] [i_0] [i_13] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                        arr_43 [10] [i_1 + 1] [i_5] [i_13] = ((/* implicit */int) max((max((((/* implicit */long long int) arr_8 [i_5 - 1] [i_5])), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775785LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) && (((/* implicit */_Bool) -9223372036854775803LL))))))))));
                        var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                        arr_44 [14] [i_5] = ((/* implicit */int) (~(arr_4 [i_0] [(unsigned char)0] [i_5] [i_13])));
                    }
                    var_42 = arr_28 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1];
                    var_43 = ((/* implicit */unsigned int) (+(var_8)));
                    arr_45 [i_5] = ((/* implicit */short) arr_21 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]);
                }
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */int) var_11)) * (((/* implicit */int) max((arr_19 [0LL] [i_1 + 2] [i_1] [8U] [i_0]), (((/* implicit */signed char) var_1))))))))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned int) max(((~(((int) var_12)))), (max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_1))))))));
}
