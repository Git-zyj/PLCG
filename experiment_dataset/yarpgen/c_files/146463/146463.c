/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : 18446744073709551613)) : ((((arr_0 [i_0]) ? (arr_1 [i_0]) : -10112))))) : ((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (-2147483647 - 1))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : -8490)))))));
        arr_3 [i_0] = (((((arr_0 [i_0]) ? 1 : -2961))) ? (((31846002 ? 552 : 543352490))) : (((((2677647406369925213 ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (((~(arr_0 [i_0])))) : ((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (((arr_5 [i_1] [i_1]) ? -3 : (arr_4 [i_1])));
        var_15 = (arr_5 [i_1] [i_1]);
    }
    var_16 = -2677647406369925213;
    #pragma endscop
}
