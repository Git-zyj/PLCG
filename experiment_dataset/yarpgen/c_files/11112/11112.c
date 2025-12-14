/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, var_2));
                    arr_9 [i_0] [i_1] [13] [7] = ((63 ? 82 : 12659213486434357962));
                    arr_10 [11] [0] = (min(((var_9 ? ((31 ? 65520 : 9223372036854775807)) : 40689)), (49711 && 8227725652975922915)));
                    var_11 = (min(var_11, 49711));
                    var_12 ^= 0;
                }
            }
        }
    }
    var_13 = 4929;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                var_14 = (min(var_14, (((-(!var_6))))));
                var_15 = (min(var_15, (arr_0 [i_3])));
                var_16 = (((3 ? (((arr_2 [i_4 - 2]) ? (arr_13 [i_4]) : (arr_14 [i_3] [6] [i_4]))) : var_2)));
            }
        }
    }
    var_17 *= (min((((~4294967295) ? var_1 : (((15814 ? var_6 : var_3))))), ((((var_5 ? var_6 : var_5))))));

    /* vectorizable */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5 + 2] = var_1;
        var_18 ^= (((((arr_15 [i_5]) * (arr_2 [i_5]))) < (((var_7 ? var_4 : (arr_12 [i_5] [i_5]))))));
        arr_19 [6] [i_5 + 3] &= (((~var_8) >= ((var_7 ? var_4 : -2560960372362303357))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_19 = 114;
        arr_24 [i_6] = (max(((var_2 ? (arr_7 [1] [i_6] [i_6] [i_6]) : var_4)), ((((arr_1 [i_6] [i_6]) + ((~(arr_2 [14]))))))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_28 [i_7] = (((((arr_23 [i_7]) >= -653608576))) << (((max((((var_0 ? 31 : var_3))), ((var_5 ? 49726 : 6604531772268431103)))) - 49722)));
        var_20 = max((arr_2 [i_7]), ((4294967295 ? (15 | var_0) : ((((arr_21 [i_7]) << (65504 - 65488)))))));
        var_21 += (max((((arr_25 [8]) + -5724450571653880091)), var_7));
        var_22 ^= (min((arr_25 [6]), (arr_7 [i_7] [13] [8] [i_7])));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_23 |= (((max((max(var_1, 8980184566441135627)), (var_8 % 125829120))) != (max((max(-73, -6604531772268431093)), var_9))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_24 += (min(((((!(arr_29 [2]))) ? ((-12 ? var_9 : (arr_34 [i_11] [i_9] [i_11]))) : (127 * 22322))), (-83 | var_4)));
                            arr_41 [i_12] [i_9] [i_9] [4] = var_4;
                            var_25 = -113;
                            var_26 = (max((-var_5 | -4), (((var_9 ? 2047 : (arr_35 [i_9] [i_9] [i_9]))))));
                        }
                        arr_42 [i_9] [i_8] [i_8] [10] [i_10] [6] = ((var_3 ? -7840478906043198402 : ((min((!var_7), (arr_38 [i_8] [10] [9] [i_9] [i_10] [i_10] [i_11]))))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
        {
            var_27 = (min(var_27, ((((((127 * ((59 ? var_4 : -4))))) ? ((((var_5 || (arr_32 [i_8]))))) : (((arr_30 [i_13]) << (((arr_31 [i_8]) + 150)))))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_50 [i_8] [i_13] [i_14] [i_15] [i_8] = (max((((!((min(67, 4)))))), ((+(((arr_39 [2] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) | var_2))))));
                        var_28 += ((281474976710655 ? var_3 : ((-8980184566441135636 ? ((75 ? var_1 : 2198841089)) : var_7))));
                    }
                }
            }

            for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
            {
                var_29 = (max(-46, ((((arr_37 [i_8] [i_13] [i_8] [i_13]) && 100)))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        {
                            arr_59 [i_13] = max((((208882032 ? ((75 ? -110 : 124)) : 127))), (min(18446462598732840978, 4294967295)));
                            var_30 = ((!(((65506 ? ((max(22769, var_4))) : -68)))));
                        }
                    }
                }
                var_31 = ((~((max((arr_49 [i_16]), -65)))));
                var_32 = (min(var_32, 1727328055));
                var_33 ^= 10817293470998651252;
            }
            for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
            {
                arr_62 [i_13] [i_19] = 15;
                var_34 ^= ((65502 ? ((max(8, (var_4 | 71)))) : var_9));
                arr_63 [3] [i_13] = ((!(((-((max(94, 16))))))));
            }
            var_35 = (max((arr_53 [12] [11] [14] [i_13] [14]), var_4));
        }
        arr_64 [i_8] = 0;
    }
    #pragma endscop
}
