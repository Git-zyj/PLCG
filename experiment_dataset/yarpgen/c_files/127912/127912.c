/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((min(2147483647, 17772))) ? var_2 : 512520872));
    var_19 = (max(var_19, var_11));
    var_20 = var_2;
    var_21 += ((-5 ? 65534 : -679395937));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = ((!(arr_1 [i_0] [i_0 - 2])));
        var_23 = (((((~((~(arr_1 [i_0] [i_0])))))) ? 1971487514 : (((arr_1 [i_0] [i_0]) / (arr_0 [i_0])))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (((((!(arr_4 [i_1] [i_1])))) <= ((~(arr_5 [i_1])))));
        var_24 = (((-5 ^ 4) ? 5 : 18));
        var_25 = (min(var_25, ((min(14, 14)))));
        var_26 = (+(((arr_6 [i_1]) * var_8)));
    }
    #pragma endscop
}
