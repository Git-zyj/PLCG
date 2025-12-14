/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-var_2 ? var_0 : (((13778415014505386644 ^ var_8) ^ (((min(var_9, var_10)))))));
    var_19 = min(((((var_6 ? var_0 : var_12)) - (((var_10 << (var_4 - 10508)))))), ((((1 != 1901115007) >> (var_14 - 40)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((((max(((((arr_4 [i_0] [i_0] [i_2]) && var_17))), (var_15 ^ 112)))) ? (((arr_3 [i_0]) ^ (arr_3 [i_0]))) : ((((-1901115023 - (arr_2 [i_1]))) - (((arr_3 [i_0]) ^ -1901115015))))));
                    var_20 = var_12;
                    arr_8 [i_0] [i_0] [8] = -3707332492495262941;
                }
            }
        }
    }
    var_21 = (min(((var_11 ? ((min(0, 1901115008))) : var_17)), ((min(-2140457433, 2140457433)))));
    #pragma endscop
}
