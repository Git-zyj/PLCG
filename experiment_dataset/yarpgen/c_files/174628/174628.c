/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((var_3 || 1) | (var_7 && var_2))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = ((~((0 ? var_11 : 254))));
        var_14 = (max((max((var_7 / var_8), (min(1051446637, (arr_0 [i_0]))))), ((~(((arr_0 [i_0]) & var_5))))));
        var_15 -= 1274298263;
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0 + 1]) + (arr_1 [i_0 + 2]))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_16 = var_10;
        var_17 = (max(var_17, (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (min((min((arr_7 [i_2]), ((var_9 - (arr_1 [i_2]))))), 7180708729819451298));
        var_19 = (min(((-7180708729819451298 | (arr_6 [i_2]))), (var_6 + var_0)));
        var_20 = ((15818 ? 0 : 195));
        var_21 = ((((var_1 + (arr_1 [i_2]))) + ((var_5 - (arr_1 [i_2])))));
    }
    var_22 = min((3937727985 && 1314607426), (((var_6 && (((0 ? var_2 : var_2)))))));
    var_23 = var_4;
    #pragma endscop
}
