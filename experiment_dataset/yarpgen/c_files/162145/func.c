/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162145
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_7);
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((unsigned long long int) var_5));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_8))));
                                var_20 = ((/* implicit */short) ((unsigned int) ((short) arr_9 [i_3] [i_3 - 3] [i_1] [i_4 - 2] [i_4])));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        arr_15 [i_1] = ((/* implicit */short) ((signed char) arr_11 [i_5 - 1] [i_1] [i_2] [i_1] [i_5] [i_0] [i_0]));
                        arr_16 [i_1] [i_1] [i_2] [i_5 + 1] [(short)3] = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                    }
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_22 *= ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) var_6)));
                            var_23 &= ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) 8938952164451191511ULL)));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_8 - 1] [i_8 - 1]));
                            var_25 = ((/* implicit */unsigned short) var_4);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_26 -= var_7;
                            var_27 *= ((/* implicit */unsigned long long int) var_3);
                            arr_26 [i_1] [i_1] [i_9] = ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_9]);
                            var_28 = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((unsigned short) var_2));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_25 [i_2] [i_0] [i_2] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_12 = 3; i_12 < 19; i_12 += 4) 
                        {
                            arr_37 [i_0] [i_11] [14LL] &= ((/* implicit */short) var_2);
                            arr_38 [(short)7] [i_11] [i_1] [i_1] [i_0] = var_7;
                            var_31 ^= ((/* implicit */short) var_7);
                            var_32 &= ((/* implicit */int) ((unsigned int) var_7));
                        }
                        arr_39 [10ULL] [i_1] [i_2] [i_1] = ((/* implicit */short) var_0);
                        /* LoopSeq 2 */
                        for (signed char i_13 = 2; i_13 < 20; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_15);
                            var_34 -= ((/* implicit */unsigned long long int) var_15);
                            var_35 -= ((/* implicit */signed char) arr_8 [i_0] [i_2] [i_0] [i_13 + 1]);
                            var_36 ^= var_8;
                        }
                        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned int) var_10);
                            arr_46 [i_0] [i_1] [i_2] [i_0] [i_14] |= arr_13 [(unsigned char)20] [i_1] [i_1] [i_2] [i_11] [i_14];
                            var_38 |= arr_20 [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_39 ^= arr_2 [i_0] [i_1];
                        }
                    }
                    var_40 -= ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_1))));
    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) var_8))));
}
