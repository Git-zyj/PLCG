/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_2 ? (~var_0) : ((var_3 ? var_4 : var_14))))) ? (max((var_0 <= var_4), var_4)) : (~var_13)));
    var_18 = (max(((max((var_8 != var_10), var_9))), var_13));
    var_19 = (!20492);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (~-20520);

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_21 = ((!(arr_1 [i_1 + 2] [i_1])));
            arr_7 [i_1] [i_1] = (~16320);
            arr_8 [i_0] [i_1] = (((!15728640) & var_0));
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (!var_15);

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_17 [i_2] [i_2] [i_3 + 1] = (((arr_11 [i_2 - 1]) & var_4));
            arr_18 [i_3] [i_3] = -4279238641;
            var_22 = (!0);
            arr_19 [i_2] [i_3] [i_3 + 2] = (!var_6);
        }
        arr_20 [i_2] = ((var_13 ^ var_3) ? (((arr_11 [i_2 - 1]) ? (arr_15 [9]) : var_11)) : (((var_4 ? var_16 : (arr_12 [i_2])))));
        var_23 = (min(var_23, (arr_9 [4])));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 = min((!var_15), var_15);
        var_25 = (min(var_25, ((~(((arr_14 [i_4 - 1]) - (arr_11 [i_4 - 1])))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_35 [i_7] [i_9] [i_7] [i_8] [i_9] [i_8] [i_5 + 1] = (~var_10);
                            arr_36 [8] [i_8] [i_7] [i_8] [i_5 - 1] [i_7] = var_3;
                        }
                    }
                }
            }
            arr_37 [i_5] [i_6] = (arr_29 [i_5] [i_6]);
        }
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            arr_40 [i_5] [i_5] [i_10] = ((var_0 << (var_1 - 43870)));
            arr_41 [i_5] [i_10] = ((~((var_11 ? var_14 : var_6))));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_51 [i_5] [i_11] = ((!(arr_48 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 1])));
                        arr_52 [i_11] [i_11] [i_12] [i_12] [i_13 + 1] = (-var_4 | var_7);
                    }
                }
            }
            var_26 = var_13;
            arr_53 [i_11] = var_14;
            arr_54 [9] [i_11] [9] = ((~((var_6 ? (arr_10 [i_5] [i_11]) : var_9))));
        }
        var_27 = 1266127985;
        var_28 += (var_15 + var_3);

        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_29 = -1;
            arr_57 [i_5] [i_5] = (!(var_9 & var_0));
        }
    }
    #pragma endscop
}
