/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        var_11 -= var_4;
                        var_12 = (((((min(30, (arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1])))) ? ((~(arr_5 [i_0] [i_0] [i_0] [i_0]))) : var_5)));
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((~((var_8 ? 2434156739 : var_10))));
                        arr_12 [i_2] = (+(((arr_3 [i_1] [i_2] [i_1]) - (arr_6 [i_0] [i_0] [i_0]))));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_13 = (max(var_13, 78));
                            var_14 = (min(var_14, ((min(24031, 78)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] &= var_1;
                        var_15 = (min(var_15, ((((((arr_13 [i_2 - 2] [i_2 - 3] [i_2] [i_2 + 2] [i_2 + 1]) ? (arr_6 [i_2 + 2] [i_2] [i_2]) : var_0)) < ((max(216, ((((arr_9 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5]) < (arr_18 [i_5] [i_2] [i_1] [i_0] [i_0]))))))))))));

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_1] [i_2] [i_2] [i_1] = (min((arr_4 [i_2 + 2] [i_2 - 1] [i_6 - 1]), (var_6 % var_8)));
                            arr_23 [i_0] |= (max(21095, (arr_1 [i_1])));
                            var_16 = (arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]);
                            var_17 = (max(var_17, ((23767 ? -2089269271685245406 : 12742))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_18 += ((~(~8092361381505826467)));
                                arr_31 [i_0] [i_2] [i_2] [i_7] [i_7] [i_0] = -3964;
                                var_19 = ((((((max(var_2, (arr_18 [i_0] [i_1] [i_2] [i_7] [i_8])))) & ((11083253642990402168 ? 2018943846 : 1281480469))))));
                            }
                        }
                    }
                    var_20 -= max(((max((((84 == (arr_14 [i_2] [i_0] [i_0] [i_0] [i_0])))), (((arr_6 [i_0] [i_0] [i_0]) ? var_6 : var_10))))), (arr_6 [i_0] [i_0] [i_0]));
                    var_21 = (min((arr_30 [i_2] [i_0] [i_1] [i_0] [i_0]), ((var_7 ? var_0 : ((var_7 * (arr_30 [i_2] [i_1] [i_2] [i_0] [i_1])))))));
                    var_22 += (max((max((~-1584883319204909990), (((arr_20 [i_2] [i_1] [i_1] [i_0] [i_1] [i_0]) / var_2)))), var_0));
                }
            }
        }
        var_23 = (min(var_23, (((10391 ? ((~(min(-1623711080, var_3)))) : (min((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]), 1)))))))));
        var_24 += ((var_6 ? (max(15843433928202635499, 1623711067)) : ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((~(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        var_25 ^= (205 ? (((max(1, 1)))) : ((~(arr_32 [i_9 - 1]))));
        var_26 = (min(var_26, (((0 ? 80 : 7803979996345932392)))));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_36 [i_10] = (((~var_9) ? (arr_35 [i_10]) : ((min((arr_35 [i_10]), (arr_35 [i_10]))))));
        var_27 = (((((var_9 ? (arr_35 [i_10]) : (arr_35 [i_10])))) ? (((((-(arr_34 [i_10])))) ? ((~(arr_34 [i_10]))) : var_0)) : (arr_34 [i_10])));
    }
    var_28 = (min(var_9, ((!(((-1762224149 ? 5987960798748128750 : var_1)))))));
    #pragma endscop
}
