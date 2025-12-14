/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -var_1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = var_4;
        var_19 &= var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = ((var_4 != (((((~8363111649789985465) || (arr_2 [i_1] [i_1])))))));
        var_21 |= 4194304;
        var_22 = (max(var_22, ((max((min(656571794, (arr_1 [i_1] [10]))), (((max(3883606083427597950, 9223372036854775807)))))))));
        arr_5 [0] [4] = (((arr_1 [i_1] [i_1]) << (((((arr_0 [i_1] [i_1]) ? var_10 : 8363111649789985474)) - 205))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_23 = (max(var_23, var_4));
        arr_8 [i_2] = ((((-460852316 ? var_12 : ((3638395504 ? (arr_0 [i_2] [i_2]) : 1))))) / (min((((arr_6 [i_2]) ? (arr_7 [i_2]) : var_6)), (((-59 ? var_11 : var_16))))));
        var_24 = (min(((-4923184554538672410 ? 311698480 : ((var_13 / (arr_1 [2] [i_2 - 1]))))), (((arr_7 [i_2]) ? (((656571789 ? var_6 : var_0))) : -var_13))));
        var_25 = (((~var_6) ? (((var_2 != (((230 ? 30921 : -115)))))) : ((((arr_0 [i_2 + 1] [i_2 + 1]) != (((var_6 >> (var_1 - 5980264237813507709)))))))));
        var_26 = (min(var_5, (max(126, (arr_0 [i_2 + 2] [i_2 + 2])))));
    }
    #pragma endscop
}
