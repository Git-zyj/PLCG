/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_5 ? (min(((max(var_5, var_7))), ((var_2 ? var_9 : var_11)))) : var_7)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(var_14, ((max(((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))), (min(5516971268684205407, (arr_1 [i_0]))))))));
        var_15 += ((1583988415 ? (arr_3 [i_0]) : -1583988416));
        arr_4 [i_0] = (((((max(1583988405, var_10)))) ? ((((((arr_2 [6]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? ((((arr_2 [i_0]) <= var_0))) : ((-3049 ? var_5 : (arr_3 [i_0]))))) : (((min((arr_0 [i_0]), (arr_3 [i_0])))))));
        arr_5 [9] [19] = (arr_3 [i_0]);
    }
    var_16 = ((var_6 ? var_11 : -1583988416));
    var_17 = (max(var_17, ((min(((15755 ? (!0) : var_10)), (min(((-1583988405 ? var_7 : var_12)), ((max(var_5, var_11))))))))));
    #pragma endscop
}
