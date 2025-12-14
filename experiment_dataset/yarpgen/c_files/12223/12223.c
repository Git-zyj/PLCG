/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = -1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_13 [13] [i_0] [i_3] [i_3] [i_3] = -1481940599;
                            var_15 = 524287;
                            arr_14 [10] [i_0] [9] = 24;
                            arr_15 [i_0 + 2] [20] [i_1] [i_2] [i_3] [i_0] = -1481940599;
                            arr_16 [i_1] [i_0] [i_1] = 0;
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_0 + 4] = 9428;
                arr_18 [i_0] [i_0] [i_1 - 1] = -1481940599;
                arr_19 [i_0] [i_0] = 496097045832163545;
            }
        }
    }
    var_16 = var_7;
    var_17 = var_3;
    #pragma endscop
}
