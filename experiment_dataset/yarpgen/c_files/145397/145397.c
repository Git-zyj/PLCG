/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((var_13 ? var_1 : 1902528921710469253))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 *= (max(((9 ? 196 : 65519)), -19));
        arr_2 [i_0] = -9916;
        var_22 = ((((((-7777708911150375279 ? 24 : var_19)))) % (((25472 && (3720248022 % var_18))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [20] [i_2] [7] = (((((40 ? (211 < -25472) : (-1345018289525816364 / 7777708911150375275)))) ? (max(-41118482681930884, 65496)) : (6 / 1)));
                        var_23 = (~65496);
                        var_24 = 30234;
                    }
                }
            }
        }
    }
    #pragma endscop
}
