/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_11;
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = (((((arr_0 [i_0]) >= ((38820 << (var_9 - 37))))) ? (((!1) ? (arr_0 [4]) : ((max((arr_0 [i_0]), var_14))))) : (max((((arr_1 [i_0]) ? var_16 : 115)), (((var_11 >= (arr_0 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_23 = (arr_3 [i_0] [i_1]);
            arr_4 [i_1] [i_1] [i_1] = (arr_1 [i_1]);
        }
        var_24 ^= ((var_16 ? (max(var_11, 18020049286308282655)) : ((min(((0 ? var_4 : var_17)), (((arr_2 [i_0]) ? 3421582735 : var_19)))))));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        arr_7 [i_2] = (arr_6 [i_2] [i_2]);

        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_25 = (min(var_25, (max(((15291180306843002191 * (-2020902166 / 173))), (((arr_8 [i_2 + 2] [i_3 - 1]) ? (min(-1243900207, 12738958047745147058)) : ((((arr_9 [3] [i_3] [i_2 - 3]) * (arr_9 [i_2] [i_2] [i_2]))))))))));
            arr_10 [i_2] [i_3] |= ((!((max((18446744073709551611 % -23243), (arr_6 [i_3] [i_2]))))));
            var_26 = ((-((((max(82, var_11))) ? ((((arr_9 [i_2] [i_2] [i_3]) >> (-21939 + 21947)))) : ((var_12 ? 134 : 12738958047745147068))))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_27 = ((32 >> (53 - 52)));
            var_28 += (((arr_11 [i_2] [i_2] [i_4 - 1]) / (arr_5 [i_4 - 1] [i_4])));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_29 = (max(var_29, ((((arr_6 [i_2 + 3] [i_4 - 1]) < (arr_13 [i_2 + 2] [i_2 - 1] [i_2] [i_2]))))));
                var_30 = var_2;
                var_31 = (var_5 % var_8);
                var_32 = (~5);
                arr_15 [i_4] = (((arr_5 [i_2] [3]) ? (((arr_6 [i_2] [i_2]) ? var_7 : var_1)) : 91));
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_33 ^= (((arr_17 [i_6 + 1] [i_6 + 1] [i_2 - 3] [i_4 - 1]) != (arr_17 [i_6 + 4] [i_6 + 1] [i_2 - 3] [i_4 - 1])));
                            var_34 = ((((((arr_11 [i_2] [i_4 - 1] [i_6]) << var_19))) ? (arr_5 [i_2 + 2] [i_6 - 1]) : var_19));
                        }
                    }
                }
                var_35 |= (((arr_21 [i_6 - 2] [i_2] [i_2] [i_2 + 2]) < 134));
            }
            for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_36 = ((var_3 ? (arr_21 [9] [i_4] [i_4] [i_2 + 3]) : var_11));
                arr_27 [i_2] [i_2] [i_9 + 4] |= (((arr_12 [i_2] [10]) ? var_18 : var_16));
                var_37 = (min(var_37, ((12738958047745147076 ? -31885 : 18397757764724995241))));
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_38 = (max(var_38, ((((~var_0) ? 31865 : 31884)))));
            var_39 = (min(var_39, ((((var_8 * var_2) > var_16)))));
        }
        var_40 = (((((25546 - 238) != ((4316444215008855068 ? var_3 : var_12)))) ? (max((var_13 && var_7), ((-8 ? var_3 : var_6)))) : (arr_20 [i_2 - 3] [i_2])));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_41 = (max(var_41, ((17183833478710976407 ? 7662124171182135193 : var_0))));
                        var_42 |= var_11;
                    }
                }
            }
        }

        for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_43 = ((var_0 * ((((arr_37 [i_14]) ? var_12 : (arr_37 [i_14]))))));
            var_44 ^= (((arr_25 [i_2] [i_2]) / ((var_1 ? ((((arr_40 [i_2] [i_14]) + (arr_35 [i_14] [i_14] [i_2] [i_14])))) : ((5 ? 113 : 12738958047745147068))))));
        }
        for (int i_15 = 1; i_15 < 13;i_15 += 1) /* same iter space */
        {
            var_45 = ((0 << (15552404724729124822 - 15552404724729124796)));
            arr_45 [i_2 + 1] = var_13;
        }
    }
    #pragma endscop
}
