/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17463
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), (arr_3 [i_1] [i_3]))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)189))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2] [i_3] [i_3])))))) : (((((/* implicit */_Bool) 4294967294U)) ? (2U) : (2U)))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 + 2] [i_1])) <= (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_4 [i_0 + 1] [i_1]))))));
                            var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_10), (var_13)))))) ? (((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 8U)))) : (2U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2U) <= (5U)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) 16U)) ? (arr_6 [i_1] [i_0] [i_4] [i_5]) : (arr_6 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((arr_2 [i_4]), (((/* implicit */int) var_2))))))));
                                arr_16 [i_0] [i_1] [i_1] [i_5] [i_6] [i_5] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_1] [i_6])) % (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (min((min((4294967294U), (4294967294U))), (min((4294967294U), (((/* implicit */unsigned int) var_1)))))) : ((~(min((4294967292U), (4294967280U)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_1] [i_6])) * (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (min((min((4294967294U), (4294967294U))), (min((4294967294U), (((/* implicit */unsigned int) var_1)))))) : ((~(min((4294967292U), (4294967280U))))))));
                                arr_17 [i_0] [i_1] = ((/* implicit */short) 4294967290U);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), ((-(arr_10 [i_0] [i_1]))))) >= (((/* implicit */unsigned long long int) max((((4294967292U) * (4294967279U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            var_19 |= ((/* implicit */signed char) ((arr_7 [i_7] [i_8] [i_8] [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 4294967277U)) && (((/* implicit */_Bool) 4294967294U))))));
                            arr_23 [i_0] [i_1] [i_4] [i_7] [i_8] [i_7] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_0 - 1] [i_7] [i_8]))));
                            arr_24 [i_4] [i_1] [i_1] [i_7] [i_0] [i_4] = ((/* implicit */unsigned char) arr_2 [i_0]);
                            arr_25 [i_0] [i_1] [i_0] [i_0] [i_0] = 2U;
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_4] [i_1] [i_4] [i_7] [i_9] = ((/* implicit */unsigned int) max((arr_9 [i_1] [i_0 - 1] [i_9 - 1]), (((_Bool) var_4))));
                            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((44U) - (2U)))))));
                            arr_29 [i_0] [i_1] [i_7] [i_7] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0]);
                        }
                        for (long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                        {
                            arr_34 [i_0] [i_1] [i_4] [i_7] [i_10] [i_0] = ((/* implicit */unsigned long long int) 4294967278U);
                            var_22 &= ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_0 + 2] [i_7])))), (min((((/* implicit */int) var_7)), ((~(arr_2 [i_0])))))));
                            arr_35 [i_1] [i_7] [i_4] [i_7] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_1 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_7] [i_10] [i_7] [i_1]))) : (((((/* implicit */_Bool) 4294967244U)) ? (16U) : (0U)))));
                            arr_36 [i_4] [i_1] [i_4] [i_7] [i_10] |= (!(((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) 18U)))));
                        }
                        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_4] [i_7] = ((/* implicit */unsigned char) var_11);
                            arr_40 [i_1] = ((/* implicit */int) (~(max((2U), (18U)))));
                            var_23 = ((/* implicit */unsigned int) arr_33 [i_1] [i_1] [i_7] [i_0] [i_11]);
                        }
                    }
                    for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        arr_44 [i_0] [i_12] [i_4] [i_12] [i_4] [i_1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                        var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_37 [i_0 + 2])))))));
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_22 [i_1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1] [i_1] [i_4] [i_13] [i_1] [i_4]))));
                        arr_48 [i_1] [i_4] [i_4] [i_13] = ((/* implicit */unsigned short) arr_47 [i_0] [i_13] [i_4] [i_13] [i_13]);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_6))))), (arr_31 [i_0 + 1] [i_1 + 1] [i_1] [i_13] [i_1]))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_51 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((4294967271U) > (16U))) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((4294967269U), (4294967278U)))) && (((/* implicit */_Bool) arr_11 [i_1] [i_14] [i_4] [i_1] [i_4]))))))));
                        arr_52 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((int) var_15)) % ((~(((/* implicit */int) arr_22 [i_1] [i_1 + 1] [i_4] [i_1] [i_1] [i_4]))))));
                        arr_53 [i_0] [i_1] [i_14] [i_1] [i_14] = (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_45 [i_0])), (arr_22 [i_1] [i_1 + 1] [i_4] [i_14] [i_4] [i_0 + 1])))));
                    }
                }
                arr_54 [i_1] = ((/* implicit */unsigned long long int) ((4294967294U) | (1U)));
                arr_55 [i_1] = ((/* implicit */signed char) 24U);
                arr_56 [i_0] [(unsigned char)6] &= ((/* implicit */short) ((var_2) ? (((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]), (var_13)))) : (((unsigned long long int) ((arr_10 [i_0] [i_1]) - (((/* implicit */unsigned long long int) var_6)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) min((((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) ((4294967283U) > (4294967294U))))))), (((/* implicit */unsigned int) var_1))));
}
