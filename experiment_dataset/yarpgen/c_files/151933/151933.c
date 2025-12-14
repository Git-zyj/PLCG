/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = (((((20895 ? var_8 : (arr_2 [i_0] [i_1] [i_0])))) ? ((45115 ? (arr_0 [i_0]) : var_6)) : (-45 < 556123728)));
            arr_5 [i_0] = (-24618 / var_9);
            var_17 = (((14640 ? -1 : -95371441266876627)));
            var_18 = ((-52 ? 1189735495 : (((arr_3 [i_0] [i_1]) ? var_11 : (arr_1 [i_1])))));
            arr_6 [i_0] = (arr_2 [14] [10] [i_0]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_19 += 18446744073709551615;

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 += (((60879 > var_6) - (107170298 && var_6)));
                var_21 = ((23 ? 15 : -6786));
            }
            for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] = ((((((arr_12 [i_0] [i_2]) ? (arr_7 [i_4 + 3] [i_0]) : var_9))) ? (arr_0 [i_0]) : 4294967295));
                    var_22 = ((0 ? (arr_1 [i_4 - 1]) : (arr_1 [i_4 - 1])));
                    var_23 += (((((46 ? 16383 : (arr_9 [i_2] [i_4] [i_5])))) && -1909976214));
                }
                arr_19 [i_0] [i_0] = (arr_12 [i_0] [i_4]);
                var_24 = -8872145905645581640;
                var_25 = (min(var_25, ((-(4294967278 == var_0)))));
                var_26 = ((18446744073709551615 ? ((191 ? 4294967293 : 1)) : 262143));
            }
            for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    var_27 = (arr_16 [13] [i_2] [i_6 - 1]);
                    var_28 = (-9135 & 4294967295);
                    arr_27 [i_0] [i_2] [i_6] [i_2] [i_0] = (((((18446744073709551615 ? var_8 : var_10))) ? (arr_13 [i_0] [i_2]) : -16383));
                }
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        arr_34 [i_0] [i_0 - 1] [i_2] [i_6] [i_2] [i_9 - 2] |= (((((var_3 ? -1 : -1))) ? ((-8504629571696014869 ? (arr_4 [i_0] [i_0]) : 18446744073709551615)) : var_10));
                        arr_35 [i_0] [i_0] [i_6] [i_8 + 4] [i_9] [i_0] = var_4;
                        var_29 = (min(var_29, var_5));
                    }
                    var_30 = -1;
                    var_31 = (arr_17 [i_0] [i_2] [i_6]);
                    var_32 *= (arr_16 [i_2] [i_6 - 1] [i_6]);
                }
                var_33 = ((-15202 ? (arr_3 [i_0] [i_6 - 1]) : (arr_3 [i_0] [i_6 + 3])));
            }
            arr_36 [i_0] [i_0 - 1] [i_2] = (((var_3 ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_2]) : (arr_17 [i_0] [i_0] [4]))));
        }
        var_34 -= (1073741823 ? (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : 18446744073709551615);
    }
    var_35 = (((max((var_8 ^ var_4), ((18446744073709551615 ? var_6 : var_8)))) | ((((((max(-1, -1))) || (((10888210110405394424 ? var_3 : 44886)))))))));
    #pragma endscop
}
