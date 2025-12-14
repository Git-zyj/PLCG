/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((-1099511627775 & (((var_4 ? -32 : var_7))))));
    var_14 = (101 ? (((-2147483647 - 1) / 26793)) : (~-6144));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (min((208 / var_7), ((max(1, (arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = (((((-((-26792 ? (arr_2 [i_0]) : (arr_1 [i_0])))))) ? (max(43566, (-2147483647 - 1))) : (~2147483637)));
        arr_5 [i_0] = (arr_1 [i_0]);
        var_15 = ((((((((var_7 ? var_12 : var_0))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_0 [i_0]) * (arr_0 [i_0])))))) ? (max((((2032 ? (arr_0 [i_0]) : (arr_2 [i_0])))), -4294967295)) : 4294967292));
        arr_6 [10] |= (((!var_10) - (((((max(var_2, 16))) || ((((arr_0 [i_0]) ? var_10 : (arr_2 [i_0])))))))));
    }
    var_16 = (~124);
    var_17 -= ((((((var_9 < var_4) * ((5937624548753186701 ? 2147483647 : 0))))) ? -var_12 : (!2047)));
    #pragma endscop
}
