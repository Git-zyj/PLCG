/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 + (var_12 || var_8)));
    var_18 = var_8;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, (((((((1 ? (arr_1 [i_0]) : 0))) ? var_3 : ((min(var_0, 2927281723))))) != 1))));
        var_20 = ((((var_4 ? 3945299720 : 349667556))) ? ((~(((arr_0 [i_0 - 1]) ? 1 : 1)))) : ((-47 ? (arr_1 [i_0 + 2]) : (arr_0 [i_0 + 2]))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 7;i_1 += 1)
    {
        var_21 = ((arr_1 [i_1 + 1]) ^ (arr_1 [i_1 + 3]));
        var_22 = (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 3]) : (arr_0 [i_1 - 3])));
        arr_4 [i_1 - 3] [i_1] = (((arr_1 [i_1 + 2]) && (arr_1 [i_1 + 3])));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_23 = (46 / 1);
        var_24 = ((((((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))) ? ((((arr_5 [i_2]) < 20096))) : 4));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_25 = (min(((((((arr_8 [i_3]) < 567398335))) << (arr_9 [i_3]))), (((567398335 || (arr_6 [i_3] [i_3]))))));
        arr_10 [i_3] = (((46 < 1925) << ((((min((arr_8 [i_3]), (arr_8 [i_3])))) - 58854))));
    }
    #pragma endscop
}
