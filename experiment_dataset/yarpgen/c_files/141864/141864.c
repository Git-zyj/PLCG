/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 1247835937153585180));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((min(var_3, ((31509 ^ (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = -1;
                            arr_10 [12] [i_0] [i_0] [i_0] = 1;
                        }
                    }
                }
                var_16 = ((arr_6 [i_0] [i_0] [i_0]) ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : ((290666633 * (var_2 ^ 17198908136555966433))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_14 [i_0] = (min(1247835937153585158, (arr_1 [i_0])));
                    var_17 = ((-(arr_9 [10] [10] [i_4] [i_1] [10])));
                    arr_15 [i_0] [i_0] [i_4] [i_4] = 8443580979680861110;
                }
                arr_16 [i_0] = ((-var_0 ? (var_10 | -32207) : (max((arr_7 [i_0] [i_1] [i_0]), (arr_7 [i_0] [1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
