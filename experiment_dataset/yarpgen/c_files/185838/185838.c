/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(0, (((((arr_3 [i_0] [i_0] [13]) || -86)) ? (arr_0 [i_0] [4]) : var_1))));
                arr_4 [i_0] = ((((0 || (arr_0 [i_1] [i_0])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_13 = (arr_7 [i_2]);
        var_14 = (max(var_14, ((min(14094996109804411634, ((((((arr_7 [i_2 + 3]) + 2147483647)) >> (((arr_7 [i_2 + 2]) + 29043))))))))));
    }
    var_15 += var_6;

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_13 [i_3] = (((arr_11 [i_3 + 2] [i_3]) != ((max(8042, 22134)))));
        var_16 = ((((arr_9 [i_3 + 1] [i_3 - 1]) | -var_6)));
        var_17 = ((arr_11 [i_3] [i_3 + 2]) & (((arr_7 [i_3 - 1]) ? 3534123733590378181 : 2098282984)));
        var_18 = ((-14094996109804411633 * (((((arr_6 [i_3 + 2]) < 19080))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_19 = arr_17 [i_5 + 2];
            var_20 = (max(var_20, ((max((((((arr_18 [16]) + 5964417862169229570)) >> (var_0 + 16572))), (((23357 ? ((max(228, 34189))) : var_10))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((arr_19 [18] [i_7] [i_6]) && (((23 ? var_7 : 202))))))));
                        var_22 = (((arr_21 [i_4] [i_7 + 2] [i_8] [i_8 - 1]) ? var_1 : ((18403 ? var_2 : 1))));
                        var_23 = (min(var_23, ((((176 - 14335) ? (arr_25 [i_4] [i_6]) : (var_1 + 25627))))));
                        var_24 = (((arr_25 [i_6] [i_6]) ? (((arr_19 [i_4] [i_6] [i_7 + 1]) ? 12776 : (arr_14 [i_8] [i_8]))) : ((((arr_19 [i_4] [i_4] [i_4]) ? var_0 : 1)))));
                    }
                }
            }
            var_25 = (((-88 <= 66) <= ((62789 * (arr_17 [i_4])))));
            arr_27 [i_4] [10] = ((-(((arr_23 [8] [i_4] [8]) ? var_3 : var_4))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_26 = (min(var_26, ((max((arr_17 [i_4]), (((arr_16 [i_4] [i_9]) ? -var_4 : 18446744073709551606)))))));
            var_27 = (max((39136 << var_9), ((((max(var_1, (arr_19 [i_9] [i_4] [i_4])))) ? (!var_5) : (~62)))));
        }
        for (int i_10 = 4; i_10 < 23;i_10 += 1)
        {
            arr_33 [i_10] = (-(((arr_29 [i_10]) ? 0 : 2961)));
            arr_34 [20] [9] = (((var_4 == (arr_18 [i_10 + 1]))));
        }
        var_28 = ((((((arr_19 [1] [i_4] [i_4]) & (arr_29 [1])))) ? (arr_19 [18] [i_4] [4]) : (arr_19 [i_4] [i_4] [14])));
        var_29 = 1;
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                arr_46 [i_11] [i_12] [i_12] [i_14] [i_15] = (((((arr_14 [i_13 - 1] [i_14 + 2]) ? (((1968853348 ? -4980705873375650750 : (arr_23 [11] [17] [i_12])))) : (arr_20 [i_14]))) * (arr_20 [i_12])));
                                var_30 = ((((min((min(-18942, (arr_7 [i_15]))), 82))) || ((min(((max(1, -15305))), var_11)))));
                                arr_47 [i_12] [i_12] [i_12] [15] [i_15] [9] [i_13] = ((((min((arr_29 [i_12]), var_9))) ? (arr_45 [i_12] [1]) : ((((arr_7 [i_11 - 1]) / (arr_7 [i_13]))))));
                            }
                        }
                    }
                    var_31 = (arr_40 [i_13 + 1] [i_12] [i_11 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
