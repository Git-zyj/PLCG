/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (!((var_5 && (~var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = ((((374349301 + (arr_3 [i_0] [i_1] [i_2]))) & (arr_4 [i_0] [i_2])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] = -25;
                        var_13 = (((-25 & 16987) && (((-2077934163 ? 374349316 : -117)))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] = (!-4399513827342855273);
        var_14 = ((-(((arr_7 [12] [i_4] [i_4] [i_4] [8]) >> (((arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]) - 2035021913))))));
        arr_14 [i_4] [i_4] = (!236);
    }
    #pragma endscop
}
