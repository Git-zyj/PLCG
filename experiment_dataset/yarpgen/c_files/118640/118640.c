/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_11 - (!37))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 |= (max((min(((233 ? 65511 : 65535)), ((var_11 >> (((arr_1 [i_0] [i_0]) - 1785781066)))))), (((var_5 <= (arr_0 [i_0 - 1]))))));
        arr_3 [i_0 - 1] [3] = (((((var_4 || 0) && (arr_1 [i_0 + 1] [i_0 - 1]))) ? ((((var_8 ^ 939524096) <= (arr_2 [i_0])))) : ((((arr_0 [i_0 + 1]) || (arr_0 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] |= ((-(!6773212438990338707)));
        var_19 = ((var_10 << ((((((max(65523, var_10))) ? (max(var_2, (arr_2 [i_0 - 1]))) : (162 + var_0))) - 1242157775126823621))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_20 ^= ((~(min((arr_6 [1] [i_1]), 2562844796))));
        var_21 = (min(var_21, 27568));
        var_22 &= ((~(max((!37957), (0 - 62057)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_23 = (min(var_23, (((~((((arr_8 [i_2]) != ((249 / (arr_2 [i_2])))))))))));
        arr_11 [i_2] = var_15;
        arr_12 [i_2] = -0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_24 = ((((0 ? (arr_14 [i_3]) : var_10))) ^ ((var_10 ? 2825821581 : var_8)));
        var_25 = var_0;
        arr_15 [i_3] &= (17 % var_10);
    }
    var_26 = (max((min((min(var_16, var_0)), (!-12695))), ((((var_16 < var_12) == var_8)))));
    var_27 = ((((var_0 ? var_8 : var_8)) & var_11));
    #pragma endscop
}
