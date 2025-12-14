/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187939
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
    var_11 = ((((/* implicit */_Bool) 7539339397949357125LL)) ? (-8404898667567094425LL) : (6322785466295022632LL));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        arr_11 [15LL] [i_2] [i_1] [16LL] = ((long long int) arr_6 [i_3] [4LL] [i_1] [i_0]);
                        arr_12 [0LL] [11LL] [0LL] [i_0] [3LL] = (~(((arr_5 [i_3 - 2] [i_3 - 1] [18LL] [i_0]) | (var_8))));
                        arr_13 [23LL] [i_2] [19LL] [i_0] = var_3;
                        arr_14 [i_3] [i_2] [10LL] [i_0] = (+(((((((((/* implicit */_Bool) var_2)) ? (arr_7 [i_3] [i_3] [7LL] [i_0] [i_0]) : (arr_4 [i_3]))) + (9223372036854775807LL))) >> (((arr_1 [i_3 + 1]) - (5220091848962625017LL))))));
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_20 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_5 [i_5] [i_4] [i_1] [1LL]) : (var_4)))) ? (arr_16 [i_4]) : (arr_7 [i_5] [i_4] [i_1] [i_1] [i_0]));
                            arr_21 [i_4] [i_2] [i_2] [13LL] [i_1] [i_4] = arr_9 [i_2];
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            arr_24 [i_6] [15LL] [i_4] [i_4] [15LL] [i_0] = (-(var_4));
                            arr_25 [i_6] [14LL] [i_0] |= arr_17 [i_6] [i_4] [12LL] [12LL] [13LL];
                        }
                        arr_26 [i_4] [i_4] [i_1] [i_4] [12LL] = ((((/* implicit */_Bool) arr_22 [9LL] [i_4] [i_2] [i_4] [i_0])) ? (((long long int) arr_10 [i_4] [i_2] [i_1] [i_0])) : (var_6));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_31 [i_7] [9LL] [7LL] [i_0] = var_9;
                        arr_32 [i_7] [i_1] [1LL] = (((-9223372036854775807LL - 1LL)) + (4515196574960088115LL));
                        arr_33 [i_7] [22LL] [i_1] [i_0] = var_1;
                        arr_34 [i_7] [i_2] [23LL] [i_0] |= arr_15 [i_7] [19LL] [i_2] [i_1] [6LL] [i_0];
                    }
                    arr_35 [i_0] [8LL] [i_0] = ((((((/* implicit */_Bool) arr_23 [16LL] [16LL] [i_0])) ? (arr_6 [7LL] [i_2] [21LL] [i_0]) : (arr_23 [i_2] [2LL] [i_0]))) | ((+(var_7))));
                    arr_36 [6LL] = var_5;
                }
            } 
        } 
    } 
    var_12 = min((((((/* implicit */_Bool) -4515196574960088115LL)) ? (var_6) : (8721138363582291384LL))), (-9223372036854775800LL));
}
