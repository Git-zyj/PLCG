/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_13, var_6))), (max(71, (16458286757480388019 + 3772646107)))));
    var_17 = (((((~(var_12 / var_6)))) ? (max((!-61), ((2187135074 ? var_11 : var_4)))) : var_8));
    var_18 = ((+((var_3 ? (var_6 * var_2) : (((min(var_13, var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (((((((arr_7 [i_0] [i_0]) ? var_1 : var_0)))) & ((~(1032192 << var_12)))));
                    arr_9 [i_0] = (((arr_0 [i_0]) / (max((arr_0 [i_0]), var_0))));
                    arr_10 [i_2] [i_1] [i_0] = (max((arr_6 [i_0] [2] [i_0] [i_0]), (((min((arr_5 [i_0] [i_1] [i_2]), var_8)) ? ((var_2 ? var_14 : (arr_4 [i_0] [i_1] [i_2]))) : (((~(arr_7 [i_1] [i_0]))))))));
                    var_19 = (((((0 < ((3772646104 ? (arr_0 [i_0]) : 3772646118))))) ^ ((((~(arr_4 [i_0] [i_1] [i_0]))) & (arr_1 [i_0])))));
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
