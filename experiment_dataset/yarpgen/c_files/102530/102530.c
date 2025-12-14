/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (max((((var_4 == (max(var_1, var_6))))), (max((max(var_8, var_8)), var_5))));
    var_14 = var_7;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0 + 4]);
        arr_3 [i_0] [i_0] = ((-var_10 ? -22666 : (arr_1 [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1] = (min((((22667 && (arr_5 [i_1])))), var_11));
        var_16 *= (((min((max(var_6, var_5)), (((var_11 || (arr_6 [i_1] [i_1])))))) + ((((((arr_1 [i_1 - 1]) ? var_8 : var_11)))))));
    }
    #pragma endscop
}
