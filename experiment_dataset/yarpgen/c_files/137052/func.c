/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137052
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
    var_13 = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((((/* implicit */int) var_7)) ^ ((-(((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */unsigned int) (+(var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [(signed char)3] = ((/* implicit */long long int) min((((arr_4 [i_3] [14ULL] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((_Bool) var_0))));
                            arr_13 [i_3] [(unsigned char)15] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_3])), (var_10))));
                            var_15 = ((/* implicit */signed char) max((max((var_1), (max((var_10), (((/* implicit */unsigned long long int) arr_9 [i_0])))))), (((/* implicit */unsigned long long int) arr_5 [i_0]))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] = ((_Bool) max((((/* implicit */unsigned int) var_11)), (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */long long int) var_10);
                var_16 = ((/* implicit */long long int) (~((+(arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_17 = arr_24 [i_4] [i_7];
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_31 [i_8] [i_7] [i_5] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_32 [i_5] [(_Bool)1] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_7] [i_7] [i_6]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_36 [i_4] [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) (+(((long long int) var_3))));
                            arr_37 [i_4] [i_5] [i_5] [i_6] [i_5] [i_7] [i_5] = arr_28 [i_5] [i_4];
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_2))));
                            var_19 = ((/* implicit */long long int) arr_26 [i_4] [(signed char)20] [(signed char)8] [(signed char)8]);
                            arr_40 [i_4] [10LL] [10LL] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                            arr_41 [i_4] [i_5] [(unsigned char)5] = var_9;
                            var_20 -= ((/* implicit */unsigned char) ((((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [2LL] [13U] [i_7] [i_10]))))) < (((/* implicit */unsigned long long int) arr_28 [i_7] [i_7]))));
                        }
                        var_21 = arr_24 [i_4] [i_5];
                        /* LoopSeq 1 */
                        for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
                        {
                            arr_45 [i_4] [i_5] [i_6] [15LL] [i_5] = ((/* implicit */_Bool) ((long long int) (-(arr_16 [i_4]))));
                            var_22 |= ((/* implicit */unsigned char) (~(17076229434294825841ULL)));
                            var_23 = ((/* implicit */signed char) var_0);
                            var_24 ^= ((/* implicit */unsigned short) ((long long int) arr_43 [i_11 - 2] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11]));
                            var_25 = (!(((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_7] [i_11])));
                        }
                    }
                    arr_46 [i_6] [i_5] [i_6] = arr_39 [i_4] [i_5] [i_6] [i_5];
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        arr_49 [i_4] [(unsigned char)20] [i_5] [i_12] = (i_5 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) >> (((((/* implicit */int) arr_39 [i_4] [i_5] [i_6] [i_5])) + (30864)))))), ((-(5502977108087000669LL)))))) : (((/* implicit */short) min((((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) >> (((((((/* implicit */int) arr_39 [i_4] [i_5] [i_6] [i_5])) + (30864))) - (27674)))))), ((-(5502977108087000669LL))))));
                        arr_50 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) var_6));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            var_26 = ((/* implicit */short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_4] [i_5] [i_12] [i_13])))))))));
                            var_27 = ((/* implicit */unsigned short) var_10);
                        }
                    }
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        arr_57 [i_6] [(short)19] [i_6] [i_5] [i_6] = ((/* implicit */signed char) arr_24 [(unsigned char)14] [i_5]);
                        var_28 = ((/* implicit */unsigned char) (+(((int) arr_39 [i_4] [i_4] [0LL] [i_5]))));
                    }
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
                    {
                        arr_60 [i_15] [i_5] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) ((signed char) ((short) (-(var_12)))));
                        var_29 += ((/* implicit */short) arr_38 [i_4] [i_4] [i_4] [i_4] [i_15]);
                    }
                    arr_61 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(var_12)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9)))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_43 [i_4] [i_5] [i_6] [i_5] [i_6])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        for (int i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                arr_67 [i_4] [i_5] [(short)7] [i_6] [i_16] [i_17] = ((/* implicit */_Bool) max(((-(arr_47 [i_5]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_5] [i_5] [i_5])))))));
                                arr_68 [i_5] = ((/* implicit */_Bool) max((((unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_42 [i_4] [i_4] [i_4] [i_5] [i_4] [i_4])), (arr_53 [i_4] [i_5] [i_5] [i_6] [i_16] [i_16] [(unsigned char)15])))))))));
                                var_30 &= ((/* implicit */short) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_55 [i_6] [i_17] [i_6] [i_17]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((1370514639414725775ULL) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)136))))), (var_5)))))))));
}
