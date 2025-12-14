/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((-3 / var_11), (((!((min(112, 1259164063))))))));
    var_21 = (max((max((~112), var_16)), var_14));
    var_22 = var_15;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = var_1;
            arr_5 [i_1] [i_1] = (min((-1 - var_15), ((((max((arr_0 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1])))) ? (arr_2 [i_1]) : (18446744073709551612 == var_13)))));

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_23 = (((~var_2) ? (~var_7) : (min((arr_6 [i_0] [i_1] [i_1 - 1]), (arr_6 [i_1] [i_1] [i_1 - 1])))));
                var_24 = (max(var_24, (((!(!112))))));
                arr_10 [i_1] [11] [11] = (arr_0 [i_0] [i_1]);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_25 = (min(var_25, (~var_4)));
                var_26 = var_11;
                arr_13 [i_1] = (!var_15);
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] = (((arr_16 [i_1] [i_1] [1]) ? ((((max((arr_1 [i_0]), var_4))) ? ((min(var_16, -796))) : (min((arr_18 [i_1] [i_1] [i_4] [i_5]), (arr_9 [i_1] [i_6]))))) : (min((~var_16), ((19 ? (arr_22 [i_0] [7] [7] [i_1]) : var_14))))));
                            arr_24 [i_0] [i_0] [i_0] [i_1] = ((var_6 ? ((min(((max(var_2, -234796588))), var_19))) : (((arr_2 [i_1]) ? 24665 : (((arr_6 [i_0] [i_1] [i_0]) >> var_10))))));
                        }
                    }
                }
            }
            arr_25 [i_1] = (!((min((((var_16 > (arr_11 [i_1 - 2] [i_1] [i_0])))), ((var_7 ? var_15 : (arr_6 [i_0] [i_1] [i_1 - 1])))))));
        }
        arr_26 [i_0] = ((((max(((max((arr_8 [i_0] [i_0] [i_0] [i_0]), var_9))), 3893669919))) ? (max(((min(-16710, var_9))), ((var_12 ? -32195 : var_2)))) : ((max(-23, 16709)))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_27 += (max((((arr_1 [i_7]) ? var_14 : 39280)), ((((((var_18 ? (arr_22 [i_7] [i_7] [i_7] [i_7]) : (arr_18 [10] [i_7] [i_7] [i_7])))) && ((((arr_16 [i_7] [i_7] [i_7]) ? var_4 : (arr_0 [i_7] [i_7])))))))));
        arr_29 [i_7] [i_7] = (~(arr_14 [i_7] [i_7] [i_7] [i_7]));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_28 = var_13;
        var_29 = ((4294967295 ? 3893669919 : 8191));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_40 [i_9] [i_9] [0] = (16709 != -1);
                var_30 -= (-16711 ^ var_7);
                var_31 = (((arr_7 [i_11]) ? (arr_7 [i_10]) : (arr_7 [i_9])));
            }

            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_43 [i_9] = (arr_21 [i_12] [i_9] [i_12] [i_9] [i_9]);
                var_32 = ((-(arr_21 [i_9] [i_9] [i_10] [i_12] [i_9])));
                var_33 = var_11;
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_34 -= (((!0) && (arr_12 [i_9] [i_9] [i_9] [i_13])));
                var_35 = (arr_1 [i_13]);
            }
            arr_47 [i_9] [i_10] = 4194303;
            var_36 = (((arr_21 [i_9] [i_9] [i_9] [i_10] [i_10]) ? ((-(arr_39 [i_9] [i_9] [i_9]))) : (arr_36 [i_10] [i_9] [i_9])));
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            arr_51 [i_9] [i_14] = (((((-16 ? -15475 : 24))) ? (arr_50 [i_9] [i_9]) : 1));
            arr_52 [i_9] [i_9] = (~(((arr_14 [i_14] [i_14] [i_14] [10]) ? (max(1259164063, var_6)) : ((min((arr_3 [i_9] [i_14]), 1))))));
        }
        arr_53 [i_9] [i_9] = ((var_8 << ((var_9 ? var_0 : ((var_1 ? var_16 : -16711))))));
        var_37 = (~((var_10 ? (((arr_31 [i_9] [i_9]) ? -15475 : var_14)) : (arr_30 [i_9]))));
        var_38 = (min((!4294967295), (arr_49 [i_9] [i_9])));
        var_39 = (var_4 ? (min((min((arr_28 [i_9] [i_9]), 101)), (min(var_13, var_16)))) : ((min(var_16, (((!(arr_2 [i_9]))))))));
    }
    var_40 = var_18;
    #pragma endscop
}
