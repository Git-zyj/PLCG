/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2 - 3] [i_1 - 1] [i_0] [i_0] [i_2] = var_8;
                        var_13 = (arr_3 [i_1 - 1]);
                        var_14 = (min(var_14, ((((0 - 2663669932) > (arr_9 [i_0] [i_0] [i_3]))))));
                    }
                }
            }
        }
        var_15 = ((~((var_0 ? var_4 : var_4))));
    }
    var_16 = (min(var_16, ((min(((var_8 ? ((4294967292 ? 1631297364 : var_12)) : (((min(1, var_12)))))), var_10)))));
    var_17 = (min(var_17, (((2817130273 ? var_10 : var_12)))));
    #pragma endscop
}
