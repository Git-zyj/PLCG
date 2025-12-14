/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (max(var_20, (((-var_13 ? var_14 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = ((((65527 - (arr_5 [1] [1]))) < (((((1 ? 149193495 : var_13)))))));
                arr_7 [i_1] = 7543406419994181608;
            }
        }
    }
    var_22 &= var_7;
    #pragma endscop
}
