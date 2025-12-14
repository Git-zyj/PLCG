/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(var_13, (~-4138622550805543201))), var_13));
    var_18 = (max(var_13, (((((var_0 >> (3020510425 - 3020510401))) % var_7)))));
    var_19 = (max((!var_2), var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                var_20 = (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 3]) ? ((-4138622550805543201 ? 4138622550805543200 : 4138622550805543201)) : var_9));
                arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 2] = var_11;
                var_21 = 4138622550805543220;
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_22 *= (var_14 <= var_8);

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_23 = ((~((var_3 ? (arr_9 [i_1] [i_1]) : 127))));
                    var_24 = ((arr_12 [i_4] [5] [5] [i_1] [5]) >= (arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]));
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_1] = (!var_14);
                            var_25 = (((var_11 ? var_7 : var_3)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {
                        var_26 = (((49662 * 0) * ((var_15 ? 18446744073709551599 : var_11))));

                        for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_27 = (((((6021562119832154537 ? (arr_25 [i_0] [i_1] [i_8] [i_8] [12]) : (arr_35 [7] [i_1] [1] [i_8] [i_9 - 1] [7])))) ? (arr_6 [i_1] [i_8] [i_9 - 3]) : 21));
                            var_28 = (98 ? 18446744073709551609 : 4138622550805543200);
                            arr_36 [i_0] [i_0] = 102;
                            var_29 = (-8689855587257356131 / 15);
                            arr_37 [i_10 + 2] [i_0] [i_8] [i_1] [i_0] [i_0] = var_15;
                        }
                        for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_30 = (((33390 / var_16) >> var_7));
                            var_31 = (((arr_9 [i_11 - 1] [i_9 - 1]) < -4138622550805543201));
                            var_32 -= 102;
                            var_33 = (~(arr_4 [i_0]));
                            var_34 = (~8093765864624600466);
                        }
                        arr_42 [i_0] [i_8] [i_0] = 1946799726;

                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            var_35 = ((!(arr_14 [i_0 - 1] [i_1] [i_8] [8])));
                            arr_46 [i_0] [i_12 - 1] [i_12] [i_12] [i_12 + 3] = 1;
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_36 = (~var_13);
            var_37 = var_7;
            var_38 = (((arr_27 [i_0 + 2] [i_13] [i_13]) / -7112780096962018909));
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_39 = ((!(arr_24 [i_0 + 1] [i_0] [i_15 - 2] [i_15] [11])));
                            var_40 = -4138622550805543202;
                            var_41 = (((arr_38 [i_0] [0] [i_0] [i_15] [i_16]) < (((var_8 ? var_0 : var_15)))));
                            arr_57 [i_0] [i_13] [i_13] [i_14] [4] [i_0] = (var_6 || 102);
                            var_42 = ((102 ? -17100 : 8203435281341305322));
                        }
                    }
                }
            }
        }
        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                var_43 = -var_5;
                var_44 = var_13;
            }
            var_45 = (min(var_45, 3177138404));
        }
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 0;i_20 += 1)
            {
                var_46 = (min(var_46, ((var_1 / (arr_47 [1])))));
                var_47 ^= (((arr_7 [i_20 + 1] [i_20 + 1] [i_20 + 1]) * 0));
            }
            var_48 = ((!(arr_21 [i_0 - 1] [i_19 + 2] [i_19] [i_19])));
            var_49 = ((var_4 ? (arr_34 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [5] [i_19 + 1] [i_19 - 1]) : var_11));
        }
        var_50 = var_16;
    }
    var_51 = (((((var_8 / var_15) >= ((var_6 ? var_11 : var_10)))) ? var_11 : 12799273908662722291));
    #pragma endscop
}
