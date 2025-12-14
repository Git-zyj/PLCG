/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((0 ? (((var_13 ? var_15 : var_12))) : 13756102301750039749)) != ((((min(2192113187, var_15)) >> (-2147483642 != var_17))))));
    var_20 = (var_8 != ((((var_10 ? 67 : var_4)) >> ((var_10 ? var_14 : var_6)))));
    var_21 += ((-31523 ? var_16 : (max(var_2, var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((8866461766385664 ? (arr_5 [i_0] [i_1]) : -30334)));
                arr_7 [4] [i_0] = ((163 ? 0 : 0));
            }
        }
    }
    #pragma endscop
}
