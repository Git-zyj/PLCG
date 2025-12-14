/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!0) ? ((((7 <= (((99 ? -6157025122991218993 : 2))))))) : 1);
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((-(arr_0 [i_0]))))));
                            arr_11 [i_3] [i_1 - 4] [i_1 - 4] [i_0] = 252;
                        }
                    }
                }
                var_15 = (-(((((((!(arr_7 [i_1] [8]))))) <= ((-449658328 ? -25 : -1749241759164577897))))));
            }
        }
    }
    #pragma endscop
}
