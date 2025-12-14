/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((-((max(var_19, var_14)))))) ? (max((((var_5 ? var_4 : var_6))), (max(var_19, var_13)))) : ((var_7 ? (max(var_17, 2972870681)) : ((2972870681 << (var_1 - 8391231108251606101)))))));
    var_21 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= ((-(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_22 += ((((((((!(arr_1 [i_0])))) - ((var_3 ? var_15 : var_16))))) ? (max(((2972870681 ? 673742829 : 2972870699)), (((-(arr_2 [i_0])))))) : (((((min(var_13, var_1))) ? (arr_2 [i_0]) : (((var_3 < (arr_1 [i_0])))))))));
    }
    var_23 = (min(1, -1607518195976557263));
    #pragma endscop
}
