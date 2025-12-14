/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? var_12 : var_0));
    var_21 *= ((!(!2301339409586323456)));
    var_22 = var_4;
    var_23 &= var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_24 *= (2889110409211136738 * 0);

            /* vectorizable */
            for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_25 *= ((1 ^ 1) & (~12817177011882634095));
                arr_8 [i_1] [i_1] [i_1] = (arr_7 [11] [9] [9] [i_2 + 1]);
                var_26 = 96;
            }
            for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] = ((min(50250, 171388024)));
                var_27 = (min(var_27, ((((arr_4 [i_3 - 2] [i_3 + 1] [i_3 - 2]) ^ (arr_4 [i_3 - 2] [i_3 - 1] [i_3 - 3]))))));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_28 = 3815018313;
                            var_29 &= -4080;
                            arr_18 [i_4] [8] [i_4] [i_4] [i_4] = 171388024;
                            var_30 *= -8912570094392578403;
                            var_31 = ((arr_2 [i_5] [i_5] [i_4 - 1]) ? -4094 : (arr_16 [i_0]));
                        }
                    }
                }
                var_32 = (171388024 ? 7831256277350802717 : -2035772709532264644);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_7] [i_4] = (var_1 % 57);
                            var_33 = (597790030 * var_12);
                        }
                    }
                }
                var_34 = (min(var_34, (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])));
            }
            var_35 = ((2539059962994545033 ? (((arr_24 [i_0] [i_1] [i_0] [i_0] [i_0]) ? (arr_4 [6] [i_0] [i_0]) : 16846472670675310178)) : 7031858011601552691));
            arr_26 [i_0] = ((((arr_22 [i_0] [i_0] [i_0] [0]) ^ 1600271403034241438)));
            var_36 = (max(var_36, var_11));
        }
        var_37 = (max(var_37, ((((arr_23 [1]) | (134217728 - -1))))));
        arr_27 [i_0] = (((var_0 <= (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_38 += 0;
                            var_39 *= 4294967295;
                        }

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_44 [i_9] = (arr_29 [i_9]);
                            var_40 = (max(var_40, (((!(((3197851143 ? (arr_40 [i_9] [i_9] [i_9]) : -817681309945157537))))))));
                            var_41 = (arr_41 [6] [4] [i_9] [i_12] [6]);
                            var_42 ^= (arr_43 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_11 - 1]);
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_43 = (597790030 + 4268);
                            var_44 = 4094;
                            var_45 = (+-222);
                        }
                    }
                }
            }
        }
        var_46 += (arr_42 [4] [4] [i_9]);
    }
    #pragma endscop
}
