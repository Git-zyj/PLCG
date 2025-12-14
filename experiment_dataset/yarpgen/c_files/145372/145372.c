/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = 1;
    var_19 |= 65535;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((var_2 ? var_13 : 12996)));
        var_21 = (127 ? var_13 : 12986);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (52539 ? 1 : 4519);
            var_22 = var_7;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_23 = 1;
            var_24 = 32914;
            var_25 = (((!62137) ? ((-(arr_0 [18] [i_0]))) : -87));
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = ((max(65529, 85)));
        var_26 |= ((var_16 ? ((42083 ? var_5 : (arr_7 [i_3] [i_3] [i_3]))) : 65535));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_4] = (!512);

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [i_3] [i_4] [i_5] = (((33546240 ? 345 : 466894811)));
                var_27 = ((((min((min((arr_6 [i_3]), -125)), var_0))) ? (((((-1 ? 4197818435 : (arr_16 [i_3] [i_3] [i_3] [i_3])))) ? (arr_4 [i_4]) : (arr_16 [i_3] [i_3] [i_3] [i_3]))) : (1 + 161)));
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_28 = -var_15;
                var_29 = ((((65534 ? (~-135995682888766260) : (-466894795 || 466894795)))) ? var_10 : ((((min(-8545569166273567778, -8545569166273567778))) ? 2519173193 : var_1)));
                var_30 = (((-1140831299 ? var_16 : 17052079986045720765)));
                var_31 *= 0;
                var_32 = var_7;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_33 = var_14;
                arr_23 [i_3] [i_4] [i_4] [i_3] = (((max((arr_17 [i_7] [i_4] [i_4] [i_3]), (arr_0 [i_3] [i_3]))) >= ((((arr_17 [i_3] [i_4] [i_4] [i_7]) ? (arr_17 [i_3] [i_3] [i_4] [i_4]) : 65535)))));
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_34 = (min(var_34, 1073741824));
            var_35 |= -1178040424;
            arr_27 [i_8] [i_8] = (!60);
        }
        arr_28 [i_3] = ((+(min((arr_10 [i_3] [i_3]), var_13))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_36 = (min(-4197818441, ((1439623791 ? -20811 : ((min(65535, 1)))))));
                                var_37 = -var_1;
                            }
                        }
                    }
                    arr_38 [i_3] [i_9] [4] = var_7;
                }
            }
        }
    }
    var_38 &= ((((min((min(6958, 1)), -76))) <= 1));
    #pragma endscop
}
