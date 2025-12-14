/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 245;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [11] = ((var_7 ? 3782821125833001088 : var_4));
        arr_4 [21] = 1218214477;
        var_14 = ((var_11 || (arr_0 [i_0])));
        var_15 = (min(var_15, (3782821125833001088 <= 6)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = (((var_3 ? var_2 : 14663922947876550549)) - ((((arr_5 [i_1]) ? (arr_7 [i_1] [i_1]) : 233))));

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = (!3782821125833001088);
            var_16 = (max(var_16, (((arr_6 [i_1] [i_2]) ? (arr_6 [i_1] [i_1]) : var_10))));
            arr_12 [i_1] [i_1] &= (((arr_6 [i_1] [i_2 - 3]) / var_6));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_16 [24] = -8845890422845439589;
            var_17 = (max(var_17, -3782821125833001088));
            arr_17 [i_3] [i_3] = (~var_11);
            var_18 &= ((var_2 ? var_3 : -2655920330477070201));
        }
        arr_18 [i_1] = ((41 ? (arr_10 [i_1]) : (1 | -1098752952)));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_19 = -3365425680337548226;
                        var_20 = var_12;
                    }
                }
            }
            var_21 = (max(var_21, ((((arr_19 [i_4] [i_5]) ? ((-261429437 ? (max(697552347, 3782821125833001056)) : (arr_9 [12] [i_5]))) : ((max(3365425680337548226, var_0))))))));
            var_22 = (max(var_22, ((((!((max((arr_22 [6] [6]), 3076752821)))))))));
            var_23 = (+(max((var_12 + var_5), ((-108 ? 14663922947876550525 : var_1)))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_24 = (((arr_6 [i_4] [i_5]) == var_2));

                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    arr_36 [i_5] [i_5] [i_8] [i_8] [i_9] = -3076752814;
                    arr_37 [10] [i_5] [i_8] [i_9] |= ((~(0 & var_7)));
                    var_25 = (max(var_25, (var_12 % 12416072575867541969)));
                }
            }
        }
        var_26 = (min(var_26, (max(((min((~var_6), 6030671497842009647))), var_4))));

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_27 = (max((((17 * 15) / (-842340967435856337 | -3365425680337548232))), (arr_24 [10] [i_10] [i_4])));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
            {
                arr_44 [i_4] [i_10] [7] [i_11] |= ((-(((245 != (arr_22 [8] [8]))))));
                arr_45 [i_4] [i_10] [5] = (((arr_39 [i_11] [i_4] [i_4]) != (((arr_25 [i_4] [i_4] [i_11]) ? -6918024488742062938 : var_7))));
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
            {
                var_28 = (!var_11);
                arr_48 [i_4] = (max((((arr_40 [2] [i_12 + 1] [i_12 + 1]) / 2844208442030546058)), ((((arr_40 [i_12] [i_12] [i_12 + 1]) <= -2655920330477070201)))));
                arr_49 [i_4] [i_10] [i_12 + 1] = min(6918024488742062921, (3365425680337548226 - 79));
            }
            var_29 = (min(var_29, ((max((var_8 != 62), -176)))));
        }
        arr_50 [i_4] = 3365425680337548237;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (-39002464 + 4294967295)));
        arr_53 [i_13] = 0;
        var_31 |= (((arr_13 [i_13] [i_13] [13]) ? var_4 : var_10));
        var_32 &= var_2;
        var_33 = (((~4294967285) ? (((!(arr_41 [i_13] [i_13] [i_13] [11])))) : (!var_12)));
    }
    var_34 = (max(var_34, (((!((min((min(2, 3782821125833001067)), (!var_8)))))))));
    #pragma endscop
}
