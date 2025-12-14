/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max(1, (max(var_12, (min(4294967295, 4294967287))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (var_2 - var_6);
                    var_21 = (29 <= 1);
                    var_22 |= var_2;
                }
            }
        }
        var_23 = (min(var_23, 4294967295));
        var_24 = var_9;
    }
    var_25 = (min(var_25, ((max(((((min(var_18, var_2))) + var_1)), 1)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                var_26 = (max((((var_17 << ((((max(1, var_7))) - 54246))))), (((var_7 / 47339) * 4294967282))));

                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    var_27 = (max((max((min(var_17, 4294967288)), (50508 / var_1))), var_7));
                    var_28 = (max((1 + var_11), (var_18 - 15025)));
                }
            }
        }
    }
    #pragma endscop
}
