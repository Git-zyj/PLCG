/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= (max((arr_3 [13] [i_1] [i_1]), (min(var_10, var_6))));
                var_12 = var_8;
                arr_5 [i_0] = (var_7 > 1746894114);
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_13 *= ((!(var_4 * var_2)));
        var_14 = (min(var_14, ((max((max((min(2548073182, 1)), (~1746894114))), ((max(var_5, 96))))))));
        var_15 = (max(var_15, var_1));
    }
    #pragma endscop
}
