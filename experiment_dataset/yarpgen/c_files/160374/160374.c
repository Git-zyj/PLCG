/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((((~((max(var_3, var_9)))))), (~9182361927721813404))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [2] [2] [i_0] [2] [i_1] &= (((max((!var_12), 19437)) == (!var_10)));
                            arr_16 [i_0] [0] [i_4] [i_3] [i_0] = (arr_14 [i_4 + 3] [i_1] [i_3 + 1] [i_3 - 3] [i_4] [i_4]);
                            var_15 = (min(var_15, -828669652));
                            arr_17 [i_4] [i_1] = ((!((((~var_6) + (arr_1 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_1] [1] [i_5] = (((arr_0 [5] [5]) ? ((max(var_3, (arr_3 [i_3 - 3])))) : var_1));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (((-(arr_14 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
                            var_16 -= (max((arr_13 [i_3 + 1] [12] [i_3] [i_3] [i_1] [2]), ((var_5 % (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_1] [i_3])))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_17 = ((-(var_4 && var_5)));
                            var_18 = (((((min(2147483647, var_5)))) ? (arr_12 [i_0] [5] [i_0] [i_0] [1] [i_0] [i_0]) : (((max(var_2, var_6))))));
                            var_19 = ((~(arr_0 [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [7] [i_1]);
                            var_20 ^= (arr_8 [i_0]);
                            var_21 = ((var_12 ? (arr_24 [8] [i_0] [i_0] [i_0] [i_2] [i_0] [i_7]) : var_7));
                            arr_27 [i_0] [i_2] [i_0] = var_12;
                            var_22 &= (((arr_18 [i_7] [i_1] [i_7] [i_3 - 2] [i_7]) - (arr_18 [i_0] [i_1] [i_2] [i_3 + 1] [6])));
                        }

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_23 = ((~((max(var_7, (arr_4 [i_3 + 1]))))));
                            arr_30 [i_0] [i_0] = (min(0, (min((arr_25 [i_3 + 1]), var_1))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-4116164349552160511 ? -828669625 : 417735234));
                        }
                    }
                    arr_32 [i_2] [i_2] [i_2] [i_2] |= ((-127 - 1) ? 10 : var_1);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_24 = ((65535 == (-9223372036854775807 - 1)));
                        var_25 = (max(var_25, ((-(arr_37 [i_9] [i_12])))));
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((var_0 ? var_4 : (arr_41 [i_9] [i_9])))))));
        var_27 ^= 8;

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_28 += var_8;
            var_29 = (max(var_29, (((~(arr_36 [i_9] [i_9] [i_9]))))));
            arr_47 [i_9] = ((arr_33 [8]) * (((!(arr_46 [i_9] [i_9])))));
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] = (!(((var_3 ? (min(var_12, (arr_33 [i_14]))) : 828669654))));
        arr_51 [i_14] [1] = (((min(var_0, var_1)) ? (max(((-14 ? var_2 : var_6)), (arr_39 [i_14] [i_14] [i_14]))) : (((max(((max(var_0, var_3))), 721))))));
    }
    #pragma endscop
}
