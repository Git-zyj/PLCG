/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113139
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
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((short) arr_3 [i_0] [i_0] [i_1]));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_10 [i_0] [(unsigned char)1] [i_1] [i_2] [5LL] = ((/* implicit */short) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned char) arr_4 [i_2]));
                        var_18 &= ((unsigned char) arr_6 [i_2]);
                        arr_12 [(_Bool)1] [i_2] [i_1] [(short)6] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((short) ((unsigned long long int) ((long long int) arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_2])))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0])))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) arr_7 [i_0] [i_1] [i_1 + 1] [i_4])));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) arr_4 [i_5]);
                            arr_20 [i_4] [i_6] [i_5] [i_4] [i_1 + 1] [i_4] &= ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_13 [i_0])));
                            var_23 *= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        }
                        for (int i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_7] [i_1] [i_4] [i_1] [i_7] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_19 [i_0] [i_1] [i_4] [i_5] [i_7])));
                            var_24 = ((/* implicit */unsigned int) arr_18 [9ULL] [i_1] [i_4] [i_4] [9ULL]);
                            arr_24 [i_7] = ((/* implicit */_Bool) arr_8 [i_0] [i_1]);
                        }
                        for (int i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_1 + 1] [i_4] [i_0] [i_8] [i_8] |= ((/* implicit */_Bool) ((int) (unsigned char)240));
                            var_25 = arr_22 [(_Bool)1] [(unsigned short)1] [(_Bool)1] [(signed char)1] [i_8];
                        }
                        for (int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            arr_31 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) arr_16 [(unsigned short)7] [i_1 - 1] [i_1 - 1] [(unsigned short)7] [i_1 - 1] [i_1])));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_9]))));
                        }
                        var_27 *= ((/* implicit */unsigned char) ((long long int) arr_5 [i_0] [(unsigned short)1] [i_5]));
                        var_28 = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [12ULL] [3] [i_5]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_0] [i_1] [i_4] [i_1 - 1]));
                        arr_35 [12U] [(_Bool)0] [i_4] [i_4] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_13 [i_4])));
                    }
                }
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        for (signed char i_13 = 4; i_13 < 9; i_13 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_1] [i_11] [i_12] [i_12]));
                                var_31 |= ((/* implicit */unsigned long long int) arr_5 [i_12] [i_1] [i_11]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
