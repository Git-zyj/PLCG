/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [6] |= (((((~(!1195606043)))) ? 1195606043 : ((12 - ((0 ? 8369216552891682824 : 64135938))))));
            var_20 -= (arr_1 [i_0] [6]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [i_3] = ((64135938 ? (arr_3 [i_0]) : var_8));
                arr_14 [i_0] [i_2] = (((arr_2 [i_0]) ? (64135938 && 1) : -45));
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                arr_17 [i_0] [i_2] [i_0] &= (((arr_9 [i_0] [i_2] [i_2]) != (((arr_16 [i_0] [i_0] [i_2] [i_4]) ? 80 : (arr_0 [i_0] [i_2])))));
                var_21 -= (((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) * (var_8 > 156)));
                arr_18 [i_0] [i_0] [i_0] [i_0] = (((1 == 4294959104) ^ (var_12 | var_8)));
            }
            arr_19 [i_2] [i_2] &= -var_3;
            arr_20 [i_0] [i_0] [12] = arr_11 [i_0] [i_2];
            var_22 = (min(var_22, 7168));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_23 = (max(-35, 8630346018047429642));
            var_24 = (max((((((arr_4 [i_0] [i_5]) >> (var_3 - 99))))), var_16));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_25 -= (((-394713654 ? -26049 : (arr_25 [i_6] [4] [i_6]))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_26 = (max(var_26, (((((28 < (arr_8 [i_6] [i_6] [i_6]))) ? (arr_28 [i_6 - 1] [14]) : (~32))))));
                        var_27 = arr_2 [1];
                        var_28 = (((arr_30 [i_0] [i_6 - 1] [i_7]) ? (((arr_8 [i_0] [i_0] [i_0]) ^ var_0)) : (~var_4)));
                    }
                }
            }
            arr_33 [i_0] [i_0] = (((-1 ? var_6 : (arr_28 [14] [i_0]))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_38 [i_9] [i_9] [i_0] [i_0] [i_0] [i_0] = ((var_19 + (arr_23 [i_0 - 1] [i_0])));
                        arr_39 [i_0] = (!9816398055662121974);
                    }
                }
            }
            arr_40 [i_0] [i_0] = arr_37 [i_0] [i_0] [i_6];
        }
        arr_41 [i_0] = -4294959099;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_44 [0] &= ((((var_9 * (!var_17))) - 0));
        var_29 = ((((((var_4 ? (arr_29 [i_11] [i_11] [i_11] [i_11]) : (arr_43 [i_11]))) * (((!(arr_0 [i_11] [i_11])))))) <= ((((131 && (arr_22 [i_11] [i_11])))))));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    arr_53 [i_13] = var_1;
                    var_30 = (max(var_30, var_16));
                    arr_54 [i_13] = var_4;
                }
            }
        }
        arr_55 [i_12] [i_12] = 1;
        arr_56 [0] [i_12] = ((((((((arr_4 [i_12] [i_12]) ? var_19 : 1))) ? ((var_1 ? (arr_45 [i_12]) : (arr_16 [i_12] [i_12] [i_12] [i_12]))) : (arr_16 [i_12] [i_12] [i_12] [i_12]))) <= (((((!(arr_52 [i_12] [i_12] [i_12]))) ? (1 && 1) : (max((arr_21 [i_12]), (arr_21 [i_12]))))))));
    }
    var_31 = (min((!var_4), var_0));
    var_32 -= var_17;
    var_33 = (min(var_33, 6522502629838372452));
    var_34 = 6522502629838372460;
    #pragma endscop
}
