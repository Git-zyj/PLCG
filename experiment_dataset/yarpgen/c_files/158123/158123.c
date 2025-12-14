/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [0] [i_0] = 65529;
        var_11 = (((arr_0 [i_0] [0]) > (((min(((((arr_2 [i_0]) && var_0))), (max((arr_3 [i_0]), (arr_3 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] &= (min((max((arr_1 [i_0] [i_2]), ((var_6 ? var_4 : (arr_7 [i_1] [i_2]))))), (arr_5 [i_2 + 1] [i_2])));
                        var_12 = (arr_0 [i_0] [i_0]);
                        arr_14 [i_1] [i_1] [i_3] = arr_7 [i_2] [i_1];
                        var_13 = (min(var_6, (arr_9 [i_1])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_4] [i_4] [i_0] [8] = var_0;
                        arr_24 [i_4] [i_5] [i_4] [i_4] = var_9;
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, ((((min(var_9, var_4))) ? -var_7 : var_3))));
    var_15 = var_0;
    #pragma endscop
}
