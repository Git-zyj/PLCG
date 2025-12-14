/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [0] [i_0]);
        var_16 = ((8088 ? 8088 : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] = ((-8062 & (arr_3 [i_0])));
            var_17 += (arr_3 [1]);
            var_18 += (((arr_3 [20]) ? (((arr_4 [i_0] [0] [0]) ? (arr_6 [14] [i_1]) : var_4)) : var_5));
            arr_8 [i_0] [i_0] = (((!(arr_1 [i_0]))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 29446;
        var_19 = (max((((arr_4 [i_2] [i_2] [i_2]) ? (arr_4 [i_2] [i_2] [i_2]) : var_5)), var_11));
        arr_13 [i_2] [i_2] = (((arr_10 [i_2]) ? ((~((-8084 ? -8062 : 1436204187432867726)))) : ((((var_3 ? var_11 : 29472))))));
        arr_14 [i_2] = ((min((arr_3 [i_2]), (arr_9 [i_2] [i_2]))));
    }
    var_20 |= ((var_2 ? var_4 : (((((811989275807989278 ? var_2 : 1045964704487708627))) ? var_11 : 0))));
    #pragma endscop
}
