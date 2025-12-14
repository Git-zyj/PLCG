/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~1);
        var_18 = (((var_13 < var_7) ? (((arr_0 [i_0] [i_0]) ^ var_2)) : (~1)));
        var_19 = (max(var_19, 222));
    }
    var_20 = (((((var_10 ? var_11 : 1))) ? (var_7 < 1) : 1));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 += 213;
                    var_22 -= min((min((arr_10 [i_1 + 1]), (arr_4 [i_1 + 1]))), ((((arr_6 [i_3] [i_2] [i_1]) || var_0))));
                }
            }
        }
    }
    #pragma endscop
}
