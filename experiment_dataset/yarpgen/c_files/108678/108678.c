/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-3948222220, ((var_0 ? (!1) : var_1))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_0;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((!((((arr_6 [i_0] [i_0] [i_1]) ? ((min(1, 255))) : ((((arr_2 [i_1]) || -5520851312928467336))))))));
            arr_9 [i_0] [i_1] = 1;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_2] [i_2] = (arr_11 [i_0] [i_0]);
            arr_13 [i_0] [i_2] = (arr_11 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = (((arr_10 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_3] [i_0]) : 2030980060));
            arr_16 [i_0] = (1961498453 ? (~-7364821710055384631) : (arr_1 [i_0] [i_3]));
            var_19 = (max(var_19, (((arr_6 [i_0] [i_0] [i_0]) | 0))));
        }
        var_20 &= var_4;
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_21 = ((var_9 ? ((min(0, -5520851312928467359))) : var_15));
        var_22 += ((((((((arr_6 [i_4 - 1] [i_4] [i_4]) + 9223372036854775807)) << (578648163 - 578648163)))) ? (-5520851312928467336 + var_11) : (min((arr_6 [i_4 - 1] [i_4] [i_4 + 1]), 7))));
    }
    var_23 = -var_6;
    var_24 = (min(var_11, var_4));
    #pragma endscop
}
