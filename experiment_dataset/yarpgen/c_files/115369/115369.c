/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((min(((min(var_1, var_2))), var_6))) && (((var_0 / ((var_9 ? 2305843009213693951 : var_3))))))))));
    var_11 = var_5;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = (var_2 % -var_5);
        arr_4 [i_0] [i_0] = (((((var_5 ? (2305843009213693936 / var_4) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? 6042413199349881517 : (((~7660759768477398343) ? (((var_9 ? (arr_0 [i_0] [i_0]) : var_9))) : (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = (((-(min(var_0, (arr_3 [i_0] [i_0]))))) + ((((!(((3866 ? var_0 : var_2))))))));
    }
    var_13 = var_1;
    #pragma endscop
}
