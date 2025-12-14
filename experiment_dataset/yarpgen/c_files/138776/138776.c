/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_15 = -var_6;
                    var_16 += (-120 | var_1);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_17 = (((((-6 ? 1 : 238))) ? (arr_3 [i_1 + 2] [i_3 + 2] [i_1 - 1]) : var_13));
                        var_18 = var_6;
                        var_19 ^= (!8);
                    }
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_14 [i_0] = ((1 ? 45 : 0));
                        var_20 |= ((-(arr_10 [i_3] [i_3 - 1] [i_3] [i_3])));
                        var_21 = ((~(arr_1 [i_3 - 2])));
                    }
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        var_22 = (min(var_22, ((((var_13 ? var_2 : (arr_0 [i_1] [i_1])))))));
                        var_23 = (((arr_13 [i_0] [i_1 + 3] [i_3] [i_3 - 1] [i_6]) ? 17638992912062552284 : (arr_1 [i_0 - 1])));
                        arr_17 [i_0] [i_0] [i_3 - 2] [i_6] [i_6] = (((!var_13) >> (110 - 86)));
                        arr_18 [i_0] [i_1] [i_0] = ((~(!1566578221)));
                    }
                    var_24 = ((~(arr_1 [i_0 + 1])));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_25 = 8936830510563328;
                        var_26 = ((((((arr_20 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0]) : -6))) ? (~var_12) : ((var_7 ? 2044 : var_7))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_27 = var_14;
                        var_28 = (-1566578226 != (arr_6 [i_1 + 2] [i_1 - 2] [i_1 - 2]));
                        var_29 = (~(((arr_19 [i_1] [i_0]) ^ 32764)));
                        var_30 = (arr_20 [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] [18] = (arr_21 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]);
                        var_31 = (((arr_23 [i_0] [i_0] [i_0] [2]) != (~-47)));
                        var_32 = (((1 ? (arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_9]) : var_1)));
                    }
                }
                arr_28 [i_0] [i_0] = 1;
                var_33 = (arr_1 [i_1 - 1]);
            }
        }
    }
    var_34 = ((-((var_10 ? ((var_4 | (-2147483647 - 1))) : -111))));
    #pragma endscop
}
