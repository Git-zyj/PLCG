/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((max(var_8, var_7)) << ((((2506532427 ? var_7 : var_4)) - 11562))));
        var_17 = (!((var_3 != ((var_10 / (arr_2 [i_0] [9]))))));
        var_18 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((+(((var_2 != var_4) & var_2))));
        var_19 |= (((min((arr_4 [1]), (arr_4 [i_1])))) ? (!-19601) : ((1788434869 & ((1659617491 ? 913942859539091233 : 3373998667)))));
        var_20 = var_12;
        var_21 = ((var_11 ? (((var_3 ? 1659617491 : 243))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 += (((min((!var_5), var_0)) / (-84 != 167)));
        arr_9 [i_2] [i_2] = (min(1659617491, 2329023846));
    }
    var_23 = ((((((1 ? -1659617491 : var_3)))) <= var_5));
    var_24 |= (((((var_4 ? (!var_0) : 1659617491))) ? var_6 : (--1034444353)));
    #pragma endscop
}
