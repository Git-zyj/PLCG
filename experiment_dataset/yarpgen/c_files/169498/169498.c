/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~65522);

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, var_5));
                        arr_11 [i_1] = (~1653330167);
                    }
                }
            }
        }
        arr_12 [i_0] = ((((((-(arr_7 [i_0]))))) ? (!26) : (((arr_5 [i_0]) ? var_12 : 0))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_19 = (((~var_7) ? ((var_15 ? 1 : (arr_9 [i_4]))) : 4294967291));
        var_20 = (~4294967295);
    }
    var_21 = 529838307;
    var_22 = ((var_3 ? -3198 : 3198));
    var_23 = (max(var_23, 65522));
    #pragma endscop
}
