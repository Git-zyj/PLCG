/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 ^= ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : var_10)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0 - 1] = (((-(((arr_3 [14]) ? var_10 : var_8)))));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_20 = (min(var_20, (~180011659)));
                var_21 += -180011659;
                var_22 = ((max(7882, 180011689)) <= ((~(~var_8))));
            }
            arr_9 [i_1] [2] [i_1] |= (((((var_11 + 2147483647) >> (var_17 + 13)))));
            arr_10 [1] [i_1] [i_1] = (min(((6524 ? var_2 : -1502631991)), (arr_2 [i_0] [i_0 - 2])));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_23 = (((min((((-180011662 ? var_2 : var_5))), ((-180011662 ? 7896 : 8239379076079509919)))) & var_11));
            var_24 = (arr_8 [i_0] [9] [11] [i_3]);
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                var_25 = ((((((64598 ? var_5 : 62555)))) / (arr_18 [i_0 - 1] [12] [i_0] [i_0])));
                var_26 = (((arr_13 [i_5 - 3]) + (min((~57654), ((min(var_10, 57679)))))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_27 = (max(var_27, (((-((var_3 / (min(var_9, var_10)))))))));
                var_28 ^= (((min(var_11, ((((arr_8 [0] [i_0] [i_0] [i_0 - 2]) ? (arr_19 [i_0 + 1] [i_0] [i_0] [8]) : var_5))))) | var_16));

                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_29 = (((max((arr_15 [i_0] [8] [i_6] [i_0]), var_12))));
                    var_30 = 18446744073709551605;
                    arr_25 [i_7] [i_4] = ((var_3 ? var_4 : ((((arr_15 [i_0 - 1] [i_0] [i_0] [i_0]) > var_8)))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_31 = (arr_1 [i_4]);
                    arr_28 [i_8] = (~939524096);
                }
            }
            var_32 = (max(-var_6, (max((57679 ^ 3324031544913813764), (arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
        }
    }
    var_33 = ((max((var_10 | var_16), var_0)));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            {
                var_34 = (max(var_7, var_5));
                var_35 = (max(0, ((939524096 ? 7904 : 57679))));
            }
        }
    }
    var_36 += -1998112244;
    var_37 *= max((((((min(var_0, var_7))) >= var_6))), (var_10 - 6));
    #pragma endscop
}
