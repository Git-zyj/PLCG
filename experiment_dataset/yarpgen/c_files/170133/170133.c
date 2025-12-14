/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [6] [i_0]);

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_21 = (max(var_21, (arr_1 [i_0])));
                arr_9 [i_1] [i_1] = (arr_7 [19] [i_1] [i_1] [i_2]);
            }
            var_22 = ((!(arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [16] [i_1] = (arr_11 [i_0] [i_0] [i_0]);
                            arr_18 [i_1] [i_4] [i_1] [i_1] [i_0] = (arr_15 [i_0] [i_0] [16] [i_4] [16]);
                        }
                    }
                }
            }
            var_23 = (arr_5 [i_1 - 1]);
        }
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            var_24 = arr_14 [i_0] [i_0] [1] [1] [i_6 - 2] [i_6];
            arr_21 [i_0] [i_0] [i_0] = (arr_6 [i_0]);
            var_25 -= (-(arr_6 [i_0]));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_27 [i_6] [14] [i_7] [14] [i_8 + 4] [i_8] &= (arr_3 [i_8]);
                        arr_28 [i_6 - 2] [i_6 - 2] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                        var_26 = arr_24 [i_0] [i_0] [i_0] [i_0];
                        var_27 = (arr_19 [i_6 - 2] [i_7 - 1] [i_8 + 1]);
                    }
                }
            }
        }
        var_28 = ((~(arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    var_29 = ((!(((var_2 ? var_3 : -var_3)))));
    #pragma endscop
}
