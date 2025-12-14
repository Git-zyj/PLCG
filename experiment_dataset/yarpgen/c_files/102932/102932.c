/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [2] = 6943569934394965888;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [19] [i_1] [8] [20] [i_4] = (arr_1 [i_4 + 1]);
                                arr_12 [i_0] [i_1] [18] [13] = (arr_4 [i_4 + 1] [i_4 + 1]);
                                var_18 = ((~(arr_7 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [20] [i_4])));
                            }
                        }
                    }
                    var_19 = (((((arr_2 [i_0] [i_1]) + 2147483647)) >> (28639 - 28634)));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_15 [i_0] [i_1] [2] [i_6])));
                                arr_21 [i_0] [i_1] [i_5] [i_0] [13] [i_7] = (max((((arr_14 [i_0] [i_1] [i_0] [i_7]) ^ 811345446)), (arr_14 [19] [19] [i_5] [19])));
                                arr_22 [i_0] [12] [i_0] [i_5] [i_6] [i_6] [i_7] = (((1793 | var_5) ? (((-(arr_20 [i_0] [i_1] [4] [i_5] [i_6] [i_7] [i_7])))) : (min((arr_17 [1] [i_1] [i_5] [1] [i_7]), 17495040434147555141))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [16] [i_8] = ((951703639561996474 ? (-127 - 1) : (min((arr_14 [i_0] [i_0] [i_0] [i_0]), (min(1228885985, var_10))))));
                        arr_28 [i_8] [3] [i_5] [i_1] [i_1] [i_0] = 17495040434147555135;
                        var_21 = (arr_10 [i_0] [i_0] [i_0]);
                    }
                    var_22 = ((~(~0)));
                    var_23 = (((min((arr_25 [i_0]), (min((arr_19 [i_0] [i_0] [i_0] [i_5]), 17495040434147555121)))) << (((arr_3 [1]) - 153714708))));
                    arr_29 [14] [i_1] [i_5] = 17495040434147555127;
                }
                arr_30 [i_0] [20] = var_0;
                var_24 = 17834443753082551546;
                arr_31 [i_0] [i_1] = 4404649541819629607;
                var_25 = (((min((arr_25 [i_0]), -2061786034406480467)) == 0));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
