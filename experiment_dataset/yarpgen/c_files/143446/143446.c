/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((var_9 ? -var_4 : ((34597 ? ((-89 ? 1426583514 : -28112)) : var_4))));
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((var_7 ? var_8 : (arr_0 [i_0] [i_0])));
        var_15 = (((16 * 0) ? var_3 : -28119));
        arr_2 [i_0] = (((!1426583514) - ((-((((arr_1 [i_0]) || var_0)))))));
        var_16 += (((min((((arr_1 [i_0]) ? 38 : (arr_1 [i_0]))), var_8)) / (((-41 * 35) ? var_6 : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1 - 1] = var_5;
        var_17 = (min(var_17, -41));
        arr_8 [i_1] = (min(1, 12077880589928891309));
        var_18 = (max(var_18, (((((((arr_6 [i_1 - 1]) ? (arr_6 [i_1 - 1]) : var_2))) ? ((3360878634 ? var_6 : (arr_6 [i_1 + 1]))) : var_3)))));
        var_19 = (max(var_19, ((min(((var_5 ? var_2 : ((var_4 ? var_8 : (arr_4 [i_1]))))), (1 || -41))))));
    }
    var_20 = var_10;
    var_21 = var_10;
    #pragma endscop
}
