/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? ((var_13 ? 62672 : var_5)) : var_1));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = arr_1 [i_0];
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_0] [i_2] [i_3] = arr_3 [1] [i_1] [i_0];
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = 3658;
                        var_16 = (min(var_16, ((((((arr_9 [i_0 + 1] [i_1] [i_2 - 1] [i_3]) << (var_9 - 22666))) ^ (((arr_3 [i_0] [i_0 + 1] [i_3]) ? (arr_9 [i_3] [12] [i_1] [i_0]) : (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((((min((arr_15 [i_4]), (arr_15 [i_4])))) ? (arr_15 [i_4]) : 23));
        arr_17 [i_4 - 1] [i_4] = (min(((5818805874918930241 ? ((-(arr_0 [i_4]))) : (min(72, 2118608263)))), var_0));
        arr_18 [i_4] = ((arr_5 [i_4 + 1]) ? ((3689743734651359959 ? -5293 : 65490)) : ((min((arr_1 [i_4]), (arr_5 [i_4 - 1])))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_17 = var_12;
            var_18 -= max((min((arr_3 [i_4 - 1] [i_4 - 1] [2]), (((arr_10 [i_4] [i_5] [i_5] [i_5]) ? -2709 : -2683)))), var_1);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] = ((((((arr_21 [i_6] [i_6]) & (arr_0 [i_4])))) == var_13));
                            arr_32 [i_7] [i_4] [i_5] = ((((((arr_27 [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 3]) ? (arr_27 [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 3] [i_8 - 1]) : (arr_30 [i_8] [2] [i_8 + 3] [i_8 - 1] [i_8 + 2])))) ? (max(0, (arr_21 [i_7 + 1] [i_7 + 1]))) : (((max(var_4, var_12)) >> ((((arr_1 [i_4]) && 16176055953122454271)))))));
                        }
                    }
                }
            }
        }
        arr_33 [i_4] [i_4] = 2019219768;
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    {
                        var_19 = var_8;
                        var_20 = (min(var_20, (arr_26 [10] [i_11] [i_10] [10])));
                        arr_43 [i_12] [i_12] = ((max(5848991670923358164, -2722)));
                        var_21 *= ((~(arr_38 [i_9 - 1])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        var_22 |= ((((max((arr_28 [i_9] [i_13] [i_14] [i_15] [i_13] [i_15]), -3659))) ^ (((((arr_37 [i_15]) ? (arr_29 [i_9 + 1] [i_15] [2] [i_15]) : var_5))))));
                        var_23 = var_5;
                    }
                }
            }
        }
        arr_52 [i_9 + 1] = var_13;
        var_24 += 7324313175142053843;
    }
    #pragma endscop
}
