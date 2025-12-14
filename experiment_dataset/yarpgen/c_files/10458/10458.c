/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = 34634616274944;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_16 = (arr_4 [i_1 + 2] [i_1 + 1] [i_1]);
            arr_7 [i_0] [i_0] = (~var_8);
            var_17 = (arr_6 [i_0]);
            var_18 = (~var_13);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = (max(var_19, 30303523));
            var_20 -= ((var_1 ^ (((arr_10 [i_2 - 1] [i_0]) ? var_5 : var_9))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_21 = (((var_2 / (((arr_8 [i_3]) ? var_10 : 32767)))));
            var_22 &= 0;
            var_23 |= (min(((249 ? ((((arr_1 [2] [i_0]) || (arr_11 [i_3] [17])))) : (arr_1 [i_3 - 1] [i_3 - 2]))), (((!(((~(arr_4 [i_3] [i_0] [i_0])))))))));
            var_24 = ((((arr_12 [i_3] [i_3 - 2]) + (arr_12 [i_3 + 1] [i_3 + 1]))));
            var_25 = (min(var_25, ((((min((arr_5 [i_0] [i_0]), (arr_4 [i_3 - 2] [i_3 + 1] [i_3])))) ? (arr_9 [i_0]) : (arr_8 [i_3])))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = (min(var_26, (!var_13)));
        var_27 = (((arr_4 [i_4] [i_4] [i_4]) ? 174 : (arr_4 [i_4] [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_20 [i_5] = (arr_10 [i_5] [i_5]);
        arr_21 [i_5] [i_5] = ((-(arr_8 [i_5])));
        arr_22 [i_5] |= (((arr_13 [i_5] [i_5]) ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])));

        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_28 = 3486449312639427814;
            var_29 = (arr_0 [i_6 - 1]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_30 -= (((arr_19 [i_6 + 1] [i_6 + 1]) & -3383933122310332947));

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_31 = (max(var_31, 18064271385342974958));
                            var_32 = 65535;
                            arr_34 [5] [3] [3] [i_6 - 1] [i_5] = ((-(arr_4 [i_9] [i_9] [i_6 + 1])));
                            arr_35 [i_9] [i_8] [i_7] [i_5] [i_5] = 65535;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_33 = ((-(arr_29 [11])));
                            var_34 = (min(var_34, (arr_27 [6] [11] [i_5] [i_5])));
                            var_35 = (((arr_4 [10] [i_7] [i_6 + 1]) <= (arr_39 [i_6 + 1] [i_6 + 1] [i_6 - 1])));
                            var_36 = (arr_30 [i_6 + 1] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 - 1] [i_6]);
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_37 = (arr_5 [i_8] [i_6 + 1]);
                            var_38 = (((((1 ? 3383933122310332947 : 5105304606702676658))) ? (arr_8 [i_6 + 1]) : (arr_25 [i_6 + 1] [i_6] [i_6 + 1])));
                            var_39 = arr_10 [i_5] [i_5];
                        }

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_40 = ((!(((9896 ? var_5 : var_4)))));
                            var_41 = (-(arr_43 [i_12] [i_8] [i_7] [i_6] [12]));
                            arr_44 [i_12] [5] [i_5] [i_5] [i_5] = (((((var_10 ? var_10 : (arr_41 [i_12] [i_8] [i_7] [i_6] [i_8] [i_5])))) ? (!var_2) : (arr_32 [i_12] [i_12] [i_12] [i_6 + 1] [i_5])));
                        }
                        var_42 = ((-(arr_31 [i_8] [9] [i_8] [8] [i_7] [i_6 - 1])));
                    }
                }
            }
            var_43 = (!15062810951399218669);
        }
        for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_44 *= (arr_8 [i_13 - 1]);
            var_45 &= var_5;
            var_46 = (15062810951399218668 % 59);
        }
        var_47 ^= ((-((var_1 ? 18446744073709551615 : (arr_31 [i_5] [i_5] [4] [i_5] [i_5] [i_5])))));
    }
    var_48 *= (min(var_10, var_12));
    #pragma endscop
}
