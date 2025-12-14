/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 = ((!(((((min(var_6, var_15)))) <= ((var_13 ? var_14 : var_8))))));
        var_17 = ((-((var_1 ? var_13 : var_7))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    var_18 = ((var_12 ? (max((((var_5 ? var_4 : var_0))), ((25916 ? var_1 : var_7)))) : 8491890251833122996));
                    var_19 = ((min((86 || 86), (-70 <= -48))));
                    arr_14 [i_2] [5] = (min((((65535 ^ ((min(var_8, var_10)))))), -7397678279471539912));
                    arr_15 [1] [5] [i_2] [i_3 + 1] = max(var_9, (((((max(var_7, var_12))) || ((max(var_14, var_14)))))));
                }
            }
        }
        arr_16 [i_1] = var_7;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_20 [i_4] = var_12;

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                var_20 = (max(var_20, ((((min((min(var_0, 4062348485)), ((max(-70, var_10)))))) ? ((-(max(var_14, var_8)))) : var_13))));
                arr_27 [i_6] [i_6] [i_6] = (min((min((min(var_0, var_6)), -var_3)), -var_10));
                var_21 = (((~var_10) || var_14));
            }
            var_22 = (min(((var_12 ? var_3 : var_12)), (~-67)));

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_23 = (((((((max(-54, -79))) ^ -79))) < ((var_5 ? var_13 : 10360230911915373367))));
                var_24 |= ((((max((max(var_0, 0)), (((var_13 ? var_5 : var_6)))))) ? (min(var_14, (var_13 <= var_8))) : (((((max(var_7, var_5))) ? (((min(var_9, var_9)))) : (min(var_11, var_2)))))));

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_32 [i_7] = ((((max(-var_15, ((max(var_15, var_9)))))) || (((max(-25931, 9223372036854775807))))));
                    arr_33 [i_7] [i_4] = (max(((((min(47, 9223372036854775807))) ? (max(4269734071, -70)) : var_8)), (((var_13 ? (var_0 <= var_4) : 65517)))));
                    var_25 = (max(0, (max(var_0, ((var_0 ? var_12 : var_11))))));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_26 = var_4;
                    var_27 = (min(var_27, var_6));
                }
            }
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                var_28 = (max(((min(var_12, var_6))), (min(((min(var_8, var_10))), (max(40149, var_4))))));
                var_29 += (max(((max((min(1023, 65533)), var_11))), (max(var_11, 18446744073709551604))));
                arr_38 [i_10] [i_5] [i_5] [i_10] = (max(-var_10, (max(var_2, 40172))));
            }
            arr_39 [i_4] [i_5] = ((((max((var_13 <= var_11), (max(var_3, var_10))))) <= ((((min(-1264231593, 0))) ? ((min(40181, var_8))) : ((63 ? var_9 : var_13))))));
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            arr_43 [i_11] [i_11] = (max(((max(var_7, (var_15 || 1)))), ((var_5 ? var_0 : -var_6))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_30 = ((-0 ? (((((min(var_14, 0))) || var_12))) : ((max(var_13, (var_5 <= var_2))))));
                            arr_53 [i_4] [i_14] [i_12] &= var_14;
                        }
                    }
                }
            }
            var_31 += (((6284848369969526168 ? 87 : (-12658 <= var_8))));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 20;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_62 [i_4] [i_4] [i_4] [i_16] [i_4] |= var_7;
                        var_32 = ((((var_1 ? var_4 : var_13)) <= -32317));
                    }
                }
            }
            var_33 = (-7 || var_3);
            var_34 = (((((-2272897214405198093 ? -34 : 7))) ? (((-9223372036854775807 - 1) ? var_11 : var_4)) : var_7));
        }
    }
    var_35 = (min(var_6, (((((var_13 ? var_7 : var_12))) ? (((13887 ? var_8 : var_2))) : ((1048575 ? var_4 : var_1))))));
    var_36 = ((var_15 < ((((((123 ? var_7 : var_15))) || (!var_3))))));
    #pragma endscop
}
