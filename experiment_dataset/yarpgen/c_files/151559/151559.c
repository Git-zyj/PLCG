/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(var_10, var_12)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max((!var_2), ((((((arr_2 [i_0] [i_0]) ? 4294967295 : 1))) ? (-2147483647 - 1) : var_3))));
        var_15 = ((((((26395 ? 10 : 26395)))) ? (((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))) : 65535));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((!((!((min((arr_5 [i_1]), (arr_3 [i_1] [1]))))))));
        var_17 = (arr_5 [i_1]);
        var_18 = (((0 ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1]))));
        arr_6 [i_1] [21] = 549755813887;
    }
    var_19 = 1;
    var_20 = (max(var_20, (((min(var_6, ((var_1 ? var_9 : (-2147483647 - 1))))) << (((((((4294967292 ? var_11 : var_0))) ? var_11 : 1)) - 17062))))));
    var_21 = ((((((max(var_3, var_6)) | var_4))) ? (var_11 != var_9) : (min((min(15705642165520005238, var_7)), (-2147483647 - 1)))));
    #pragma endscop
}
