/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((~var_4) ? 1 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = var_4;
                arr_5 [i_0] [i_1] = ((((min((arr_2 [i_0 + 1]), (arr_3 [i_0 - 2])))) ? (((arr_2 [i_0 + 1]) ? 1 : 12023703654461128173)) : (((~(arr_3 [i_0 - 3]))))));
                var_15 = 0;
            }
        }
    }
    var_16 = (((((~(var_11 | var_3)))) ? ((var_12 ? ((min(var_0, var_8))) : var_10)) : var_12));
    var_17 = var_9;
    #pragma endscop
}
