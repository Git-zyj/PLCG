/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 -= var_4;
    var_18 = (((max(2220087085, -var_7)) > var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((~(arr_3 [i_0])));
        var_20 = (min(var_20, (((783449322728106952 ? var_0 : 40)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (max((min(var_5, (min(16153, var_15)))), -43));
        arr_9 [i_1] [i_1] = 6;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 += (((var_15 + 2147483647) << (((var_14 & 40) - 32))));
        var_22 = (min(var_22, ((((((!(arr_11 [i_2] [i_2])))) < var_14)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, (((var_13 ? var_14 : (arr_13 [i_2]))))));
                    var_24 = (arr_16 [i_2] [i_3] [i_4]);
                }
            }
        }
        var_25 = (((arr_15 [i_2]) ? (arr_15 [i_2]) : var_9));
        var_26 = ((199 ? 192 : 61));
    }
    #pragma endscop
}
