/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((48775 ? ((32497 ? 1 : 1)) : ((1 ? 5323 : 9079))));
        var_13 = (-6986 < 1);
        var_14 = ((24387 ? 47476 : 26948));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((47471 ? 47476 : 38587));
                        var_15 += 7;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (~1);

        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_16 = ((8562716692975281977 - 45) ? ((1 ? (min(10057, -34996485)) : 63783)) : (((-1509004283 < 48775) ? ((min(1, 1))) : ((max(38599, 1))))));
            var_17 = (~1);
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 = ((~(~-15861)));
            arr_26 [i_4] [i_4] [i_6] = ((((((-127 - 1) * 1))) ? ((-1188314750 ? 23521 : 28207)) : (-27171 / 1)));
            arr_27 [i_6] = (min((~63354), -1));

            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_19 = ((((min((65535 * 0), ((min(1, 1)))))) == -8763739509181507076));
                arr_30 [i_6] [i_6] = -7976;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_37 [i_4] [i_4] [i_4] [i_4] [i_6] [i_4] [i_4] = ((((max(0, -49))) < (~-743404020)));
                            var_20 = (min(((!((min(-8562716692975281977, 17137))))), (12613637168632158807 < -28303)));
                            arr_38 [i_6] [i_6] = ((28302 ? 3174497821340721319 : 42452));
                        }
                    }
                }
                arr_39 [i_6] [i_6] [i_7] = (max(8562716692975281975, (-1 / 469762048)));
            }
        }
        var_21 = ((~(-1 + 15360)));
        arr_40 [13] = min(((min(18059, -28303))), (max((26867 >= -33), (max(702544438, -702544438)))));
        var_22 = ((((min((~4619), 31934))) ? (~20812) : 32766));
    }

    /* vectorizable */
    for (int i_10 = 3; i_10 < 11;i_10 += 1)
    {
        var_23 |= (1 | 52178);
        var_24 = (max(var_24, 32756));

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_47 [i_10] = (-1893291155 >= 2047);
            var_25 = ((1107136603 ? 54803 : ((5598 ? -1260367243 : (-32767 - 1)))));
            arr_48 [i_10] [i_11] = 1965684131;
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_26 = (!13606);
            var_27 = 127;
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_54 [i_10] [i_13] = ((1 ? -2 : ((873426641 ? 4856757458885383850 : 32765))));
            arr_55 [i_10] = -28290;
            var_28 = (-24643 < 19384);
            var_29 = (-127 - 1);
            var_30 = 16884701240740817967;
        }
    }
    #pragma endscop
}
