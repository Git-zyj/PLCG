/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!(((18446744073709551615 ? var_16 : var_9))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (arr_0 [i_0 - 1]);
        arr_4 [i_0] = ((-((636137894 ? (arr_0 [i_0 + 1]) : (arr_2 [i_0 - 1])))));
        var_18 = (((-var_8 ? (arr_0 [i_0 - 1]) : ((var_4 / (arr_0 [5]))))));
        arr_5 [i_0] = ((((var_1 << (((arr_0 [i_0]) - 10868)))) ^ (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = var_13;
        arr_8 [i_1] [i_1] = ((((arr_7 [i_1] [i_1]) / (arr_6 [i_1] [i_1]))));
        arr_9 [i_1] = ((((-(arr_0 [i_1]))) >= (arr_0 [i_1])));
    }
    #pragma endscop
}
