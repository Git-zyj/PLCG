/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_14, ((-79 ? 117 : var_2))))) ? var_12 : var_7));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 -= (min((max((arr_6 [i_0 + 1]), (arr_6 [i_0 - 3]))), -28603));
                        arr_13 [i_3] [i_2 + 3] [i_1] [i_3] = ((((((arr_6 [i_0 - 1]) + var_14))) ? ((-118 ? (arr_6 [i_0]) : -118)) : (((arr_6 [i_1]) & var_14))));
                        var_17 = (((min((arr_0 [i_0 - 3] [i_0 - 3]), ((var_0 ? 0 : var_0)))) * ((((-28598 / var_8) * (arr_11 [i_0 - 1] [i_3]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_19 [i_0 + 1] [i_0 + 1] [i_5] = ((-106 ? 0 : (((var_13 & 64) & (min((arr_4 [i_0] [i_0 - 3]), 92))))));
                    var_18 -= 127;
                }
            }
        }
    }
    var_19 = 1;
    #pragma endscop
}
