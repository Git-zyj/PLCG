/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((-var_8 ? var_11 : (var_6 - var_2)));
    var_20 -= ((((var_16 ? 202 : var_9)) * ((var_12 ? (64060 / var_4) : (480492370 / 2300444627231084634)))));
    var_21 ^= (+(min((~-877937872), var_7)));
    var_22 = (((((var_3 ? (max(var_10, var_15)) : var_11))) ? ((~((var_12 << (var_0 + 5581160800133388401))))) : (((!(((-877937872 ? var_18 : 52919))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (((((min((arr_0 [i_0] [i_0]), (arr_2 [i_0]))) / ((-(arr_2 [i_0])))))) ? (min(var_5, (arr_2 [i_0]))) : ((4679213914955376655 ? -var_17 : ((120 ? (arr_2 [i_0]) : 199)))));
        var_24 = (max((((((arr_0 [i_0] [11]) ? 6746830659922832598 : (arr_2 [i_0]))))), (max(((max(var_10, var_12))), 7339797743737682510))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((var_14 ? ((120 ? (arr_3 [i_1] [i_1 - 2]) : (arr_0 [i_1] [i_1 - 2]))) : ((min(((var_5 ? var_2 : 52919)), ((((arr_0 [i_1] [i_1]) > (arr_5 [i_1])))))))));
        var_25 = ((((max((((arr_0 [i_1] [4]) ? var_0 : var_4)), ((-6746830659922832599 ? 8298839350027195773 : 6746830659922832591))))) ? (((max(var_18, var_11)))) : (max(((107 ? (arr_1 [i_1] [i_1]) : var_6)), var_11))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_13 [i_3 + 1] [i_3 + 1] [i_2 - 3] = (arr_2 [i_3 + 1]);
            arr_14 [i_2 - 1] = (~0);
        }
        arr_15 [i_2] = ((!(((172409401 ? (arr_8 [i_2]) : var_4)))));
        var_26 = -877937873;
        var_27 = (((((arr_1 [15] [i_2 - 1]) + 9223372036854775807)) << (((arr_10 [7] [i_2 - 1] [0]) - 6799557723998722334))));
        arr_16 [i_2] = (((arr_11 [i_2] [6] [i_2 - 3]) ? (arr_2 [i_2 - 1]) : ((28764 ? (arr_2 [i_2 - 2]) : (arr_1 [i_2] [i_2])))));
    }
    #pragma endscop
}
