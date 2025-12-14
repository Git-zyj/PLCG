/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((min(((var_6 ? var_5 : var_7), var_15))));
    var_17 = (!var_5);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = ((var_8 >= (!var_15)));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_19 = (arr_1 [i_0]);
                var_20 &= (((arr_2 [22] [i_2] [i_2]) ? 26919 : 1));
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_21 = var_2;
                        var_22 &= ((~(((arr_4 [i_5] [24] [i_3]) ? 7841499377865786371 : (((10605244695843765246 ? 9075121 : 192)))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_23 = (arr_10 [1] [i_3]);
                            var_24 |= ((!(arr_16 [i_0] [16] [i_4 - 3] [i_3] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_25 = (max(var_25, (216 >= 244)));
                            var_26 = ((((var_5 ? var_13 : 268435455)) * ((((!((min((arr_19 [i_8] [i_6] [i_3] [i_3] [i_0]), (arr_2 [i_0] [i_3] [21]))))))))));
                        }
                        for (int i_9 = 3; i_9 < 24;i_9 += 1)
                        {
                            var_27 = 2444353369431415649;
                            var_28 &= (max((((((var_14 ^ (arr_12 [18] [i_3] [i_4 - 2] [1] [19]))) == (((244 ? 62 : 20946)))))), ((((min(244, var_1))) ? 20946 : (var_14 >= 63)))));
                        }
                        var_29 = (max(var_29, (!var_12)));
                        var_30 = (119 > var_14);
                        var_31 &= ((((min((arr_13 [i_4 - 1] [i_6] [i_6] [i_6]), var_7))) ? var_2 : (((var_15 || ((min(var_15, 7841499377865786371))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_32 = (arr_23 [i_0] [7] [7] [20] [i_4] [i_10] [1]);
                        var_33 = (max(var_33, (65470 < 4052535272582961460)));
                    }
                    var_34 = ((var_9 > (((var_10 - var_9) | ((56607 ? (arr_22 [i_0] [i_3] [i_3] [i_3] [2] [i_0] [i_0]) : 10605244695843765245))))));
                }
            }
        }
    }
    var_35 = (min(var_35, (((((min(var_3, ((192 << (var_4 - 14620617668998007933)))))) ? ((var_2 ? ((var_14 ? 57052864 : var_5)) : var_5)) : var_8)))));
    var_36 = var_1;
    #pragma endscop
}
