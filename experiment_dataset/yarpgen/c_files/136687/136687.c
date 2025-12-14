/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_11, (((65511 ? 1 : 1)))));
    var_21 |= var_17;
    var_22 = (-(min(((var_12 ? var_0 : var_15)), var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_23 &= (((((var_1 ? var_12 : (arr_2 [i_0])))) ? ((-var_14 - ((var_6 ? var_16 : (arr_3 [i_0 + 1] [i_0 - 1] [i_0]))))) : (((arr_1 [i_1]) ? (39 << 0) : var_16))));
                arr_6 [8] = (min((max(29653, 2147483647)), 1));
            }
        }
    }
    var_24 &= (((!var_6) | var_0));
    #pragma endscop
}
