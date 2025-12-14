/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = -9;
                            arr_11 [9] [i_1] = (arr_1 [i_0]);
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] = (arr_7 [i_0] [i_1] [i_0] [i_0]);
                        }
                    }
                }
                arr_13 [i_0] [9] [i_1] = ((-(min(-1360326181, (arr_7 [i_0] [i_0] [i_1] [i_1])))));
                arr_14 [i_0] [i_0] = arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0];
                var_21 = -var_2;
                arr_15 [i_0] = (max((arr_2 [i_0]), 126));
            }
        }
    }
    var_22 = -126;
    var_23 *= var_7;
    #pragma endscop
}
