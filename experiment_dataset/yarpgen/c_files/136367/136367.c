/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((!-9), ((var_2 ? ((min(var_6, var_17))) : (var_11 + var_15)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 = ((+((((var_7 ? (arr_3 [i_0]) : (arr_3 [i_0]))) << 9))));
        var_21 -= ((((min(14045, (arr_3 [i_0])))) ? 13919 : ((0 << (((arr_0 [i_0 + 3] [i_0 + 3]) - 239))))));
        var_22 += (((20937 < 0) && (16161 / 249)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_1] [i_1] = ((169 / (min(((14 ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), -1136))));
                        var_23 = 20937;
                        var_24 += ((((((var_18 != 88) < ((min(-14065, (arr_11 [i_1] [i_0]))))))) + (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                    }
                }
            }
        }
        var_25 = (min((((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2]) | var_4)), -29494));
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_4] = (min((arr_1 [i_7] [i_7]), ((var_4 ? (arr_4 [i_5 - 3] [i_5 - 3] [i_5 - 1]) : (arr_4 [i_5 - 3] [i_5 - 2] [i_5 + 2])))));
                        arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = -32062;
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_26 = ((!((((min(-25855, -16146)))))));
            var_27 = (((!-29352) ? -29328 : (arr_20 [i_8 + 2] [i_8 + 2] [i_8 + 2])));
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_28 &= var_18;
            arr_35 [i_4] = ((-5906 ? ((var_5 ? 254 : (arr_2 [i_4]))) : ((min(var_2, (((!(arr_9 [i_4] [i_4] [i_4] [i_4])))))))));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_38 [i_4] = -16150;
            var_29 = ((((((min(-10257, (arr_25 [i_4] [i_4] [i_4] [i_4])))) + 2147483647)) << (((((var_18 ? var_7 : var_7))) - 31985))));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            var_30 = (max(var_30, 110));
            arr_42 [i_4] [i_4] = ((154 ? (arr_9 [i_11] [i_11 + 1] [i_11] [i_4]) : var_3));
        }
    }
    #pragma endscop
}
