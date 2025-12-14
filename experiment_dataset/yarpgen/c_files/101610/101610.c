/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 65535;
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = 65535;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 -= 79112389;
                        var_14 = ((120 < (min(0, var_0))));
                        var_15 = (((min(9926, 54492))));
                        var_16 = var_0;
                    }
                }
            }
        }
        arr_9 [i_0] [i_0] = 2400682826710741696;
    }
    var_17 = 79112389;
    #pragma endscop
}
