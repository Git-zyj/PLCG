/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174397
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(_Bool)0] &= ((/* implicit */long long int) var_3);
        var_19 += (~(var_13));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            arr_18 [i_4] = ((/* implicit */short) var_12);
                            arr_19 [i_1] [i_4] [i_3] [i_4] [i_5 + 4] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 3629542698U)) ? (var_14) : (var_10))));
                            var_20 = ((/* implicit */unsigned int) var_18);
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_15)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [15U] [i_4 + 1] [i_6] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16465219898610754725ULL)) && (((/* implicit */_Bool) 2047627151))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_13)));
                            arr_23 [i_1] [i_2 - 1] [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (+(2047627168)))) : (var_7)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_2] [i_4] [i_3] [(_Bool)1] [i_3] = ((var_8) ? (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) 2047627151)));
                            var_23 = (~(2809432261U));
                            arr_27 [i_1] [i_4] [i_3] [i_4] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) var_15))));
                            arr_28 [i_1] [i_1] [i_3] [i_2] [i_7] [(_Bool)1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 1037115634U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) : (3629542706U)));
                        }
                        var_24 = ((/* implicit */short) min((var_24), (var_16)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_31 [i_2 + 1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 3770808810U)) ? (16465219898610754725ULL) : (8952775550228557263ULL)));
                        var_25 = ((/* implicit */int) (((-(min((((/* implicit */long long int) (short)-137)), (-1399603470312266488LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((var_0) >= ((-(var_4)))))))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_2)))) ? (((((/* implicit */_Bool) (~(var_17)))) ? (1056964608U) : (var_6))) : (3238002714U)));
                    }
                    for (unsigned short i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(1644043871U)));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2047627171))))) : ((-(416648378)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_8))));
                            arr_41 [i_1] [i_1] [i_1] [i_1] [20] = ((/* implicit */short) (~(262143LL)));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_45 [(_Bool)1] [i_2] [i_2] [i_2 + 4] [i_2] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                        arr_46 [i_3] [i_3] [16ULL] [16ULL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) var_4)) : (var_18)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_16))))) : ((~(-140737488355328LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (31744U))))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] = var_1;
                        var_30 = ((/* implicit */unsigned int) var_14);
                    }
                    arr_48 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) var_13);
                    arr_49 [i_1] [(short)2] [(short)2] = ((/* implicit */signed char) (-((((_Bool)1) ? (9223372036317904896LL) : (((/* implicit */long long int) var_17))))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) (!(var_15)));
                        arr_53 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) (~(max((((var_8) ? (var_14) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))))));
                        var_32 += ((/* implicit */unsigned short) 3629542701U);
                        arr_58 [i_3] [i_1] [i_1] [i_14] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */long long int) 3238002697U)) | (var_10))) : (((/* implicit */long long int) var_5))));
                        arr_59 [i_1] [i_2 - 1] [i_3] [19LL] = ((/* implicit */unsigned short) var_0);
                        arr_60 [i_1] [i_2 - 2] [i_2 + 4] [i_3] [i_3] [i_14] = ((/* implicit */long long int) var_0);
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) (unsigned char)73);
}
