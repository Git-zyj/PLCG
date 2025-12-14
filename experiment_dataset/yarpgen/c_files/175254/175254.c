/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (min(var_15, ((((-127 >= var_1) << (var_8 + 2008039738))))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] = (((((-123 + (var_3 | 79)))) & (((arr_0 [i_0]) / (arr_0 [i_0])))));
        arr_5 [i_0] = (min(-80, -1689728086));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        var_16 += (+((var_13 ? (arr_3 [i_2] [i_3 + 1]) : var_9)));
                        var_17 = (min(var_17, ((((((-(arr_14 [6] [i_2] [i_0] [6] [i_3 - 1])))) ? ((var_11 ? (arr_12 [7] [i_0 - 1] [i_0]) : 68)) : ((max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 3])))))))));
                    }
                }
            }
        }
    }
    var_18 = 72;
    #pragma endscop
}
