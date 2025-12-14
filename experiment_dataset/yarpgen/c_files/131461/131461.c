/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(12, 65524));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 *= (6213578806607078867 - 7);
                    var_17 = 13;
                    var_18 = (((~(arr_0 [i_1] [i_0]))));
                    var_19 = (max(var_19, (((-((~(((arr_3 [i_2] [i_1 - 1]) - 0)))))))));
                }
            }
        }
        var_20 = ((((~(max(0, (arr_1 [i_0]))))) | -32));
        var_21 = var_6;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_22 -= (max(14680622562234244974, 14888));
        var_23 = var_1;
    }
    var_24 = var_9;
    #pragma endscop
}
