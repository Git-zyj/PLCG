/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [6] [3] [i_0] = -1;
                        var_11 = (min(var_11, ((((arr_4 [i_1] [i_1] [i_2 - 2]) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (((1 ? 1 : 1518409467769636015))))))));
                    }
                }
            }
            var_12 = (((arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_1]) ? (arr_0 [i_0 + 2] [i_0]) : 18446744073709551615));
            arr_13 [i_0] [i_1] &= ((((1 ? 16838 : 32767)) >= 48698));
            var_13 = (((arr_8 [i_0] [1] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_1]) ? 524287 : 48698));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_16 [i_0] [i_0] [i_4] [i_4] = (((arr_4 [4] [i_0 - 2] [i_0 - 3]) ? 0 : (arr_4 [9] [i_0 - 2] [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_14 = var_8;
                            arr_21 [i_0] [i_0 + 2] [i_1] [i_4] [i_4] [i_4] [i_4] = ((-((1 ? 32767 : -15308))));
                            var_15 = var_7;
                        }
                    }
                }
                arr_22 [i_0 - 2] [i_0] [i_4] [i_4] = ((311789789 ? (arr_19 [i_1] [i_4] [14] [i_1]) : (arr_14 [i_4])));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_25 [i_7] [i_1] [i_7] [i_1] = (!3010393855);
                arr_26 [i_7] [i_7] = ((((arr_4 [i_0] [i_1] [i_0]) ? 0 : 65535)));
            }
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                var_16 = var_3;
                arr_31 [i_1] [i_1] &= ((-(arr_8 [1] [i_8 - 1] [i_1] [i_1] [i_1] [1])));
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_34 [i_0] [i_9] [i_9] &= -0;
            var_17 = (arr_10 [i_0 - 3] [i_9]);
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_18 = (((var_0 * 65535) & (arr_0 [i_0 + 1] [i_0 + 1])));

            for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_19 = ((-var_7 || (arr_18 [i_10])));
                var_20 = (max(var_20, var_4));
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_21 = (max(var_21, (arr_36 [i_0 + 2] [i_12 - 1])));
                arr_43 [i_0] [i_12] = var_3;
            }
            arr_44 [i_0] [i_10] = (((arr_37 [i_0 - 1] [i_0] [i_0 - 3]) ? ((((arr_40 [i_0 - 2] [1] [i_0] [i_10]) ? (arr_33 [i_0] [i_10]) : 44298))) : ((7015023743822805254 - (arr_6 [i_0 - 1])))));
            arr_45 [i_10] [i_10] [i_0 - 1] = (((arr_38 [4] [i_10] [i_0]) ? ((((arr_3 [i_0] [i_10]) || var_8))) : ((var_0 ? -15308 : 1))));
            var_22 = -1133658676;
        }
        arr_46 [i_0] = var_9;
        arr_47 [i_0] = ((!(((var_0 ? (arr_27 [i_0] [i_0]) : (arr_32 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
    {
        var_23 = (((arr_29 [i_13 - 3] [i_13]) ? (arr_37 [i_13] [i_13] [i_13 - 1]) : (arr_32 [12] [i_13])));
        var_24 = (max(var_24, ((((((32512 ? -49 : 0))) ? var_1 : (1 / var_10))))));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 8;i_14 += 1) /* same iter space */
    {
        var_25 ^= ((~((((arr_52 [i_14 - 3] [i_14]) == (arr_39 [i_14 + 2] [i_14 + 2] [i_14 + 2]))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                {
                    var_26 = (arr_54 [i_14 + 2]);
                    var_27 *= (~11035267597005704248);
                }
            }
        }
    }
    var_28 = -1133658676;
    #pragma endscop
}
