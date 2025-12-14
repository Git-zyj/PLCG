/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = ((((min((var_14 && -2147483647), var_8))) || ((max(var_13, (((var_15 ? var_8 : 365377518))))))));
    var_20 = (min(var_20, ((((((-365377518 || var_2) || var_1)) ? var_17 : (((var_1 || (365377518 || 167)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [6] &= (arr_1 [i_0]);
        var_21 = -365377532;
        var_22 = var_17;
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? (-9223372036854775807 - 1) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (-365377517 >= 1)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_23 *= ((365377520 ? -1 : ((((arr_0 [0]) && 365377517)))));
        var_24 = var_0;
        var_25 = ((~(((arr_5 [i_1 - 2]) ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 2])))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (min((!var_13), ((var_16 | ((((-1 >= (arr_7 [i_2])))))))));
        arr_9 [7] = ((3882753977 ? (!47765) : (!365377513)));
    }
    #pragma endscop
}
