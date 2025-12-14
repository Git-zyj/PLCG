/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (~var_7);
    var_16 = (min(var_6, var_5));
    var_17 = (((!var_8) ? var_8 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((((((var_0 ? var_4 : -221804216))) ? (arr_3 [i_0 + 2]) : var_10)) >> ((((808023317 ? 8518 : -304596863)) - 8508))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((((((arr_2 [i_3]) > (arr_2 [i_4])))) >> (((arr_2 [i_2]) - 12880070966296162144))));
                                arr_16 [i_0 + 1] [i_1] [i_4] [i_3] [i_1] = ((((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : var_12))) ? ((13841932388980860576 ? var_12 : (arr_10 [i_0 + 2]))) : ((-(arr_0 [i_0 + 2])))));
                                var_20 = ((0 ? -120 : 35));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
