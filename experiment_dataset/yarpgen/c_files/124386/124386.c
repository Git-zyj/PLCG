/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 -= (((362997525435930751 || 2058385423823594360) ? ((((arr_0 [19]) < (((arr_3 [7] [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_0 [i_1])))))) : var_8));
                    var_20 = (max(var_20, ((min(65530, ((((((arr_5 [i_2] [i_1] [i_2]) ? var_9 : (arr_5 [i_0] [i_0] [i_2])))) ? 4247833395 : var_13)))))));
                    var_21 = (((((62503 ? (((arr_1 [3] [i_0]) ? var_6 : 1)) : (194 != 65529)))) ? (arr_1 [i_0] [i_0]) : (max(0, (((arr_2 [i_0] [i_0]) ? -1796400388 : 0))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_22 |= (max((((max((arr_0 [i_0]), (arr_6 [i_3] [i_3] [i_2] [4] [16] [i_0]))) << (252 - 252))), (((min((-127 - 1), 2143421743))))));
                        arr_8 [i_0] [i_0] [i_2] [7] = var_2;
                    }
                }
            }
        }
    }
    var_23 = var_12;
    #pragma endscop
}
