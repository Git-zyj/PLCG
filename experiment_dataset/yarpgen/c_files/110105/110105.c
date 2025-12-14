/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4503599593816064;
    var_18 = ((((((4503599593816091 ? 4503599593816058 : 4294967295)))) ? var_0 : (192 < var_8)));
    var_19 = (((!7168) ? (((7 > var_13) ? (((var_15 >> (var_7 - 85)))) : 18446744073642442752)) : var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (min(39, 0));
        var_20 = (7168 ? (min((min(-4503599593816065, 18)), 28)) : (((((arr_0 [i_0]) >= 106)))));
        var_21 |= ((~(min((arr_1 [4] [i_0]), (arr_0 [8])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    var_22 = ((-1 ? (arr_9 [i_2] [i_2 + 1] [i_2]) : ((0 ? 18446744073709551608 : 2635696181621469009))));
                    var_23 = 2147467264;
                    var_24 = 8476591586922682405;
                }
            }
        }
        var_25 = (2147467264 ? (arr_6 [5] [3] [i_1]) : -1);
        arr_11 [i_1] = 3833383095431438688;
        arr_12 [i_1] = 28672;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_26 = 2147500032;
        var_27 += var_2;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            arr_24 [i_5] = 18446744073709551615;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_28 = (max(var_28, 4103288153));

                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, (((arr_16 [i_8]) ? (arr_21 [16]) : ((2147500032 ? 722421102 : 0))))));
                    arr_29 [i_8] [i_5] [i_7] [i_8] = ((65535 ? 128 : 0));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_30 = (!var_7);
                    var_31 = (1 ^ var_9);
                }
                var_32 = var_16;
                var_33 = (!var_1);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_34 = (min(var_34, (((var_4 - (24576 | 1))))));
                arr_34 [i_5] [12] [i_10] [i_10] &= ((~(max(-104, (((arr_14 [i_5]) + var_9))))));
                var_35 = (((arr_33 [i_6] [i_6 + 4]) <= (((arr_33 [8] [i_6 + 1]) << (((arr_33 [i_5] [i_6 + 4]) - 15129673965919893925))))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_36 = ((562949953421311 ? (~var_11) : 63));
                            var_37 |= (min(((var_1 ? 9223372036854775807 : 2199006478336)), 2147483647));
                            var_38 = ((18 ? ((((var_0 ? var_8 : (arr_16 [i_6 - 1]))))) : (((arr_27 [i_10] [i_5]) ? ((((arr_1 [i_11 + 1] [i_12]) >> (((arr_19 [i_10]) + 1329443582))))) : ((123 ? -1 : 2818216244804185359))))));
                        }
                    }
                }
            }
        }
        var_39 = (max(var_39, var_6));
    }
    var_40 = (((var_0 << ((((var_9 ? var_11 : var_10) - 71871611))))));
    #pragma endscop
}
