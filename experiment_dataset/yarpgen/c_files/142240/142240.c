/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_5, ((((arr_5 [i_1]) + (var_17 + var_6))))));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_20 -= (max(0, (min(var_0, (arr_5 [i_0])))));
                    var_21 = (max((arr_1 [i_0]), (var_3 + var_10)));
                    var_22 = (86 == 1);
                }
                var_23 = (!var_16);
                var_24 = ((((min((arr_4 [i_0] [i_1] [i_1]), var_9))) ? var_11 : (max((min(var_13, (arr_1 [i_1]))), (((arr_4 [i_1] [i_0] [i_0]) ? (arr_5 [i_1]) : var_13))))));
            }
        }
    }
    var_25 = var_2;
    var_26 = (((max(((var_0 ? var_4 : 1853762116)), var_12)) + var_7));
    #pragma endscop
}
