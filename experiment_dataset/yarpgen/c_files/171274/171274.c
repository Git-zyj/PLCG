/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 + 1] [1] [i_2] = (max(-5179194229328311019, (((var_9 ? (arr_8 [i_2 - 2] [i_2 - 2] [i_3]) : (arr_8 [i_2 - 2] [i_2 - 2] [i_3]))))));
                        arr_11 [i_0] [i_2] = (((((var_18 ^ (((arr_8 [1] [i_1] [i_3]) ? 3411966430 : (arr_1 [i_1])))))) ? (max(((-(arr_3 [i_2]))), ((-32638 ? 32637 : 32645)))) : (arr_9 [i_2 - 2] [9] [i_2] [i_3])));
                    }
                }
            }
        }
        arr_12 [i_0] = (!var_4);
        var_20 = (((arr_8 [i_0] [i_0] [i_0]) ? (((arr_1 [0]) ^ ((3920888212 ? 228 : -2905420641848948075)))) : ((((((arr_5 [i_0] [i_0]) || (arr_8 [i_0] [i_0] [i_0]))) ? (arr_8 [i_0] [i_0] [1]) : ((max(1, 1))))))));
        arr_13 [1] = 6079702882267903162;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 = ((-(arr_16 [i_4 + 1] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_4] [i_7] [i_8] [i_4] &= ((-938755033936228226 ? (arr_21 [i_7]) : (arr_21 [i_7])));
                                arr_29 [i_4] [i_4] = arr_15 [i_8];
                                arr_30 [i_8] [i_7] [i_7] [i_5] [i_4] &= -938755033936228226;
                            }
                        }
                    }
                    var_22 = ((arr_15 [i_4 + 1]) != (arr_15 [i_4 + 1]));
                }
            }
        }
        arr_31 [i_4] [i_4] = ((0 ? (arr_14 [i_4 + 1] [i_4]) : var_16));
    }
    var_23 = ((1 ? 1 : 938755033936228207));
    #pragma endscop
}
