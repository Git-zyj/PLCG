/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-var_10 / -255);
    var_20 = (((var_11 ^ var_7) - var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (max((max(((-(arr_0 [2] [i_0]))), ((max((arr_0 [i_0] [i_0]), 22006))))), (!17809944079057376803)));
        var_22 |= -var_15;
        var_23 = var_17;
        var_24 = ((!((!(~-5974752570343765873)))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_25 = (((arr_3 [i_1]) && var_14));
        var_26 = (max(((~(~16919160895241820692))), ((((-(arr_2 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_27 = ((var_10 ? (max(1527583178467730934, (1393202037 > -16))) : var_16));
        var_28 = ((!(arr_2 [i_2])));
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_29 = (max(((min((144 != var_4), (min(var_15, var_8))))), ((var_13 ? (((arr_7 [i_3]) ? (arr_7 [i_3]) : var_13)) : ((-(arr_7 [i_3])))))));
        var_30 = (!13769898057368579580);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_31 = (max(var_31, (9584302437505993370 * var_4)));
                    var_32 = ((((arr_13 [i_3] [i_4] [i_4]) & var_8)));
                }
            }
        }
        var_33 *= 16919160895241820692;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    var_34 = (((max((max(18446744073709551615, (arr_17 [i_3]))), 54)) + ((var_13 ? -9584302437505993370 : ((min((arr_7 [i_7 - 1]), 54281)))))));
                    var_35 = (min(33, -126));
                    var_36 = (var_2 - ((73 + (min(var_4, var_9)))));
                }
            }
        }
    }
    var_37 = 112;
    #pragma endscop
}
