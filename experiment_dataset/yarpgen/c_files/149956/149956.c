/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_7, var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((((255 ? var_3 : 1))) ? var_11 : var_6)) / ((-var_2 ? ((var_5 >> (255 - 207))) : (5301677854400260921 | var_8))))))));
        arr_2 [i_0] = (min((((arr_1 [i_0]) ? (18446744073709551587 | var_7) : (((var_8 ? (arr_1 [i_0]) : var_1))))), -var_1));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_14 = var_9;
        var_15 = (min((arr_4 [i_1]), (((((var_6 ? var_1 : (arr_4 [12])))) ? ((var_9 ? var_5 : 2672347945733279585)) : (arr_4 [i_1])))));
    }
    var_16 = (((max((min(var_2, var_9)), (var_7 == var_4)))) == (var_2 + var_3));
    #pragma endscop
}
