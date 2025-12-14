/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((~(max(var_2, (min((arr_0 [i_0]), 102)))))))));
                arr_4 [i_1] = (arr_3 [i_1]);
                var_13 = (max(var_13, ((max((var_7 <= 1), ((((113 ? (arr_0 [6]) : 4457)) != var_10)))))));
                var_14 = (min(((((arr_0 [i_0]) >= var_6))), var_8));
            }
        }
    }
    var_15 = ((((((4014 ? var_5 : var_6))) ? var_9 : 171)));
    #pragma endscop
}
