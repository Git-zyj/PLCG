/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [3] [i_1] = var_10;
            arr_8 [i_0] [i_0] [i_0] = var_2;

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_14 = 5779614292556543517;
                        arr_19 [i_4] [i_2] [i_2] [i_1] = var_12;
                        arr_20 [i_0] [i_0] [i_2] = var_9;
                    }
                    var_15 = ((((-(arr_17 [i_0] [i_1] [i_2 - 2] [i_3]))) >= (arr_0 [11])));
                    var_16 = 2536142859947405439;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_17 = 3746970552091742609;
                        arr_24 [i_2] [i_3] [i_2] [i_1] [i_2] = ((var_4 ? var_3 : ((((((min((arr_22 [i_0] [i_1] [i_1] [i_2 + 1] [5] [i_2 + 1]), 48526))) && var_0))))));
                        var_18 = (((((((~(arr_21 [i_0] [i_2] [i_0]))) != var_2)))));
                        var_19 &= -var_3;
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_20 = ((-12747 ? 5779614292556543521 : 28));
                        var_21 = (((arr_23 [i_3 - 1]) || 5779614292556543517));
                        arr_28 [i_0] [i_3] [i_2] [12] [i_2] [i_0] [i_0] = ((+(((arr_16 [i_2] [i_1] [1] [i_3] [i_3]) ? var_1 : var_3))));
                    }
                }
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_8] [i_8] |= ((1899492135994273174 ? 52 : 0));
                        var_22 = -569206185;
                        arr_34 [i_0] [i_1] [i_2] = 1520282743;
                    }
                    arr_35 [i_0] [i_0] [i_2] [i_2] = var_3;
                }
                arr_36 [i_2] [i_1] [i_2] [i_2 - 2] = ((min(-1081189591, var_5)));
            }
        }

        for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_39 [i_9] = (((((7625418606448597535 + var_1) > (((arr_12 [i_9] [i_0] [i_0] [i_0]) ^ (arr_1 [i_0] [i_9 - 1]))))) ? (((((min(-42, -4799062754996055121)) == 0)))) : (min(-0, (!var_9)))));
            var_23 = 5779614292556543517;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
        {
            arr_43 [i_10] [i_10] [i_0] = (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_44 [i_10] = (((((-(arr_18 [i_10] [i_10 + 1] [i_0])))) || -99));
            var_24 &= (-127 - 1);
        }
    }
    var_25 = (5779614292556543537 < var_9);
    #pragma endscop
}
