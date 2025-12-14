/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (var_2 % var_11);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        var_14 += (((((arr_0 [i_0 + 1]) != (arr_0 [i_0 + 2]))) ? 191 : (max((var_1 % var_6), (min(var_11, -12718))))));
        arr_5 [15] [i_0] = var_0;
        arr_6 [14] [11] = (arr_3 [i_0 + 2] [i_0]);
        var_15 = var_0;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_7 [9] [9])));
        var_17 = (((((min((arr_8 [i_1]), 1)))) + 41));
        arr_9 [i_1 - 2] [i_1] = 1;
        arr_10 [i_1] = (arr_8 [i_1]);
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_18 -= (arr_8 [1]);
        var_19 = (((((min(1745246955, var_11)))) ? -108 : (((((var_9 ? var_8 : var_5))) ? (arr_7 [i_2] [i_2]) : -11677))));
        arr_15 [i_2 - 2] [i_2 - 2] = ((var_6 ? ((((arr_8 [i_2]) != ((min(var_3, (arr_13 [i_2 + 3] [22]))))))) : (~215)));
        var_20 = ((1 ? ((((11676 ? (arr_12 [i_2] [i_2 + 3]) : 11676)))) : (9193614616241787877 + var_10)));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_21 = ((var_10 ? ((var_6 - ((var_3 ? var_6 : var_3)))) : var_4));
        arr_18 [i_3] = (min(0, -27));
        var_22 = ((((max(((-11675 + (arr_16 [i_3]))), -var_9))) || (((~(arr_11 [i_3]))))));
    }
    #pragma endscop
}
