/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, (((-5875 ? (((51873 & -1) << (((~16383) + 16385)))) : -933340826)))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] = (min((max(11, 2235379328)), ((((arr_11 [i_0] [i_0]) >= (arr_11 [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_11 = (arr_11 [i_0] [i_0]);
                    var_12 = ((((min(-14843, 2235379328))) ? (arr_1 [i_0]) : (min((arr_13 [i_0] [i_1 - 1] [i_2]), (min((arr_3 [i_0] [i_0]), (arr_2 [9] [i_1])))))));
                }
            }
        }
    }
    var_13 = (min((((var_6 / var_1) * (min(var_7, var_8)))), (((var_7 || (var_6 > var_8))))));
    var_14 = var_2;
    var_15 = (min(var_15, ((var_6 ? ((-538813138 ? var_5 : var_9)) : (var_4 >= -26466)))));
    #pragma endscop
}
