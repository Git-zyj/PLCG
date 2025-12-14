/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_7));
    var_19 = (min(((var_1 ? ((1541393761 ? -23466 : 4)) : var_0)), 7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((!4) ? ((+(((arr_2 [i_0]) ? var_15 : var_17)))) : (arr_3 [i_1 - 1] [i_1 + 1]))))));
                var_21 = var_12;
                arr_6 [i_0 + 1] [i_0] [i_0 + 1] |= ((+((((var_7 ? (arr_2 [i_0 + 2]) : 249)) & var_8))));
            }
        }
    }
    var_22 = (min(var_22, var_17));
    #pragma endscop
}
