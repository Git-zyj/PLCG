/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((!2198956146688), var_9));
    var_18 = 24312;
    var_19 = (((((var_15 ? 0 : (max(60, var_7))))) ? var_3 : (max((min(2965999827986442699, 1)), 17315003124216333457))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (862806891 < -1821323856);
        var_20 = ((~((+(((arr_2 [i_0 - 1] [i_0]) - (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_4 [i_1]) >= var_10)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 *= (arr_2 [i_2] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5] [10] = 1315147723;
                                var_23 = (min(var_23, (((arr_14 [1] [i_4] [i_3] [i_4] [i_1] [i_3]) ? 1074999754 : (arr_12 [i_1])))));
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((var_16 ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_17 [i_1] = (arr_9 [i_1]);
    }
    #pragma endscop
}
