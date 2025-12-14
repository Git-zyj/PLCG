/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min(((((arr_0 [i_0 - 1]) ? var_7 : (arr_1 [i_0 - 1] [9])))), ((((min(var_6, var_7))) ? 61601 : (((arr_1 [i_0] [i_0 + 1]) + 3056047352))))));
        var_10 = 1238919973;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] = (max((arr_0 [i_1]), (arr_5 [i_0 + 1] [i_0 + 1])));
            arr_8 [i_0] [i_1] &= ((((max((max((arr_4 [i_1]), 3056047338)), -4018199512))) && (arr_1 [i_0] [8])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_11 = (arr_4 [i_2]);
                var_12 = (((arr_0 [i_0 - 1]) ? var_0 : (((arr_6 [i_0 + 1] [i_1] [i_2]) ? var_8 : 3816045819))));
                var_13 ^= 10847;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_1] [i_0] [i_3] = (((((0 & 22396) && ((min(105, 54701))))) ? 3125877138322747062 : (min((((var_7 && (arr_10 [i_1])))), (arr_12 [i_3] [i_3])))));
                arr_14 [i_0] [i_1] [i_3] = (max(2359184352, (((var_2 ? (arr_10 [i_0 - 1]) : (arr_10 [i_0 + 1]))))));
            }
            var_14 = var_3;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] = (min(1238919943, (arr_17 [i_0 + 1])));
            var_15 -= (((((28 ? -11680 : (arr_3 [i_0] [i_4] [i_4])))) ? (arr_3 [i_4] [10] [i_0 + 1]) : (((arr_3 [i_0 - 1] [i_4] [i_0]) & (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            arr_19 [i_4] = ((((max((max((arr_9 [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_4]))), var_1))) && ((max((max(54684, 21811)), ((((arr_15 [i_4] [i_0 + 1] [i_0]) && 10833))))))));
            var_16 = 10849;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_17 = (min(((54702 ? 135 : 10847)), var_4));
            arr_23 [1] [i_0] = ((-(max((max(-7692647018546228720, (arr_10 [8]))), (arr_15 [6] [4] [6])))));
        }
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            var_18 = min(0, (((arr_16 [i_0 + 1]) >> (((arr_16 [i_0 - 1]) - 46067)))));
            arr_27 [i_0] [i_6] = 10834;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_19 += ((((arr_12 [i_7] [i_7]) ? var_2 : var_9)));
                var_20 = 6603;
            }
            arr_31 [i_6] [i_0] [i_6] = (~0);
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_21 -= (276767784 && 48);
                        var_22 = (((arr_5 [i_8] [i_10]) ? (min(60270, var_7)) : (arr_5 [i_9] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] [i_11] = ((-63 ? (((3056047352 ? (arr_35 [i_11] [i_11 + 1] [i_11] [i_11 + 1]) : (((min(246, 63180))))))) : 6592));
        arr_44 [i_11] [i_11] = (max((min((((140 ? 5651 : (arr_15 [i_11] [i_11] [i_11])))), (arr_35 [i_11] [i_11] [i_11] [i_11]))), (((((max(-26, 4130499012))) && -644)))));
        var_23 = (max(var_23, (arr_4 [i_11 - 1])));
        var_24 *= ((227 ? (arr_9 [i_11 - 1] [i_11 - 1] [i_11 + 1]) : (arr_9 [i_11 - 1] [i_11 - 1] [i_11 + 1])));
    }
    var_25 &= 27;
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            {
                arr_50 [i_12] = ((arr_48 [i_12] [i_13]) + (var_0 & var_5));
                var_26 = (((~var_6) & (114 && -8)));
            }
        }
    }
    #pragma endscop
}
