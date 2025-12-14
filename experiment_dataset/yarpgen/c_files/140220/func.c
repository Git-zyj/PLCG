/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140220
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_2 [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = arr_0 [i_2];
                                arr_13 [i_4] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_7 [(unsigned char)9] [i_3] [(unsigned char)9]) : (arr_7 [i_0] [i_0] [i_0])));
                                arr_14 [i_2] [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_2]));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_8 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2])))))) + (arr_4 [13] [13] [i_2])));
                    var_21 -= ((/* implicit */short) ((arr_10 [i_2] [(unsigned short)5] [i_0] [i_0]) ? (arr_6 [(unsigned char)16] [(unsigned char)16] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_7 [i_1] [i_5] [i_5]))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((short) arr_6 [i_0] [i_0] [i_5] [i_0])))));
                        arr_22 [(short)6] [i_0] [i_6] [(short)6] [i_6] [i_6] = ((/* implicit */unsigned short) ((int) ((unsigned char) (_Bool)1)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 3) 
                        {
                            var_24 += ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [i_7]) + (((int) ((-1512962858) + (1512962857))))));
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = ((unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_1] [(short)4])) ^ (((((/* implicit */int) arr_5 [i_1] [i_1])) / (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_7] [i_7]))))));
                        }
                        arr_29 [i_0] [i_1] [i_5] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_0])) && (((/* implicit */_Bool) arr_21 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_5] [i_0] [i_7] [i_7])) ? (arr_27 [i_7] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_7] [i_0] [i_7] [i_0])))))))) ? (arr_2 [21ULL]) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_9])) || (((/* implicit */_Bool) arr_5 [i_9] [i_1]))));
                        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)6474)) ? (((/* implicit */int) (short)-18764)) : (1512962857)));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_5] [i_0] [i_0]))) % (((arr_20 [i_0] [i_1] [i_0] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_28 = ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_18 [i_10])) : (((((/* implicit */_Bool) arr_24 [i_1] [i_5])) ? (arr_24 [i_1] [(unsigned short)0]) : (arr_24 [i_1] [i_5]))));
                        var_29 = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) -1512962858)));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_30 += ((/* implicit */int) ((unsigned char) (short)23666));
                    var_31 += ((short) ((unsigned long long int) arr_20 [i_0] [i_0] [i_1] [i_11]));
                    /* LoopSeq 2 */
                    for (short i_12 = 3; i_12 < 20; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_0] [i_1] [i_11] [i_12] [i_12] = ((short) arr_10 [i_0] [i_1] [i_12 - 2] [(short)5]);
                        arr_41 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_11])) : (((/* implicit */int) arr_1 [i_0] [i_13]))));
                        var_33 &= ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_11] [i_0]);
                        var_34 = ((/* implicit */unsigned char) arr_36 [i_0] [i_1] [i_11] [i_1]);
                    }
                }
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) var_10);
    var_36 = ((long long int) ((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)0))));
    var_37 -= ((/* implicit */int) var_6);
}
