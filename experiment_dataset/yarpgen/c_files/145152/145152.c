/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, ((min(var_13, ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 5834656687918515731 : ((min(var_0, 1))))))))));
        arr_3 [i_0] = ((((((min(1, var_6))) ? -3518637869338097039 : (((-(arr_1 [i_0])))))) + -var_6));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = var_5;
        var_17 += (((min((min(var_8, var_9)), ((((arr_7 [i_1]) ? var_7 : var_10))))) != (((max(1, -77))))));
        var_18 = ((~(max((arr_0 [i_1 - 1]), (arr_1 [i_1 + 2])))));
        var_19 ^= ((((-118 ? (arr_2 [i_1 - 1]) : -7))) ? (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 - 1]))) : (((arr_2 [i_1 - 1]) ? 16521 : (arr_2 [i_1 + 1]))));
    }
    var_20 += (((((var_1 ? var_2 : ((var_7 ? var_5 : var_11))))) ? var_7 : (max(((var_10 ? var_3 : var_3)), 1496907978))));
    var_21 = ((((var_12 ? var_1 : ((var_0 ? var_2 : var_7)))) + (min(-var_12, -17))));
    #pragma endscop
}
