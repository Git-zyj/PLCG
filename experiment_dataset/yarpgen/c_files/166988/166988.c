/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_17 = var_14;
                        arr_12 [i_0] [i_2 - 2] [i_0] = (max(var_12, (min(1, 134036362))));
                        var_18 = ((min(var_0, var_7)));
                    }
                }
            }
        }
        var_19 = var_7;
    }
    var_20 = var_13;
    var_21 = (var_13 & var_13);
    var_22 = (((!var_6) << 14));
    var_23 = 9223372036854775807;
    #pragma endscop
}
