/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131667
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
    var_11 = ((/* implicit */unsigned char) var_5);
    var_12 ^= var_2;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = arr_4 [3LL] [8ULL];
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                    var_14 = arr_5 [i_0];
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_0] [i_1]));
                    var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1] [i_0]));
                }
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_16 = arr_3 [i_0] [i_0] [(short)3];
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 *= arr_6 [i_3] [i_4];
                        arr_16 [6U] [i_0] = ((/* implicit */long long int) arr_13 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]);
                        var_18 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [(_Bool)1]);
                        arr_17 [17ULL] [i_0] [i_0] [i_0] = ((unsigned int) arr_8 [i_0] [i_3] [i_4]);
                        var_19 = ((/* implicit */unsigned int) arr_8 [i_4] [12LL] [6ULL]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned int) arr_18 [3LL] [(_Bool)1])))));
                        arr_21 [i_0] [i_0] [18U] [i_5] [i_5] [11ULL] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [8ULL]);
                    }
                    arr_22 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_0] [15ULL]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned int) arr_5 [i_0]));
                            var_22 &= ((/* implicit */unsigned char) arr_1 [i_1] [i_6]);
                            var_23 = ((/* implicit */unsigned int) arr_0 [(signed char)14]);
                            var_24 = ((/* implicit */long long int) arr_27 [i_0] [i_7] [i_7] [9U] [i_7] [4LL] [i_7]);
                        }
                        var_25 ^= ((/* implicit */long long int) ((short) arr_28 [i_6] [i_6] [12ULL] [i_6] [i_6]));
                    }
                    arr_29 [8U] [8] [i_3] [(_Bool)1] |= ((/* implicit */unsigned int) ((unsigned long long int) arr_23 [i_1]));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_39 [i_8] [i_0] [i_8] [14ULL] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) arr_24 [13ULL] [i_0] [13ULL] [13ULL] [i_10] [10LL]);
                                var_26 += ((/* implicit */signed char) ((unsigned int) arr_0 [i_10]));
                                var_27 ^= ((/* implicit */int) arr_4 [i_0] [7LL]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) arr_11 [21U] [i_0] [i_0] [21U]);
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_29 *= ((/* implicit */_Bool) arr_18 [i_0] [i_0]);
                        arr_42 [i_0] [i_0] [i_8] [i_8] [i_1] [14] = ((/* implicit */_Bool) arr_37 [i_0] [i_1]);
                        arr_43 [4LL] [i_8] [4ULL] [i_8] [4LL] |= ((/* implicit */signed char) ((unsigned int) arr_31 [i_0] [(signed char)5] [(signed char)5] [i_11]));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_0] = ((/* implicit */signed char) arr_44 [10U] [(unsigned char)16]);
                        arr_47 [i_0] = arr_28 [i_0] [i_8] [(unsigned char)1] [(signed char)10] [i_8];
                    }
                    arr_48 [i_0] [i_0] [i_0] [5U] = ((/* implicit */signed char) arr_41 [10LL] [10LL] [(signed char)11] [(signed char)19]);
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 4; i_14 < 20; i_14 += 4) 
                    {
                        var_30 *= ((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [8ULL] [8ULL] [(unsigned short)1]);
                        arr_56 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_28 [i_0] [7LL] [10ULL] [9LL] [10ULL]));
                        arr_57 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_50 [i_0]));
                        arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) arr_35 [i_0] [2ULL] [i_0] [i_14] [i_14]));
                    }
                    var_31 = ((/* implicit */unsigned long long int) arr_41 [4U] [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
}
