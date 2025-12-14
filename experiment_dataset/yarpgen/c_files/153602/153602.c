/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_1] [i_0 + 1]);
                arr_6 [i_0] [i_1] [0] &= (((arr_0 [10] [10]) ? var_18 : var_16));
                var_20 -= (((((~((var_1 + (arr_4 [14] [i_1] [i_1])))))) ? ((((max(-1192824209, 1))) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0]) : (((arr_0 [8] [6]) ? 116 : (arr_1 [20]))))) : var_10));
                arr_7 [i_0] [i_0] [i_0] = var_10;
                arr_8 [i_0] = (!2129364868599230741);
            }
        }
    }
    var_21 = (max((((var_12 ? var_14 : 4294967285))), 2129364868599230741));
    var_22 = var_11;
    var_23 = var_3;
    var_24 = var_2;
    #pragma endscop
}
