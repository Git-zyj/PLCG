/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? var_11 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((+((var_10 | (((arr_3 [i_1]) | (arr_1 [22])))))));
                var_14 = ((!(((~(arr_0 [i_0] [i_0]))))));
                arr_7 [i_0] = ((((((var_0 ? 54747 : (arr_5 [i_0] [i_0] [i_1]))))) ? ((-14 ? (max((arr_3 [i_0]), var_4)) : (~24610))) : (arr_1 [i_0])));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
