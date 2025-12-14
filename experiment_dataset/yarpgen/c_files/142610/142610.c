/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [19] = ((var_0 ? var_13 : ((max(740589306, (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = max(((1 << ((((((6552269829709319642 ? -7970556480331394347 : 3753076766144034372)) + 7970556480331394378)) - 1)))), ((32738 ? 27523 : (min(740589297, 1)))));
            arr_6 [i_1] [1] = ((206 ? var_6 : (((arr_0 [i_0]) ? (arr_0 [i_1]) : 65531))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_19 |= var_6;
            arr_11 [i_0] [i_0] = (arr_10 [i_0]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 = var_10;
            var_21 = ((((~((var_2 & (arr_13 [i_3] [i_3]))))) << ((((~(arr_13 [i_0] [i_3]))) - 16064))));
            arr_14 [i_0] [i_3] = (((arr_5 [i_0]) * (max((arr_5 [i_3]), (arr_5 [i_0])))));
        }
        arr_15 [0] = ((arr_3 [i_0] [20]) ? (1 & 152) : ((((!var_5) > (arr_3 [i_0] [12])))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((9223372036854775788 % var_15) ? (min(var_13, ((97 & (arr_5 [i_4]))))) : ((72057594037927920 ? 4543423711888229208 : (max(-6552269829709319646, 18446744073709551604)))))))));
        arr_18 [i_4] = arr_1 [i_4] [i_4];
        var_23 = (!63);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_24 ^= (arr_10 [i_5]);
        var_25 *= var_4;
        arr_23 [19] [1] = (((arr_5 [i_5]) ^ 1));
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] = var_7;
        var_26 = (min(var_26, (arr_24 [i_6 + 1] [i_6])));
    }
    var_27 = 54;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {
            {
                arr_33 [2] [i_7] = var_1;
                var_28 = (min(var_28, ((((!(arr_24 [i_7 + 1] [i_7 + 1])))))));
            }
        }
    }
    #pragma endscop
}
