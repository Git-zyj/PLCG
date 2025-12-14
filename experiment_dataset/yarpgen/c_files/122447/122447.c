/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (min(var_2, (min(var_16, var_7)))) : (((max(var_10, var_14))))));
    var_20 = (max((((var_3 < (max(8589934591, 1))))), var_0));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((((arr_1 [i_0] [i_0]) & (arr_0 [i_0] [15]))))))) ? (arr_1 [14] [i_0]) : (arr_1 [i_0 - 2] [i_0])));
        arr_3 [i_0] = -1113169882123534567;
        arr_4 [i_0] = ((var_5 && (~-1113169882123534567)));
        var_21 = (max(((~(arr_1 [i_0] [i_0]))), (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 1] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 = (((~22238) ? ((~(((arr_1 [i_1] [i_1]) >> (((arr_0 [i_1] [i_1]) + 125)))))) : (var_17 * var_6)));
        var_23 = ((max(((min(0, 2147483644))), (max(18, 17)))) * (arr_1 [6] [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] = arr_13 [i_1] [i_1] [i_2] [i_1] [i_1];
                        var_24 = ((var_0 << (((min(((((-22217 + 2147483647) >> (22216 - 22214)))), (((arr_7 [i_2]) ? var_11 : (arr_8 [i_1]))))) - 18861))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
