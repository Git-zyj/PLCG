/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-2147483647 - 1);
        var_12 *= ((((((arr_0 [i_0]) || (arr_2 [i_0])))) ^ (max((var_10 <= var_11), var_10))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_3;
        arr_8 [i_1] = var_1;
        var_13 *= (arr_4 [i_1]);
        var_14 |= var_10;
    }
    var_15 = (max(((35182224605184 ? ((var_10 ? var_6 : var_2)) : ((var_7 ? var_8 : 16749419755719767702)))), ((((59018 ? var_8 : 9119237682644437413))))));
    var_16 = var_7;
    var_17 = var_5;
    var_18 = ((!(((2147483647 ? (min(var_3, -2147483647)) : 21)))));
    #pragma endscop
}
