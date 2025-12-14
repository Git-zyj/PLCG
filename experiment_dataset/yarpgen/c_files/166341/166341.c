/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 *= arr_1 [i_0];

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_10 [14] [i_1] [i_2] = (arr_8 [i_1] [i_1] [i_1]);
                var_20 &= var_10;
                var_21 &= ((511 >= var_8) ? var_2 : (arr_7 [i_1 + 1] [i_0] [i_0] [i_0]));
                var_22 = (((arr_2 [i_1] [i_1 + 3]) && (arr_2 [i_1] [i_1 + 3])));
            }
            var_23 = -var_15;
            var_24 = -16;
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_25 |= max(var_10, (arr_1 [15]));
            var_26 -= (max((var_18 & var_12), var_5));
            arr_14 [i_3] [i_3] = max((0 * 16), ((max((min(var_8, 15)), ((min((arr_13 [i_0] [5]), var_11)))))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_27 = var_15;
            var_28 |= ((var_4 ? 23 : var_7));
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_29 = (max(var_29, 17));
            var_30 = (max(var_30, ((((!-16) ? ((max((var_7 <= var_2), var_9))) : ((-16 ? 24 : -16)))))));
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_31 = (-1 >= var_15);
                        var_32 = (min(var_32, ((min(((((min(5166543657839545634, var_10))) ? (!var_18) : (arr_25 [i_6 + 3] [i_6 + 3]))), ((((arr_27 [i_0] [i_6 - 1] [i_6] [i_6 - 1]) < (var_15 < 32767)))))))));
                        arr_28 [i_0] [17] [i_6] [i_8] = (max(((((((arr_17 [i_0] [i_0] [1]) / var_12))) ? ((-6576443161724647200 ? -6 : var_1)) : (((arr_20 [i_7]) ? var_14 : (arr_11 [i_6]))))), var_15));
                        var_33 = (min((max((arr_17 [i_0] [i_6 - 1] [i_7]), 6576443161724647199)), (arr_17 [i_0] [i_6 + 3] [14])));
                        var_34 = (max(var_34, 0));
                    }
                }
            }
            arr_29 [i_0] [i_0] [i_6] = (((0 * 7695085959789861132) ? (arr_26 [i_6] [i_6 + 3] [i_6 - 1] [i_6] [i_6] [i_6]) : var_14));
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_35 = 3750;
        arr_32 [1] [i_9] = var_0;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = (((arr_21 [i_10] [i_10]) ? -var_13 : var_17));
        var_36 = (max(var_36, (((61792 ? (arr_31 [i_10]) : var_16)))));
        var_37 = (!var_6);
    }
    for (int i_11 = 3; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                {
                    var_38 = (min((!8), ((-16 ? (arr_40 [i_11] [i_13]) : ((~(arr_36 [i_11 + 1] [i_13])))))));
                    arr_43 [i_13 + 1] [i_13] = var_2;
                }
            }
        }
        var_39 |= ((((((arr_41 [i_11] [i_11 - 1] [i_11 + 1] [i_11]) & var_15))) ? ((min((arr_36 [1] [i_11 - 2]), (~-31)))) : (((max(797738343560341820, (arr_36 [i_11] [i_11 - 1]))) / -2))));
        var_40 += (((((~34) ? ((3750 ? 3750 : var_8)) : ((((arr_41 [i_11 + 1] [i_11] [i_11] [i_11]) != var_4))))) < var_5));
    }
    var_41 -= var_2;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_42 = var_9;
                    arr_51 [i_14] = 31423;
                }
            }
        }
    }
    #pragma endscop
}
