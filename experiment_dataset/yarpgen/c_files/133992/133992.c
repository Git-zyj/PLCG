/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 *= (((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 255)) * (arr_0 [i_0]))) * (arr_1 [i_0])));
        var_19 = (min(var_19, ((~(((!(arr_1 [i_0]))))))));
        var_20 = ((((-(arr_1 [i_0]))) > (max(((-(arr_1 [i_0]))), ((~(arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_21 &= ((!(((arr_2 [i_1 + 2]) > 0))));
                arr_8 [i_2] [i_1] = (min(((!(!0))), ((((max(0, var_16))) && (arr_5 [i_1 + 2])))));
            }
        }
    }

    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_22 += (((((-7235 ? (arr_9 [i_3 - 2] [i_3 - 1]) : (arr_10 [4])))) ? (((250 ? 1 : 31720))) : (((arr_9 [i_3 + 1] [i_3 + 1]) ? var_10 : 0))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_13 [i_3] [i_4] = (((((((44713 * (arr_11 [i_3]))) * (arr_11 [i_3])))) ? 74 : var_15));
            var_23 &= ((~(((~8) ? (((arr_11 [i_4]) * 2)) : ((var_5 + (arr_12 [i_4] [i_4])))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_24 = ((+(((((arr_9 [i_3 - 1] [i_3]) + 2147483647)) << (58 - 58)))));
            var_25 = arr_16 [i_3] [i_3 - 1] [i_3];
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_26 = ((~(((!((max((arr_12 [i_3] [i_3]), var_7))))))));
            var_27 -= (min(((((((247 ? 1 : 8))) ? ((0 ? 20798 : 20820)) : ((0 + (arr_9 [i_3] [i_3])))))), (arr_16 [20] [i_6] [i_6])));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_28 = (max(var_28, (arr_22 [i_7] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_27 [i_3] [i_7] [i_7] = ((var_10 ? var_11 : (arr_20 [i_9] [i_3 - 1])));
                        arr_28 [i_3] [i_9] = ((~((~(arr_19 [i_3])))));
                        var_29 = (arr_9 [i_3] [i_9]);
                        var_30 = (max(-8152499174884526545, 13626564116149330175));
                        arr_29 [i_3] [i_7] [i_8] [i_3] = (arr_16 [i_3] [i_8] [i_3]);
                    }
                }
            }
            var_31 = ((3427124592 ? 7 : 44738));
            var_32 = (~(max(3384328525709231745, (arr_9 [i_7] [i_3 + 1]))));
        }
        var_33 = (((arr_25 [i_3] [i_3]) ? (arr_21 [i_3] [i_3]) : (59 ^ -28118)));
        arr_30 [i_3] = 2147352576;
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_34 *= 2048;
        var_35 = var_7;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_36 *= (63 || 20823);
        var_37 = (max(var_37, (arr_22 [1] [i_11])));
    }
    var_38 = (!-var_4);
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    arr_41 [i_13] = 18446744073709551615;
                    var_39 += (arr_35 [i_13]);
                }
            }
        }
    }
    #pragma endscop
}
