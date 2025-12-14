/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = ((+(min((((arr_0 [i_0] [i_2]) ? (arr_2 [i_0]) : var_3)), (((!(arr_6 [5] [5] [5] [i_2]))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((((576460752303423232 ? var_9 : ((0 ? -953245828 : 0))))) ^ ((11097120963218977671 << (((arr_3 [i_2 + 4] [i_2 + 3] [i_2]) - 48)))));
                    arr_9 [i_2] = ((((((var_13 ? 7349623110490573944 : 7349623110490573945))) ? ((var_18 ? 1 : var_16)) : ((var_12 + (arr_3 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_19 = (min(var_19, 0));
    var_20 = (var_7 & var_8);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            {
                var_21 = var_10;
                var_22 -= ((var_0 ? ((((!(arr_3 [i_3] [i_3] [i_3]))) ? 7349623110490573944 : -7349623110490573945)) : (arr_3 [i_3] [i_3] [15])));
                var_23 = ((!((((arr_6 [i_3] [i_4 - 1] [i_4] [i_4 - 2]) / 7349623110490573944)))));
            }
        }
    }
    #pragma endscop
}
