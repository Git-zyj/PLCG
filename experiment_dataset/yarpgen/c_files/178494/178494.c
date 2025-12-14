/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-74 ? -1550931980659968964 : 1))), var_19));
    var_21 = ((((min(((var_15 ? var_13 : var_13)), 1))) && (1 ^ 5774130613187793442)));
    var_22 = (min((min(var_8, 1)), 77));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_23 *= 1;
                        var_24 *= 1;
                        var_25 -= ((((var_0 ? 229 : 1)) / var_15));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_19 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [20] [i_6] = (((((arr_5 [i_0] [6] [i_5] [i_0]) ? ((12278340921133075337 ? var_3 : 1)) : ((min(var_10, 249))))) << ((((+((min((arr_5 [15] [i_4] [15] [i_0]), var_11))))) - 73))));
                        arr_20 [i_0] [i_4] [i_5] [11] = var_18;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            arr_24 [i_0] = ((-var_18 ? (arr_22 [i_7 + 1]) : var_4));
            var_26 *= (!10016019247220172805);
        }
    }
    #pragma endscop
}
