/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((((((((arr_5 [9] [i_1 - 1] [i_2 - 1] [6]) ? var_0 : var_10))) && ((min((arr_1 [i_0]), var_6)))))) != (var_8 - var_6)));
                    var_18 = (arr_3 [i_2 + 1] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = ((+((((var_11 >= var_14) != (var_4 & var_5))))));
    var_20 = ((max(((1 ? var_15 : 1)), (1 || var_4))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_21 = (((arr_8 [i_3] [i_3]) && var_0));
                var_22 = (((((min(-3841231414204896070, var_13)) + 9223372036854775807)) << (((min(var_1, (var_11 & var_16))) - 24))));
                var_23 = (max(var_23, ((((((arr_10 [i_4] [i_4] [i_3]) ? (!10) : var_7)) * 232)))));
            }
        }
    }
    #pragma endscop
}
