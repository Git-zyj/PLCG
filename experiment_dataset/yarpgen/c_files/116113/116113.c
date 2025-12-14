/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 += (min(((((max(var_13, (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : -2882)), ((max(638100418, var_10)))));
        var_18 += var_15;
        var_19 += (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_8 [i_3] [1] = ((((((min(var_10, 1))) ? (max(10597, 4294967295)) : 26)) < ((-32767 + (min(62, 4294967295))))));
                        var_20 = 7;
                        var_21 -= var_0;
                    }
                }
            }
        }
    }
    var_22 -= min((((!var_16) ? (11 && var_1) : 61672)), ((min(var_2, -2086504689594997156))));
    #pragma endscop
}
