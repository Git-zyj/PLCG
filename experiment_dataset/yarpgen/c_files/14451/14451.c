/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_1 >> (var_17 - 13922)))) && var_7)) || ((max(var_18, (var_1 % var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] = (39 <= 0);
                var_20 = ((-((~(var_18 & var_6)))));
                var_21 = ((((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1])))) * (((var_18 > (arr_3 [20] [i_0] [i_0]))))));
            }
        }
    }
    var_22 = (((((var_10 ? var_18 : var_2)))) ? ((((~var_17) ? (var_14 <= var_3) : var_14))) : var_4);
    #pragma endscop
}
