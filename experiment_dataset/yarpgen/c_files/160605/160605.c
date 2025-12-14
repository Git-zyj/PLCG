/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((1271680305 / ((max(var_4, 64465))))));
    var_17 = ((~(~13085466957001383001)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = ((+(((!1084) ? (((arr_0 [i_0]) ? (arr_0 [5]) : (arr_0 [i_1]))) : (var_10 <= var_10)))));
            var_19 = ((-(((arr_3 [i_0] [i_0] [i_1]) / (((-(arr_1 [11]))))))));
        }
        var_20 = ((~((+((max((arr_1 [i_0 - 1]), 35522)))))));
    }
    var_21 = var_5;
    var_22 = var_1;
    #pragma endscop
}
