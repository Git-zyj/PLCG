/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = var_15;
            var_20 = (arr_2 [i_0]);
        }
        var_21 -= (arr_3 [i_0] [i_0]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = 44;
            var_22 -= 1;
            var_23 = (max(var_23, (arr_0 [i_2])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_0] [i_3] [i_0] = (arr_7 [i_0]);
            arr_13 [i_3] = ((-(arr_1 [i_0])));
        }
    }
    var_24 = (var_13 * (min((((235 >> (237 - 218)))), ((var_16 ? var_4 : var_5)))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_25 *= (((arr_14 [i_4] [i_4]) * var_9));
        var_26 = (max(var_26, (arr_16 [i_4])));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_27 = ((var_13 >= (((-10202 || (arr_14 [0] [i_5]))))));

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_28 ^= ((-(arr_20 [i_4] [15] [i_6] [i_4])));
                    var_29 = (((arr_16 [i_4]) ^ 225));
                    arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] = var_17;
                }
                var_30 += (arr_15 [i_5]);
                arr_26 [16] [i_5] [10] [i_6] = ((227 ? (arr_18 [i_4] [i_5]) : (arr_24 [i_4] [i_4])));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_31 = (((arr_14 [i_4] [19]) != var_7));
                arr_29 [i_8] = (((arr_14 [i_4] [i_5]) ? 67108863 : var_4));
            }
            var_32 = (max(var_32, (arr_21 [i_5])));
            arr_30 [9] = ((235 / (arr_19 [i_4] [i_5])));
        }
        for (int i_9 = 4; i_9 < 16;i_9 += 1)
        {
            var_33 = (var_1 & var_4);
            arr_34 [9] [i_4] [i_9] = (((arr_23 [i_9] [i_9 + 1] [i_9 + 3] [11] [3] [i_9]) - (arr_23 [i_9 - 2] [i_9 - 4] [i_4] [i_4] [i_4] [i_4])));

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                arr_38 [i_4] [0] [i_10] = ((var_14 ? (~65535) : -118));
                var_34 = (11890467854663664661 / 20);
            }
            for (int i_11 = 4; i_11 < 19;i_11 += 1)
            {
                arr_43 [i_4] [i_9] [10] = ((!(-32767 - 1)));
                var_35 = var_16;
                var_36 = (((arr_37 [i_9 - 4] [i_9 - 2] [i_9 + 2]) ? (arr_37 [i_9 - 3] [i_9 - 2] [i_9 + 1]) : (arr_37 [i_9 - 4] [i_9 + 2] [i_9 - 1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_37 = -263460528;
                            var_38 = (((17104492724298735806 << var_16) ? var_13 : var_0));
                            var_39 = ((var_13 * (arr_35 [i_9 - 2])));
                        }
                    }
                }
            }
            var_40 = (((arr_23 [i_9 - 1] [i_9 - 4] [0] [5] [17] [i_4]) ? (!5295) : (arr_20 [i_9 + 3] [15] [14] [i_9 + 2])));
        }
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_54 [i_14] = ((25541 ? (((((arr_45 [3] [3] [i_14] [i_14]) - var_2)) / (-17 - 384))) : (min((max((arr_35 [i_14]), 992)), 0))));
        var_41 = (((arr_37 [i_14] [i_14] [i_14]) ? ((((arr_37 [i_14] [i_14] [i_14]) ? (arr_15 [i_14]) : (arr_31 [i_14] [i_14])))) : 2778637173871885211));
        var_42 = 114;
        var_43 = (max(var_43, var_7));
    }
    var_44 = (((max(var_10, var_7))));
    var_45 = ((var_1 / var_12) % (((((((min(var_17, -116)))) > var_15)))));
    #pragma endscop
}
