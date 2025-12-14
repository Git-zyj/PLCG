/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? 11275431120951225850 : -13975));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 = 54554;
        var_20 *= (((~(arr_2 [i_0 + 2] [i_0 + 3]))));
        var_21 *= ((-((max(24822, var_3)))));
        arr_3 [1] = 16432593091304971049;
        var_22 = ((((arr_2 [i_0 + 3] [i_0]) / -22)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 1892538070555125501;
        var_23 = (!var_13);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_24 *= -956080434392769836;
        var_25 = 1;
        var_26 = ((((2896989504 ? (arr_8 [i_2]) : (arr_8 [i_2])))) ? -29689 : var_14);
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_27 = (min(var_17, (arr_0 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5] [i_3] [i_3] = (((((24 ? var_12 : 30593))) ? (((arr_10 [i_3 + 1] [i_4 - 1]) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 + 1]))) : -7));
                    var_28 *= var_11;
                    var_29 = 4187353958;
                    var_30 = (~16383);
                    var_31 = ((+((((((arr_14 [i_3]) ? 7 : var_8))) ? ((510102976 ? 1 : 538711315)) : ((26103 ? -15 : 3210479897))))));
                }
            }
        }
        arr_18 [i_3] = (min(var_6, var_4));
        arr_19 [i_3] [i_3 + 1] = (arr_11 [i_3 + 1]);
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        var_32 *= (max(var_14, (arr_12 [11] [16] [i_6])));
        var_33 = -2096463484;
        arr_23 [i_6] [20] = (max((((~(arr_11 [i_6 + 1])))), (min(((9176241244730834079 ? 95836683 : var_11)), var_3))));
    }
    #pragma endscop
}
