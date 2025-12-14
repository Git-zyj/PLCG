/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~(min(791668839, var_3))))) ? ((((var_3 << (((-97 + 138) - 41)))) | (((-1415910537308055418 ? var_2 : 230))))) : var_9));
    var_15 = (-(((-1 && ((min(var_5, var_7)))))));
    var_16 = 32766;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 ^= (((~var_13) && (((((((((arr_1 [8] [i_0]) + 2147483647)) >> (var_6 - 1019050457)))) ? var_12 : var_12)))));
        var_18 = (arr_1 [i_0 - 2] [i_0 - 1]);
        var_19 = (((((~((var_7 ^ (arr_0 [i_0])))))) | (-1 & 3503298456)));
        var_20 = ((-((~(max(var_12, var_11))))));
        var_21 *= ((!((min(var_0, (((var_12 ? var_11 : var_8))))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1 + 1] [i_1] = ((~1) ? ((~(((arr_3 [6] [6]) / var_5)))) : 127);
        var_22 += (-((~(1 + 0))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = (((((536870911 ? 229509533 : -10))) && ((max((min(var_1, var_0)), (var_3 / var_12))))));
        var_23 = (min(var_23, ((((18446 != 7) + (arr_0 [i_2]))))));
    }
    var_24 = var_2;
    #pragma endscop
}
