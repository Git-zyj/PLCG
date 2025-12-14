/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((min((82 ^ var_3), 0)) * -53447));
                    var_14 -= ((((max((arr_4 [i_0] [i_0]), -16384))) > ((min(1, 1)))));
                    var_15 = (max(((-(arr_7 [i_1 - 1] [i_1] [i_2]))), (min((arr_3 [i_1 - 1] [7]), (arr_7 [i_1 + 1] [i_1 + 1] [5])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 += ((max((arr_3 [i_4 - 2] [i_1 - 1]), (arr_8 [i_1 - 1] [i_3 - 2] [i_4 - 1] [i_4 - 2]))) == ((((~(arr_7 [i_0] [i_2] [i_4]))) ^ 92171916)));
                                arr_14 [i_2] [7] [i_4] [i_3] [i_2] = ((((((max(var_11, 9891854479610385555)) >> ((((~(-32767 - 1))) - 32729))))) ? -1 : var_11));
                                var_17 = (+((+(min((arr_1 [i_3]), -726200058)))));
                                arr_15 [i_2] [i_4] [i_2] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_2));

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = ((((arr_3 [i_5] [i_5]) >= 1)) ? ((max(36527, 80))) : ((-((min(1, 12))))));
        var_20 = (min(var_20, 1));
        var_21 = (arr_4 [7] [i_5]);
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_22 = (min(var_22, (((~(min(-1, var_8)))))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [i_7] [10] [i_7] = (((min((~1), (var_0 + 0))) / (max(((-16 ? (arr_17 [i_7] [i_6 - 2]) : -6)), 22812))));
            arr_23 [i_6] [i_6] [i_7] = (arr_19 [i_7]);
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_23 = min(22817, (min((min(var_10, -6)), (!1))));
            var_24 = 997139601;
            var_25 = (1 || -1870026546);
            var_26 = ((~((~(arr_9 [i_6] [i_6] [i_6] [i_6] [i_8])))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            var_27 = (min((((!(arr_9 [i_6] [i_6 + 1] [i_6 - 1] [i_9] [i_9])))), (max((arr_16 [i_6 + 1]), (arr_28 [i_6] [i_9])))));
            var_28 = (min(var_28, ((max((((1 ? -30 : ((18446744073709551615 ? 8871 : (arr_26 [i_9])))))), ((-1680017364 ? var_10 : (max(5197720569621451854, (arr_1 [5]))))))))));
            arr_29 [i_6] [i_6] [i_9] = (!1);
            arr_30 [i_6] [i_9] = (~-22812);
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_29 = min((max(-15878, -1671445780)), ((((max(38, -22795))) ? ((-(arr_24 [i_10] [i_9]))) : -326709477)));
                        var_30 += ((!((max((arr_35 [i_11] [i_6] [i_10] [i_10]), var_9)))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_31 = var_9;
            var_32 = (((!1) ? (min(352220243, ((max((arr_28 [i_6] [i_6]), 28780))))) : ((((max(-537050979, (arr_0 [i_12] [i_6])))) ? (!var_4) : (!9891854479610385577)))));
        }
        arr_39 [i_6] [i_6] = min(1732931959, (min((min(-294485118, -22812)), 1)));
        arr_40 [i_6] [i_6] = ((((-var_5 / (8191 && 677159590))) == ((((9891854479610385556 <= (((max(22853, -3))))))))));
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_33 = (((min((arr_41 [i_13]), 8554889594099166067)) - (((((511 + (arr_45 [i_14] [i_13])))) + 18446744073709551606))));
            var_34 &= (min((~1), (~13916)));
        }
        var_35 = (arr_41 [i_13]);
        var_36 = 27;
    }
    #pragma endscop
}
