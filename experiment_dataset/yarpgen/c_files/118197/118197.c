/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((((-7469206850240167527 | var_1) ? ((var_0 ? var_5 : var_7)) : 7469206850240167536)) & (((((var_3 ? var_3 : 63))) ? ((var_7 ? -29559 : 5834150066866053892)) : -412317693248948517))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1 + 2] [i_0] = (min((~1), (min((-7469206850240167527 <= 47), 14720263871257699053))));
                                var_12 *= (min((!1), ((!(((12354677537490521580 ? 1048575 : var_2)))))));
                            }
                        }
                    }
                }
                var_13 = ((((((max(-8726332862471456507, var_10))) ? (min((arr_13 [10] [i_0] [i_0] [i_0]), 1)) : ((22752 ? var_9 : (arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_0]))))) <= 28434));
            }
        }
    }
    var_14 = (max(var_14, (((!((!(((84 ? var_0 : var_10))))))))));
    #pragma endscop
}
