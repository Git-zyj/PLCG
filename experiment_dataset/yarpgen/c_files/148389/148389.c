/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 += var_11;
        arr_2 [i_0] = ((39696 ? 0 : 1));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = (1269585799865582482 >= 13054274496849634392);
        arr_5 [i_1] = ((595 ? (25567 == var_3) : var_6));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_16 += 25567;
            var_17 = (((((var_10 ? -18479 : 52))) ? 39969 : var_1));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_19 [i_2] [5] [i_2] [4] [i_6 - 1] [i_2] = var_2;
                            arr_20 [i_7] [i_7] [i_5] [i_4] [i_2] = 0;
                        }
                    }
                }
            }
            var_18 = 28178;
            var_19 = ((1 * (-19225 ^ var_12)));

            for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 4; i_9 < 7;i_9 += 1)
                {
                    arr_27 [9] [i_4] [i_2] [i_4] [i_4] = 0;
                    var_20 += var_1;
                }
                var_21 = var_7;
                var_22 = 55106;
                var_23 = (((((116 ? 7779996884202264759 : 34463))) != ((var_4 ? 116 : 25575))));
                var_24 = (-10 ? (((11575396858214704457 ? 40897 : 34))) : ((var_0 ? -1269585799865582492 : 46)));
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
            {
                arr_31 [i_2 - 1] [i_2] [1] [i_10] = ((140 ? var_2 : ((-123 ? 177 : 57426))));
                arr_32 [i_2] [i_2] [i_2] = (((((1 ? 1709575684588017975 : 34833))) ? 34833 : 129));
                arr_33 [i_2] [i_2] [i_4] [i_2] = (((var_11 ? 1751797128773507457 : var_13)));
                var_25 = var_5;
                arr_34 [i_2] = -13350;
            }
            var_26 = var_4;
        }
        for (int i_11 = 2; i_11 < 7;i_11 += 1)
        {
            var_27 = (min(var_27, 3));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 9;i_13 += 1)
                {
                    {
                        arr_41 [i_2] [i_2 + 1] [i_2] [i_2] = var_5;
                        arr_42 [4] [4] [i_2] [i_13] = (-13350 < 11234);
                        var_28 = 25567;
                        arr_43 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [3] [1] = var_12;

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_47 [i_14] [i_2] [i_13 - 1] [i_12] [i_12] [i_2] [i_2] = (((((127 ? 2040 : 7779996884202264759))) ? (128 != 4971) : var_1));
                            var_29 = var_12;
                            arr_48 [i_13 - 3] [i_11] [i_12] [i_13] [i_14] [i_11] [i_2] = 17010301240089403043;
                        }
                    }
                }
            }
        }
        var_30 = var_2;
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        arr_51 [i_15] = 20885;
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        arr_58 [i_18] [0] [i_15] [i_15] [10] [i_15] = ((116 % ((13350 ? 1436442833620148572 : 1))));
                        arr_59 [i_15] [i_15] [i_16] [i_18] [i_16] = 32767;
                    }
                }
            }
        }
    }
    var_31 = (-32767 - 1);
    var_32 = (var_12 / var_2);
    #pragma endscop
}
