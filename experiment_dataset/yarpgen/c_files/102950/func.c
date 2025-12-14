/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102950
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
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0 + 2] [i_2]))));
                    var_16 &= ((/* implicit */unsigned short) arr_1 [i_0]);
                }
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3050861861U)) * (1723053815112909215ULL)));
                /* LoopSeq 2 */
                for (int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_3])) << (((((/* implicit */int) (signed char)102)) - (94)))))))))) ^ (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) * (15954314101586610785ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_1] [i_3] [i_0]), (((/* implicit */short) arr_8 [i_0] [i_3] [i_1] [i_0]))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3] [i_1]))));
                        var_20 = ((/* implicit */_Bool) arr_15 [i_0 + 2] [i_3 - 3] [i_3 - 2] [(short)5]);
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_4] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_2 [i_3]);
                            arr_19 [i_4] [i_1] [(short)6] [i_1] [i_1] = arr_15 [i_1] [i_1] [i_1] [i_1];
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1244105414U)) || (((/* implicit */_Bool) arr_10 [i_5 - 2] [i_3 - 1] [i_0 - 2])))))));
                            arr_20 [i_0] [i_1] [i_3] [i_4] [i_3] &= ((/* implicit */_Bool) ((arr_14 [i_4 + 1] [i_4 + 1] [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_25 [i_1] [i_4] [i_3] [i_1] [i_6] [i_3 + 2] [i_3] = ((/* implicit */unsigned short) (+((+(var_5)))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_7 [i_3 - 1] [i_0 + 1]) <= (arr_7 [i_3 - 3] [i_0 + 1]))))));
                            arr_26 [i_4] [i_1] [i_3] = arr_10 [i_6] [i_1] [i_0];
                            arr_27 [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_0 + 1]))) : (arr_16 [i_0 + 1] [i_4] [i_3 - 3] [i_4] [i_4 - 4])));
                            var_23 += ((/* implicit */short) arr_7 [i_0 - 1] [i_0 - 1]);
                        }
                        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 + 1] [i_4 - 4] [i_3] [i_3 - 3])) > (((/* implicit */int) arr_8 [i_0 - 1] [i_4 - 1] [4] [i_3 + 2]))));
                            var_25 ^= ((/* implicit */unsigned int) var_13);
                            arr_30 [i_0] [i_0 - 1] [8ULL] [i_0] [i_0] |= ((/* implicit */short) ((((2492429972122940831ULL) / (2492429972122940823ULL))) < ((+(arr_17 [i_0] [i_0] [i_3])))));
                        }
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_26 = (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 2492429972122940831ULL)) ? (arr_31 [i_0] [i_0] [i_3] [i_8]) : (((/* implicit */unsigned long long int) arr_13 [i_0 - 2] [(short)12] [i_0 + 2] [i_0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_37 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_0])) ? (arr_15 [i_0] [i_1] [i_3 + 2] [i_8]) : (((/* implicit */int) arr_6 [(unsigned short)14] [i_9]))));
                            var_27 = ((/* implicit */signed char) (-(arr_0 [i_0 - 1])));
                        }
                        for (short i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_39 [i_0 - 2] [i_10] [i_3] [i_8])) ^ (((/* implicit */int) arr_39 [i_0 - 2] [i_10] [i_10] [i_8])))) * (((((/* implicit */int) arr_39 [i_0 - 1] [i_10] [i_3] [i_8])) * (((/* implicit */int) arr_39 [i_0 + 2] [i_10] [i_3] [i_10]))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */_Bool) (unsigned short)29250);
                            arr_41 [i_10] [i_3] [i_1] [i_3] [i_3] [i_1] [i_10] = ((/* implicit */unsigned short) arr_34 [11ULL] [i_10 + 2] [i_10 + 2]);
                        }
                    }
                }
                for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(var_5))))));
                        arr_48 [i_12] [i_1] [i_1] [i_12] = ((/* implicit */_Bool) (+(arr_36 [i_0 - 2] [i_0 - 2])));
                        var_31 = ((/* implicit */_Bool) 2492429972122940831ULL);
                    }
                }
            }
        } 
    } 
}
