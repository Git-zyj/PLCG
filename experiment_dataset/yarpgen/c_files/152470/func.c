/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152470
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
    var_15 = ((/* implicit */unsigned short) var_8);
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_1 [i_1 - 1]))));
                            var_19 = ((/* implicit */unsigned short) arr_2 [i_4] [4]);
                            arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [6] [i_0] [i_0] &= ((/* implicit */signed char) arr_8 [i_2 + 1] [i_2 + 2]);
                        }
                        arr_13 [i_1] [i_1] [4ULL] [i_3] = ((/* implicit */unsigned short) arr_2 [i_2] [i_3]);
                        arr_14 [i_1] [i_3] = ((/* implicit */signed char) arr_5 [i_0 - 1] [i_1] [i_0 - 1] [i_3]);
                    }
                    for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_21 ^= ((/* implicit */unsigned char) var_10);
                        var_22 = ((/* implicit */short) arr_7 [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_2] [(_Bool)1]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_2 + 3] = ((/* implicit */long long int) arr_1 [i_0 - 1]);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_1 - 1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 + 2]);
                            var_23 = ((/* implicit */_Bool) var_8);
                            arr_23 [i_0 - 1] [i_1] [i_1] [i_6] [i_7] [i_6] [(short)4] &= ((/* implicit */unsigned short) arr_21 [i_1 - 1] [i_6] [i_7]);
                        }
                        for (short i_8 = 4; i_8 < 11; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) arr_0 [(_Bool)1]);
                            var_25 ^= ((/* implicit */short) arr_10 [i_0 - 1] [i_1 - 1] [i_2 + 4] [i_6] [i_8 + 1]);
                            arr_26 [i_1] [(short)3] [(short)3] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1] [4LL]);
                            var_26 = ((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_1]);
                            var_27 = ((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1]);
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]);
                            arr_29 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = var_3;
                            var_29 = ((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1 - 1]);
                            var_30 = ((/* implicit */_Bool) var_2);
                        }
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_33 [(unsigned short)7] [(unsigned short)7] [(_Bool)1] [(_Bool)1] [i_10] [i_1] [(unsigned short)7] = ((/* implicit */short) arr_3 [i_0 - 1]);
                            var_31 = ((/* implicit */unsigned char) var_11);
                        }
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_32 += arr_11 [i_11] [i_11] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] [i_0 - 1];
                            arr_38 [i_0] [i_0] [i_1] [i_6] [i_0] = ((/* implicit */int) arr_34 [(short)10] [i_1] [i_1] [i_6] [(short)10] [4]);
                            var_33 -= ((/* implicit */signed char) arr_34 [i_0] [i_1] [i_2] [i_2 + 4] [(unsigned short)9] [i_11]);
                        }
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_34 = arr_35 [i_2 + 3] [i_2 + 4] [i_2 - 1] [i_2 - 1] [i_2 + 4];
                            var_35 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_6] [(_Bool)1]);
                        }
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) min((var_36), (arr_41 [i_13] [i_13] [i_13] [i_0])));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            arr_46 [i_1] [i_1] [i_2] [i_13] [i_14] = arr_25 [i_14] [i_0 - 1] [9] [i_0 - 1] [i_0 - 1];
                            var_37 = arr_34 [i_0 - 1] [(unsigned short)1] [i_13] [(_Bool)0] [i_0 - 1] [i_13];
                            arr_47 [i_14] [i_14] [i_14] [i_1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) var_2);
                        }
                        var_38 += ((/* implicit */_Bool) arr_3 [i_0 - 1]);
                    }
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            arr_52 [(unsigned short)9] [i_1] = ((/* implicit */short) var_2);
                            var_39 -= ((/* implicit */short) var_5);
                            arr_53 [i_1] [i_15] [i_1] = ((/* implicit */_Bool) arr_5 [i_16] [i_15] [i_2 - 1] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) var_13);
                            arr_56 [i_1] [i_1] [i_1] [i_15] [i_17] [i_1] = var_13;
                        }
                        /* LoopSeq 3 */
                        for (int i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            var_41 -= ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_15] [i_18]);
                            var_42 = ((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [8ULL]);
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 12; i_19 += 1) 
                        {
                            arr_63 [i_15] [i_1] [i_15] [i_15] [5ULL] [6] = ((/* implicit */short) arr_16 [i_0] [i_1]);
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) arr_44 [i_0] [i_0] [i_0] [i_15] [i_0] [3ULL]))));
                            var_44 ^= var_0;
                            arr_64 [i_15] |= ((/* implicit */unsigned long long int) arr_31 [i_0 - 1]);
                        }
                        for (short i_20 = 2; i_20 < 10; i_20 += 1) 
                        {
                            var_45 |= arr_66 [i_20 + 1] [i_2 + 2] [i_1] [i_1 - 1] [i_0 - 1];
                            arr_68 [12ULL] [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_15] [i_20] = ((/* implicit */unsigned char) var_1);
                        }
                    }
                }
            } 
        } 
        var_46 |= ((/* implicit */short) var_2);
    }
}
