/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(6473853135776337251 & -6473853135776337242));
    var_12 = 3308695847231841402;
    var_13 = ((var_7 + 9223372036854775807) >> (((((min(var_8, var_7)) & var_2)) + 9072781046851797012)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (-var_0 ? (arr_2 [i_1]) : ((((((3308695847231841406 ? (arr_2 [i_0]) : var_6)) + 9223372036854775807)) << (((((((-9223372036854775807 - 1) - -9223372036854775782)) + 45)) - 19)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = ((!((min(((((arr_5 [i_2] [i_0]) || (arr_2 [i_1])))), (~var_10))))));
                            var_16 = arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                }
                var_17 = max(((-9223372036854775802 ? 444257546398404849 : var_7)), (arr_1 [i_0]));

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    var_18 = arr_7 [i_1] [7];
                    var_19 = max(var_3, ((((var_7 / -7901591623351716486) || -444257546398404828))));
                    var_20 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
