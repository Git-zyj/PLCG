/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168
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
    var_13 &= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_0 [(unsigned char)11] [(unsigned char)9])));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_15 += ((/* implicit */unsigned char) arr_3 [(unsigned char)13]);
        var_16 = arr_3 [i_0];
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        for (short i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((unsigned char) arr_5 [i_2]))));
                                var_18 = ((/* implicit */unsigned char) arr_12 [i_1] [(unsigned char)1] [i_1] [i_2] [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((unsigned short) arr_9 [i_6] [i_6]))));
                        var_20 = ((unsigned char) (short)27179);
                        var_21 = ((/* implicit */short) max((var_21), (arr_7 [i_1] [i_2])));
                        var_22 = ((/* implicit */short) ((unsigned char) arr_1 [i_1]));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            arr_19 [(unsigned char)3] [(unsigned short)8] [i_3] [i_1] [(unsigned char)3] [i_1] = ((unsigned char) ((unsigned char) arr_18 [i_1] [i_2 - 2] [i_2 - 2] [i_6] [i_7]));
                            var_23 ^= arr_15 [i_7] [i_6] [i_2] [i_2];
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)103)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 4; i_8 < 11; i_8 += 2) 
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (short)32767)));
                            var_25 ^= ((/* implicit */short) ((unsigned char) arr_0 [i_1] [i_6]));
                        }
                        for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (arr_1 [i_1])));
                            arr_25 [i_6] &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((unsigned char) arr_17 [i_2]))));
                            var_27 = arr_24 [i_1] [i_2] [i_1] [i_6] [i_9];
                            var_28 = ((/* implicit */unsigned char) arr_14 [i_6] [i_6] [i_6] [i_1] [i_6] [i_6]);
                            arr_26 [i_9] [i_1] [i_3] [(unsigned char)14] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_23 [i_1] [(short)9] [i_1] [i_6] [(unsigned char)10]);
                        }
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_29 = ((unsigned char) ((unsigned short) arr_24 [i_1 - 1] [i_2 - 2] [i_3] [i_10] [i_1]));
                        var_30 ^= ((/* implicit */unsigned char) ((unsigned short) ((short) ((unsigned char) arr_12 [i_10] [(unsigned char)0] [i_3] [i_10] [i_10]))));
                        arr_29 [i_1] [i_2] = ((/* implicit */unsigned char) arr_17 [i_1]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((unsigned short) arr_23 [i_2] [(short)1] [(short)1] [(short)4] [i_2 - 2]));
                        var_32 = ((/* implicit */short) max((var_32), (arr_31 [i_1] [i_1] [i_2 + 1] [i_3] [i_11])));
                        var_33 = ((unsigned short) ((short) ((unsigned short) (short)-27179)));
                        var_34 = ((/* implicit */unsigned short) arr_8 [(short)9]);
                        arr_32 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((unsigned char) arr_31 [i_1] [i_2 - 2] [i_1] [i_3] [i_11]))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((short) ((unsigned short) ((unsigned short) arr_14 [(unsigned char)4] [(unsigned char)3] [i_3] [i_1] [i_2] [i_1]))));
                        arr_35 [i_1] [i_2] [i_3] [i_12 + 1] |= ((/* implicit */unsigned char) ((unsigned short) arr_31 [(unsigned char)12] [i_2 + 1] [i_3] [i_3] [(unsigned char)12]));
                        var_36 &= ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((unsigned char) arr_9 [i_2] [i_2]))));
                    }
                    var_37 = ((/* implicit */short) ((unsigned short) arr_31 [i_3] [i_2] [i_1] [i_2] [i_1]));
                }
            } 
        } 
        var_38 ^= arr_2 [i_1] [i_1 + 2];
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((short) ((unsigned char) ((unsigned char) arr_2 [i_1] [i_1 - 1])))))));
    }
    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) var_7))));
    var_41 = ((/* implicit */unsigned char) var_0);
}
