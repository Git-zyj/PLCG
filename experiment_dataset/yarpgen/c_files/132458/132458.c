/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = var_0;
                var_17 = ((var_10 / (30779 / var_3)));
            }
        }
    }
    var_18 = 10021209215977422445;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = (min(var_19, ((((arr_1 [i_2] [i_2]) ? 1750 : (!0))))));

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_20 |= (arr_2 [1] [i_2]);
            var_21 = (((!var_4) || (-2147483647 - 1)));
            var_22 = ((2147483647 & (-127 - 1)));
            var_23 = var_2;
        }
        arr_11 [i_2] [i_2] = (((4720466431667998565 < 536870912) && (arr_8 [i_2] [i_2] [i_2])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 += (arr_4 [i_4] [i_4]);
        arr_15 [i_4] [i_4] = (max(((((((-1 ? var_13 : var_11))) ? (((!(arr_2 [i_4] [i_4])))) : (((var_1 && (arr_7 [10] [i_4]))))))), (max((-127 - 1), (arr_6 [i_4])))));
        var_25 += (min((arr_14 [i_4]), -1));
    }
    #pragma endscop
}
