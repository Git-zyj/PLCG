/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (~-var_4);
    var_18 *= var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, ((((~(((arr_0 [i_0]) ? (-127 - 1) : var_10))))))));
        var_20 ^= var_9;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_3 [i_1]) ^ (arr_4 [i_1]))))));
        var_22 = (min(var_22, ((((((-79 ? ((~(arr_0 [i_1]))) : (arr_2 [i_1])))) ? (arr_2 [i_1]) : ((var_4 + (arr_0 [i_1]))))))));
    }
    var_23 = (min(var_23, ((min((((var_1 + var_3) ? ((var_5 ? var_10 : var_2)) : 115)), var_9)))));
    var_24 -= ((var_11 >> (((var_13 >= 1) ? (var_3 % 115) : (min(-100, var_6))))));
    #pragma endscop
}
