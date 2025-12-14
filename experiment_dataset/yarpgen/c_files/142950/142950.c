/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, ((max(((var_13 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((!(arr_1 [i_0])))))))));
        var_17 = (min(var_17, ((max(((var_2 / (arr_1 [i_0]))), (((var_10 ? (((var_15 != (arr_0 [i_0] [i_0])))) : ((max(1, -1)))))))))));
        arr_2 [i_0] |= ((((+(((arr_1 [10]) - (arr_1 [i_0])))))) ? ((min((((arr_0 [i_0] [2]) & (arr_0 [i_0] [i_0]))), (((var_8 || (arr_0 [i_0] [1]))))))) : (~var_11));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_18 = arr_0 [i_1] [i_1];
        var_19 = (((~(arr_0 [i_1 + 1] [i_1 - 1]))));
    }
    var_20 &= (((~-5) ? ((var_15 ? ((4298584208376313552 ? 45830 : 11824045150460912906)) : (var_6 + var_6))) : ((var_11 ? (var_2 == var_9) : ((var_3 ? var_8 : var_1))))));
    #pragma endscop
}
