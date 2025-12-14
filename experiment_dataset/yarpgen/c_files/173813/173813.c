/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_18 ? (max(var_10, var_3)) : ((var_7 ? (var_12 * var_17) : var_10)));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_3 [i_0 + 2]) ? (min(0, 4106123032962040471)) : (arr_3 [i_0 + 1])))) ? ((((!(arr_2 [i_0]))))) : var_12);
        arr_5 [i_0] [i_0] = (min((((!(arr_2 [i_0 - 2])))), (min(((1262980211473867530 ? var_18 : (arr_1 [i_0]))), var_0))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] = var_6;
        arr_10 [i_1] = var_2;
        arr_11 [i_1] = (arr_8 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_14 [i_1] [i_1] = (((min(((0 ? var_15 : var_8)), 1)) < (min((arr_1 [i_1]), var_5))));
            arr_15 [i_1] [i_1] [i_1] = (arr_2 [i_1]);
            arr_16 [i_1] = (arr_12 [i_1] [i_1]);
        }
    }
    #pragma endscop
}
