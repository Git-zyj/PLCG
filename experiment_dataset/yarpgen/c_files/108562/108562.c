/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((0 ? var_15 : var_6))) ? (((min(var_4, var_15)))) : (max(var_3, (min(var_12, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (arr_0 [1]);
                arr_4 [i_0] [i_0] [i_0] |= (((arr_2 [i_0] [i_1]) ? (max((arr_3 [i_0] [4]), (((arr_2 [i_0] [i_1]) ? (arr_2 [8] [0]) : (arr_2 [i_0] [i_0]))))) : ((max(65533, 4294967287)))));
            }
        }
    }
    var_18 = ((var_7 ? var_13 : var_3));
    var_19 = ((!((((((-15865 ? 2 : 17))) ? var_12 : (!var_15))))));
    var_20 = var_6;
    #pragma endscop
}
