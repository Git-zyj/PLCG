/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0] [i_0]) ? ((-(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_21 = (((((max(var_14, (arr_1 [i_0] [i_0]))))) / (max((arr_1 [i_0] [i_0]), (137438953471 / var_17)))));
        arr_2 [i_0] [i_0] = ((var_5 + (min(var_5, (max(-639183853, (arr_1 [i_0] [1])))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [1] = var_4;
        var_22 = (max((max(-1, (arr_4 [i_1])), ((var_15 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1]))))));
        var_23 -= (~var_7);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_24 -= (arr_7 [i_2]);
        var_25 = (arr_9 [3]);
        var_26 = (max((arr_7 [i_2]), (arr_8 [i_2 + 1] [i_2 - 1])));
        var_27 = var_12;
    }
    var_28 = 639183836;
    #pragma endscop
}
