/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = ((min((max(13130098623968773191, 2147483647)), (((3351 >= (arr_0 [i_0])))))) | (((var_13 - ((var_14 ? var_4 : var_10))))));

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_21 -= (min((-1528546887 * 0), (((arr_1 [i_0]) & var_18))));
            arr_5 [i_1] = ((((min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1 - 4])))) * var_10));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_0] [6] [i_2] = (arr_3 [i_2] [i_0]);
            var_22 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        }
        arr_10 [i_0] = (1528546888 == 9223372036854775807);
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((-3345 ? (((arr_2 [i_3] [i_3]) ? 10457 : -2147483647)) : ((((arr_7 [i_3] [i_3] [i_3]) != (min((arr_1 [12]), var_18)))))));
        var_23 = (min(var_23, (arr_1 [i_3])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_24 -= var_14;
            arr_18 [i_3] [i_3] [i_4] = (((var_12 || var_7) ? ((((arr_3 [7] [i_4]) ? -7891296655336159689 : (arr_8 [21] [16])))) : var_6));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = arr_6 [i_5] [i_5] [i_5];
        arr_22 [i_5] [i_5] = (((min((-9 && 27044), (-109 & var_10)))) ? (min(var_4, (~var_2))) : var_10);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = 0;
        var_25 = ((!(((-(arr_11 [i_6] [i_6]))))));
    }
    var_26 -= ((-(min(var_2, ((var_17 ? 811955684 : var_14))))));
    #pragma endscop
}
