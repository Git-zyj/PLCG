/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = 0;
        var_16 = (!39864);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (11 ? (arr_4 [i_1] [i_0]) : 1);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 = (1 ? 7 : 1);
                var_19 = (var_4 && 37102);
                var_20 = (((arr_7 [i_0 + 1] [i_0 + 1] [19] [i_2]) ? (((arr_10 [i_0] [i_1] [i_0]) | 0)) : 0));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = 1;
            var_22 ^= (min(((min(1, 0))), (arr_10 [i_0 + 1] [i_0 + 1] [i_3])));
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_23 = ((-((max((min(1, 0)), (min(2047, 1)))))));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_24 = (((1 % 1) + 0));
                    var_25 = ((!((min(1, 1281206767)))));
                }
                var_26 += ((~(arr_14 [i_0 + 1] [i_4] [i_0 + 1])));
                var_27 = (max(((min(var_4, var_1))), (min(37119, 1))));
            }
            var_28 = (!var_4);
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_29 = ((!1) ? 0 : ((max((arr_24 [i_0] [i_0 + 1] [i_0]), 1))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_30 &= ((-(~var_2)));
                var_31 = (min((!1), ((min(0, 65530)))));
                var_32 = ((!(((arr_2 [i_0 + 1] [i_0 + 1]) >= (arr_2 [i_0 + 1] [i_0 + 1])))));
            }
            var_33 = (!65526);
            var_34 *= var_5;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_35 = ((((1 < (arr_29 [i_9] [i_9])))));
        var_36 = -52820;
        var_37 -= 2135029580;
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_38 = (min(var_38, (((11 ? 1 : (!1))))));
        var_39 = max(var_2, -var_4);
        var_40 = (max(var_40, ((((max(18331, var_13)))))));
    }

    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        var_41 = (((((max(1, 1)))) ? (((65521 ? 28416 : 0))) : 1));
        var_42 = (max(((((arr_4 [1] [1]) ? 65512 : (arr_36 [i_11] [1])))), ((((!1) >= ((var_2 ? var_8 : 28076)))))));
        var_43 = (((arr_29 [i_11 - 1] [i_11 - 1]) ? (arr_9 [i_11 - 1] [6] [i_11]) : 5580));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_44 = (max((((!var_9) & -1)), ((+(((arr_43 [i_11] [3] [i_13] [i_14]) ? (arr_8 [i_13] [i_14] [i_11 - 1]) : 1))))));
                        var_45 = (!65523);
                        var_46 = ((-((((1 ? 1 : 1))))));
                        var_47 = (arr_11 [i_11] [i_14]);
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_48 |= ((-(((!(arr_25 [i_15]))))));

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_49 = (((var_10 ? 65535 : (min(1, 1103716217)))));
                        var_50 = ((((((arr_7 [i_15] [i_16] [i_17] [i_18]) / 28416))) ? 1 : ((((arr_12 [i_15] [i_15]) ? 1 : var_4)))));
                    }
                }
            }
            var_51 = (max(var_51, ((max(65517, 1048575)))));
        }
        var_52 = 1;
        var_53 = (((max(0, (max(956531036, 16908)))) % 1));
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        var_54 ^= var_9;
        var_55 = (((((-124501017 ? ((min(1, 65528))) : 1))) && ((((((57713 ? (arr_38 [1]) : (arr_13 [i_19])))) ? ((max(13547, var_12))) : ((var_10 ? -569533940 : 8)))))));
        var_56 = (((!1) ? (((1 | 8) ? ((1 ? 124500999 : (arr_45 [i_19]))) : (arr_47 [i_19] [i_19] [i_19]))) : 1));
    }
    var_57 = ((63205 ? var_1 : (((((1 ? var_14 : 1))) ? 1 : 0))));
    #pragma endscop
}
