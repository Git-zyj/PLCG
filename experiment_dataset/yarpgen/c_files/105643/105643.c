/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, ((max((min((arr_0 [10]), var_10)), ((((arr_1 [i_0] [i_0]) && var_11))))))));
        var_15 = -var_8;
        var_16 = ((((min(var_7, ((-92 ? 177 : 144306382))))) && var_8));
    }
    var_17 = ((~((var_8 ? (var_0 / var_10) : (~var_1)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            {
                arr_7 [15] = (((((((arr_3 [i_1]) ? var_13 : var_1)))) & (arr_3 [i_2])));
                var_18 = (var_5 == var_12);
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
