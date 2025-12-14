/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (min((((!(~-1989943619)))), (min(var_9, var_2))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) | ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((+((((arr_7 [i_0] [i_0] [i_1] [i_1]) > var_3)))));
                    var_14 = ((((max(-1493, (32767 && var_5)))) ? (((-(arr_5 [i_0] [i_0] [i_2])))) : var_5));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((((((arr_10 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3]) ? (arr_8 [i_0] [i_2] [i_1] [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_1])))) && var_10));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_15 = ((!((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4]) ? (arr_7 [i_1] [i_1] [i_3] [i_1]) : -32767)))));
                            var_16 = (arr_7 [i_3] [i_1] [i_2] [i_1]);
                        }

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_17 = (min(((((arr_0 [i_5 + 1]) ? (((arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5]) & (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2]))) : (((arr_2 [i_0] [13]) | 32761))))), var_10));
                            var_18 = ((2085751794 | (((min((arr_15 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 3] [i_5 + 1] [i_5 + 3]), (arr_15 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_19 = 2085751794;
                        arr_22 [i_2] [i_1] [i_2] [i_6] &= (((((arr_15 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1]) > (arr_21 [i_2] [i_1] [i_2] [i_2] [i_2]))) && (arr_4 [i_6] [i_2] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = (((((((arr_18 [i_7] [i_7]) ? var_0 : var_6)) | (arr_23 [i_7])))) ? (max((((arr_25 [i_7]) ? (arr_17 [i_7] [1] [16] [i_7] [i_7] [i_7]) : (arr_11 [10] [10]))), (((var_0 ? (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : 0))))) : var_10);
        arr_26 [i_7] = (min((((((32746 ? (arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_0 [15])))) ? (arr_11 [i_7] [14]) : 3)), (!var_4)));
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        var_21 ^= ((((~(arr_10 [i_8 + 2] [i_8] [24] [i_8 + 2] [i_8 + 2] [i_8 - 2]))) > (((!(arr_10 [i_8] [i_8] [i_8] [18] [i_8 - 1] [i_8 + 3]))))));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_8] [i_9 + 2] [i_8] = (arr_7 [i_8] [i_9] [i_8] [i_8]);
                    arr_35 [i_8] = (min(29128, (min(((((arr_7 [i_8] [i_8] [i_8] [i_8]) && 55))), (min(var_4, var_5))))));
                    var_22 ^= (min((arr_20 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 3] [i_8]), (((((((arr_5 [i_8] [i_8] [i_8]) ? -4194304 : (arr_0 [i_8 + 4])))) > (arr_14 [i_10] [i_9] [i_9] [i_8] [i_8 - 1]))))));
                }
            }
        }
        arr_36 [i_8] [i_8] = ((!((min((arr_27 [i_8]), (~-1494))))));
        var_23 = (min(var_23, (((33510 ? ((((-389647085 && var_6) && -32762))) : (((((min((arr_13 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8]), var_6))) && (arr_24 [i_8 + 4] [i_8 + 1])))))))));
    }
    #pragma endscop
}
