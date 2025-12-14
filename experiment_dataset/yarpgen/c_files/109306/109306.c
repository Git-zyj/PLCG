/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((((49591 ? (126 | 0) : 1))) ? (((arr_1 [i_0]) ? ((max(var_5, 32767))) : var_7)) : (~var_2)));
        arr_2 [i_0] [i_0] = var_0;
        arr_3 [i_0] = arr_1 [i_0];
        var_11 = (min(((2138282543 ? (arr_0 [1] [1]) : (arr_0 [9] [i_0]))), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = ((!((((!var_8) ? var_0 : (((var_4 ? var_6 : var_4))))))));
        var_13 = (max(var_13, -32767));
    }
    var_14 = (max(var_14, -1273723292));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_15 = (~var_8);
                var_16 = (min(var_16, ((min((((-((var_2 ? var_4 : (arr_4 [i_2])))))), ((min(0, 2200274211))))))));
                var_17 = (arr_5 [i_2]);
            }
        }
    }
    var_18 = var_4;
    var_19 = ((-(((!(((2013265920 ? var_2 : var_1))))))));
    #pragma endscop
}
