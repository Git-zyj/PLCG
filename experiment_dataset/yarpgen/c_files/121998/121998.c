/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-22098 ? (((min(var_5, 4861)))) : -3));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((2754058891 ? (~var_4) : (~var_3)));
                                var_22 = var_5;
                            }
                        }
                    }
                }
                var_23 = (arr_0 [i_0 - 3]);
                arr_10 [i_1] [i_1] = (((var_10 == 83) * ((min(166, (arr_5 [i_0] [21] [i_0 - 1]))))));
                var_24 = -6096835625930712916;
            }
        }
    }
    #pragma endscop
}
