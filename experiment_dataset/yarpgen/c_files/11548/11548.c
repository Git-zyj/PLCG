/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_1, 5925898007455795113));
    var_18 = var_11;
    var_19 ^= ((((min((min(var_5, var_9)), (var_6 < var_10)))) ? var_13 : (min(var_14, var_2))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_10 <= (min(3253244945137194814, var_6))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = (((3253244945137194814 & -38067320) ? ((var_16 ? (~549747425280) : (((min(161, -3557)))))) : (((466 ^ 1) ? (max(8174309984018109295, 1014032010949785613)) : -16780))));
                            var_22 = ((252 / (arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_23 = (min(var_23, ((min(((((((var_7 ? var_2 : var_3))) ? ((16769024 ? var_13 : -26927)) : (~var_12)))), ((-(min(549747425280, 1)))))))));
                            var_24 = ((((var_16 | (max(-3051131205260802633, (arr_12 [i_0] [i_3] [i_2] [i_1 + 1] [i_0]))))) & (((((var_7 ? -1014032010949785614 : var_14)))))));
                            var_25 += var_2;
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_6 - 1] [20] [i_2] [i_3 + 1] [i_0] [i_3 + 1] [i_2] = ((var_7 ^ var_16) >= ((((arr_17 [i_6] [i_3 + 3] [i_0] [i_1 - 1] [i_0]) ? 24817 : ((min(253, 1)))))));
                            var_26 = (max(var_26, ((min(((((-25343 ? (arr_1 [10]) : var_15)) << (((var_12 | var_5) - 32377)))), var_9)))));
                            var_27 = ((((24803 ? var_10 : var_13)) < 4));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_28 -= ((((var_15 < (arr_9 [i_0] [i_0] [i_0] [i_0] [i_7])))) <= (((var_6 + 2147483647) >> (var_4 - 95))));
                            arr_25 [i_0] [i_1] [i_2] [i_3 + 3] [i_2] [8] = (0 && 5925898007455795113);
                            arr_26 [i_0] [i_1] [i_0] = (((((var_3 ? 62 : var_1))) ? 49448 : var_0));
                        }
                        arr_27 [i_0] [i_1 - 1] [i_0] [13] = (((((-24807 ^ var_10) ? 1 : (min(753397623, 59141))))) ? (arr_0 [i_0]) : 62);
                        var_29 = ((((((arr_10 [17] [i_0] [i_1 + 1] [i_2] [i_3] [i_3]) ? (var_15 == 3805652637424821263) : 18446744073709551613))) ? (((((var_14 ? -116 : 7811191754114900982))))) : 0));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = arr_19 [i_8];
        arr_33 [5] [8] = var_9;
        var_30 = 5346664959067570234;
    }
    #pragma endscop
}
