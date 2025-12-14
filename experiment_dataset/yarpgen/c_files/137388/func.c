/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137388
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
    var_12 = ((/* implicit */short) min((((unsigned int) (!(((/* implicit */_Bool) var_7))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
    var_13 |= ((/* implicit */long long int) (~(10542376303482236520ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    arr_9 [(short)2] [(short)7] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_14 += (-((~(arr_11 [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_15 += ((/* implicit */signed char) (~(min((arr_11 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
                            var_16 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [15ULL] [i_4]);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) var_8);
                        }
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_10 [i_0 + 1] [(unsigned short)23] [(unsigned short)23] [i_3]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_19 [i_5] [i_1] = 2301339409586323456ULL;
                        var_18 = ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */long long int) (unsigned short)0)), (2889308473999902191LL))), (((/* implicit */long long int) (+(-1))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_6] [(unsigned char)18] = (-(max((var_5), ((~(arr_5 [i_1] [i_6] [i_7]))))));
                            arr_26 [i_7] [i_6] = ((/* implicit */short) ((unsigned long long int) arr_17 [i_7] [i_7] [i_1] [i_0 - 1]));
                        }
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        arr_33 [i_8] [i_9] = ((/* implicit */short) 2889308473999902191LL);
                        var_21 = arr_11 [i_1];
                        arr_34 [i_0] [i_1] [i_8] [i_8] |= ((/* implicit */short) (~((~(((/* implicit */int) var_7))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_39 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (signed char)96);
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [11ULL] [i_1] [i_8] [i_10])) : ((~(((/* implicit */int) arr_36 [i_10] [i_8] [i_1] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)213)) / (((/* implicit */int) (short)20215))))));
                            arr_46 [i_11] [i_1] [i_11] [i_12] [i_12] [i_1] = ((/* implicit */unsigned int) arr_35 [i_11] [i_1] [i_1] [i_8] [i_0 + 1]);
                            var_24 += ((/* implicit */short) (-(((/* implicit */int) var_11))));
                        }
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_0] [i_1] [(short)22] [i_11] [i_13] [i_13] = ((/* implicit */long long int) var_0);
                            arr_50 [i_13] [i_11] [i_11] [(short)9] [i_0] = ((/* implicit */signed char) var_9);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-90)) == (((/* implicit */int) ((short) arr_45 [i_13])))));
                            arr_51 [i_0] [i_0] [(short)21] [i_11] [i_0] = ((/* implicit */unsigned int) arr_23 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [(short)15] [i_13]);
                        }
                        arr_52 [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0]));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_61 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) min((min((arr_31 [i_15] [i_15] [i_14 + 1] [i_14 + 1] [i_0] [i_0 - 1]), (arr_31 [i_15] [i_14] [i_14] [i_14 + 2] [(unsigned char)15] [i_0 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_15] [i_15] [i_8] [i_1] [i_1] [i_0 - 1])))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_48 [i_0 - 1] [i_0] [i_1] [i_8] [i_14] [15LL] [i_15])));
                            }
                        } 
                    } 
                }
                arr_62 [i_0] [i_1] [i_0 + 1] = ((/* implicit */long long int) var_9);
                var_27 *= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) 4ULL)))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)22)) | (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
    var_28 += ((/* implicit */short) min(((~(((/* implicit */int) (short)3833)))), (((((/* implicit */_Bool) (-(-25)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_7))))))));
}
