/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((var_7 ? var_5 : var_15)));
        var_19 = (arr_0 [i_0]);
        var_20 = (max(var_20, (!var_1)));
        var_21 = (((arr_3 [i_0]) && var_10));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (max(var_22, ((((min(var_4, 868314367)) << (!868314368))))));
        var_23 = (max((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1]))), ((var_10 ? (arr_5 [i_1]) : (arr_4 [i_1])))));
        var_24 = (((max(var_12, ((868314371 ^ (arr_4 [i_1]))))) + 2094180638));
        var_25 = (arr_4 [i_1]);
        var_26 = (min(var_26, ((((arr_4 [i_1]) > (3426652926 >= 799605167474157194))))));
    }
    var_27 = var_4;
    var_28 = (max(130214189, (((((max(var_7, 76))) || var_10)))));
    #pragma endscop
}
