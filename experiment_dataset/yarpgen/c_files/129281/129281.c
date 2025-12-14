/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((((max(var_15, var_17))) ? ((var_16 ? var_17 : var_0)) : (((var_15 ? var_2 : var_4))))) << (var_3 - 13170)));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_17 > (max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))) < (((((var_13 ? var_15 : var_2))) ? ((2022599325 ? 23 : 64)) : 4294967290))));
        var_20 = (max((max((arr_0 [i_0 + 2] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 2]))), ((-(((arr_0 [i_0 + 2] [i_0 + 2]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_0 - 1])))))));
        arr_3 [i_0] |= ((!((max(var_14, (arr_0 [i_0 - 1] [i_0 - 1]))))));
        arr_4 [i_0 - 1] = (min((((!(arr_1 [i_0 + 2])))), -var_12));
    }
    var_21 = var_13;
    var_22 *= (((((max(var_6, var_14)) - ((var_3 ? var_7 : var_14)))) < ((((max(var_8, var_0))) ? (max(var_14, var_8)) : (var_5 + var_5)))));
    var_23 = var_2;
    #pragma endscop
}
