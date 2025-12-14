/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-6559936410504721159 ? -81 : 0) <= (max(40578, var_3))))));
    var_17 = (var_5 && -2147483630);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [7] = (min(-8388096, 81));
        var_18 = (arr_1 [i_0]);
        var_19 = (!(((arr_0 [i_0] [i_0]) < 1)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (-897786499 / var_10);
        arr_7 [4] &= (min((arr_4 [i_1 + 2]), (((arr_5 [6]) ? var_2 : (arr_4 [i_1 + 2])))));
        var_20 = ((((!(((-8388097 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1])))))) ? ((131071 >> (((arr_5 [i_1]) - 445928246)))) : (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = min((!1), 1);
        var_22 = (min((arr_8 [i_2] [i_2]), (arr_10 [i_2])));
        var_23 *= ((0 <= (arr_8 [i_2] [13])));
        arr_11 [i_2] = var_4;
    }
    #pragma endscop
}
