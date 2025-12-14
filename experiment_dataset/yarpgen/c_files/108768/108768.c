/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max(3680168725, var_5));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (min(((var_12 ? var_7 : var_9)), (min(-614798570, (max(var_12, 3680168723))))));
                        var_18 = (!var_2);
                        var_19 = (min(var_19, 0));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = 614798570;
    }
    var_20 = (min(((((~var_4) >= ((var_12 ? var_9 : var_9))))), (3680168707 ^ 1934)));
    #pragma endscop
}
