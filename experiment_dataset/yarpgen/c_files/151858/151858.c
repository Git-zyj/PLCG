/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = ((817097903 ? 242 : ((1 ? 7 : var_11))));
                    var_15 = var_3;
                    var_16 -= 2042609843139408369;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_17 -= ((~(arr_10 [i_0] [16] [i_2] [i_2] [i_3])));
                        var_18 = ((((min(2042609843139408369, -3))) ? ((var_2 ? var_4 : ((min(var_0, (arr_4 [i_2] [i_2])))))) : (((arr_2 [i_1] [i_3 - 1]) & var_9))));
                    }
                    var_19 = (~var_4);
                }
            }
        }
    }
    #pragma endscop
}
