/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_1, -126)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = var_4;

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [1] [7] = ((((((arr_2 [i_0] [i_1]) ? var_9 : var_6))) ? (arr_10 [i_0 + 1] [i_0] [i_2] [1] [i_4] [i_3]) : 11));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = (arr_11 [6] [i_1 - 4] [9] [1] [i_3] [i_4] [i_4]);
                        }
                    }
                }
            }
            var_16 = (max(var_16, (~var_1)));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_17 = (arr_3 [i_0] [i_0] [i_0 - 2]);
            var_18 = (max(var_18, 125));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_2));
                            arr_25 [i_7] [i_5] [i_5] [1] [2] [i_5] [i_5] = 929967114;
                        }
                    }
                }
            }
            arr_26 [1] [i_5] = (((arr_21 [i_0 + 1] [2] [i_0 + 1] [i_0 + 1]) ? (((arr_8 [i_0] [i_5]) ? var_3 : 16)) : 929967114));
            var_20 = ((var_2 / (arr_12 [14] [i_0 - 1] [6] [i_0 - 2] [i_0] [i_0])));
        }
    }
    var_21 = ((929967114 > ((var_2 ? -12 : var_5))));
    var_22 = (max(var_22, var_10));
    var_23 = (min(var_23, (((((max((786934094 && 125), var_13))) ? var_3 : ((-786934089 ? var_1 : ((var_11 ? var_9 : -1)))))))));
    #pragma endscop
}
