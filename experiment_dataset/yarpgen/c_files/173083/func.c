/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173083
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_0]);
                var_15 = ((/* implicit */unsigned short) arr_0 [i_1]);
                var_16 |= min((((/* implicit */long long int) max((max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned char) arr_4 [(unsigned short)17]))))), (min((((/* implicit */long long int) arr_4 [i_0 - 2])), (arr_0 [(short)1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_1] [i_0] [i_0] [(unsigned char)12] [i_4] [i_2]), (((/* implicit */unsigned int) arr_4 [i_4]))))), (min((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_12 [i_3] [i_2]))))), (((/* implicit */unsigned long long int) max((-1632331289810245645LL), (((/* implicit */long long int) min((((/* implicit */signed char) arr_7 [i_2])), ((signed char)-46)))))))));
                                var_17 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_8 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 2])), (max((min((-1632331289810245662LL), (-1632331289810245645LL))), (((/* implicit */long long int) arr_8 [i_0] [i_0 - 2] [i_1] [i_2] [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    arr_15 [i_2] [i_2] [i_0 - 2] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((1632331289810245644LL), (-1632331289810245645LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_2] [i_2] [(_Bool)1]))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_19 = ((/* implicit */long long int) arr_3 [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_0] |= ((/* implicit */unsigned short) min((arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_5] [i_6])));
                        var_20 = ((/* implicit */int) arr_17 [i_0]);
                        arr_23 [0LL] [i_1] [0LL] [i_1] [i_6] = ((/* implicit */unsigned char) arr_18 [i_0] [i_1] [i_5] [i_6]);
                        var_21 = ((/* implicit */unsigned char) min((arr_3 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_5]))));
                    }
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) min((min((arr_25 [i_7 - 1] [i_7 - 1]), (arr_12 [i_0] [i_7]))), (((/* implicit */unsigned long long int) max((arr_26 [i_8 - 2] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) max((((/* implicit */unsigned char) arr_16 [i_0] [i_5] [i_8])), (arr_1 [i_7])))))))));
                            arr_29 [i_7] [i_7] = ((/* implicit */signed char) min((arr_18 [i_0] [i_1] [(unsigned char)8] [i_7]), (((/* implicit */unsigned long long int) max((arr_9 [i_8] [i_7] [i_5] [i_7 + 1] [(unsigned char)8]), (((/* implicit */short) arr_4 [i_8])))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */short) max((arr_25 [i_0] [i_0]), (max((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_7] [i_7 + 1] [i_8])), (min((((/* implicit */unsigned long long int) arr_27 [i_7] [i_1] [i_5] [i_7] [i_1])), (arr_25 [i_5] [i_7])))))));
                        }
                        var_23 = ((/* implicit */unsigned int) max((arr_12 [i_0] [i_7]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_0]))));
                        var_24 = ((/* implicit */short) arr_18 [i_0] [i_5] [i_5] [i_7]);
                        arr_31 [i_0] [i_1] [i_1] [i_5] [i_7] = ((/* implicit */unsigned char) max((max((arr_18 [i_0] [i_0] [i_0 + 1] [i_0]), (max((arr_25 [i_1] [i_5]), (arr_3 [i_1]))))), (max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_7])), (arr_25 [i_0 + 1] [i_7 - 1])))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_35 [i_5] = ((/* implicit */unsigned char) arr_6 [i_0 - 2] [i_1] [i_0 - 2]);
                        arr_36 [i_5] = ((/* implicit */long long int) arr_7 [i_0]);
                    }
                    arr_37 [i_1] [i_1] [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (short)-3109)), (4525289699161610833ULL))), (min((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_3 [(short)0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [i_0] [2LL] [i_1] [2LL])), (arr_0 [i_0]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            {
                arr_44 [i_10 - 1] [i_10 - 1] = arr_0 [i_10];
                var_25 = ((/* implicit */long long int) arr_4 [i_11]);
                /* LoopNest 3 */
                for (short i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    for (int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
                        {
                            {
                                arr_52 [i_10] [i_11] [i_10] = ((/* implicit */short) arr_43 [i_10]);
                                var_26 |= ((/* implicit */unsigned int) arr_17 [i_10]);
                                arr_53 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] = ((/* implicit */short) arr_13 [i_10] [i_11] [i_11] [i_11] [i_12 + 3] [i_12 + 3] [i_11]);
                            }
                        } 
                    } 
                } 
                arr_54 [i_10] = ((/* implicit */_Bool) min((min((min((arr_25 [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_2 [i_10])))), (((/* implicit */unsigned long long int) min((arr_6 [i_10 - 1] [i_11] [i_11]), (((/* implicit */short) arr_2 [i_11]))))))), (min((((/* implicit */unsigned long long int) arr_6 [i_11] [11U] [i_10])), (arr_12 [i_10] [i_11])))));
                var_27 ^= ((/* implicit */_Bool) max((max((arr_49 [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10]), (((/* implicit */unsigned long long int) min((arr_24 [i_11]), (((/* implicit */unsigned short) arr_6 [i_11] [i_11] [i_10 - 1]))))))), (((/* implicit */unsigned long long int) arr_7 [i_11]))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) max((15913002953133491769ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    /* LoopSeq 1 */
    for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        var_29 = ((/* implicit */short) min((var_29), (arr_40 [i_15] [i_15])));
        arr_57 [i_15] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)15)), (1632331289810245644LL)));
    }
}
