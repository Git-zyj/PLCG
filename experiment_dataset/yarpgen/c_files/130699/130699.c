/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((var_8 ? -var_4 : -8422974101781423691)));
                arr_6 [i_0] [i_0] [i_1] = arr_2 [i_0];
                arr_7 [i_1] = var_4;
                var_13 = 8972242022397561759;
                var_14 = ((~((((1 ? 9474502051311989856 : 65535)) >> (var_6 - 14351)))));
            }
        }
    }
    var_15 = (min(var_15, (((var_3 ? 32 : (!9474502051311989881))))));
    var_16 = (((((((195 ? var_5 : var_8)) & 3977493451432663968))) ? var_9 : ((((!var_4) > (!-3977493451432663969))))));
    #pragma endscop
}
