/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_10 < var_6);
    var_19 = (max(var_19, var_0));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((-(((((-(arr_0 [i_0] [i_0]))) < -var_11)))));
        arr_2 [i_0] = (((((-((42 - (arr_1 [i_0] [i_0])))))) - ((-((7408907100696772154 - (arr_0 [i_0] [i_0])))))));
    }
    var_21 |= (((((var_3 ? ((var_5 ? var_8 : 37052)) : var_8))) ? (-var_2 < -var_3) : var_9));

    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1 + 1] |= ((((-((~(arr_3 [i_1 + 2] [i_1 - 2]))))) < (var_0 < var_4)));
        var_22 |= ((-((-var_2 ? (arr_3 [i_1 + 2] [5]) : 2147483647))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] [7] = ((var_8 ? (((131 < (min((arr_8 [i_2]), var_5))))) : -var_2));
        var_23 = (min(var_23, (arr_5 [i_2] [i_2])));
        arr_11 [i_2] = (-((-(((arr_4 [15]) ? var_16 : var_4)))));
        var_24 = max((arr_7 [i_2]), ((-((-(arr_9 [i_2]))))));
    }
    #pragma endscop
}
