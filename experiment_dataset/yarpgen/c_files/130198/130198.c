/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_3 ? var_9 : var_7))), (((((var_3 ? 491263887 : var_5))) ? var_1 : (min(var_9, 10302275572995291421))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = 31;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 &= ((~(arr_5 [8] [i_1 + 1] [i_1] [i_1 + 2])));
                        var_17 = ((~(min(((~(arr_4 [i_1] [i_1] [i_3]))), (var_1 || -26238)))));
                        var_18 = (arr_8 [i_0] [i_3 + 1] [i_1 + 2] [i_2]);
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_19 *= ((((((((var_11 ? var_5 : 38))) < (max((arr_13 [i_4]), (arr_14 [i_4])))))) % ((((16036834101825675166 >= 16036834101825675166) < ((1866945208 ? var_11 : var_11)))))));
        arr_15 [i_4 + 1] = (((((1086 ? -121 : 1))) ? ((153 + (arr_13 [i_4 - 4]))) : (((~(arr_14 [i_4 - 2]))))));
        var_20 = (((min(1975139503, ((max(2938, 1))))) >> (((((1 ? 7073355525261795976 : 32210))) ? 1 : ((var_12 ? 4849880306194140157 : 10959932654135265299))))));
        arr_16 [19] [i_4 + 1] = ((+((var_13 ? (arr_13 [i_4 - 4]) : var_5))));
    }
    for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_21 = var_6;
        var_22 = (((((31361924 ? 62589 : 2327194365))) ? ((var_11 | ((4263605368 ? (arr_13 [2]) : var_4)))) : (((((min((arr_17 [2]), -57)))) | (3442672285749433746 | var_6)))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] = (arr_14 [i_5]);
            var_23 = (((((var_10 ? var_6 : var_13))) | (arr_19 [i_5 - 2])));
            var_24 = 17987716527265068317;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_34 [8] [i_7] [i_7] [8] [i_7] = (254127310 >= 1);
                            var_25 = (min(var_25, (~1762500512900257731)));
                            arr_35 [0] [3] [i_8] [i_9] [i_10] [i_5] [i_9] = (40766 != var_8);
                        }
                    }
                }
                var_26 = ((-83 % (arr_13 [i_8])));
            }
            for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
            {
                arr_39 [i_5 - 4] [i_5 - 4] [i_5] = (((((1 ? 0 : var_12))) ? (((arr_17 [i_5 - 4]) + 50)) : (arr_29 [15] [i_5] [i_7] [i_11 - 1] [i_11] [i_11])));

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_27 = (max(var_27, (((-3442672285749433747 ? (arr_13 [i_11 - 1]) : (arr_13 [i_11 + 1]))))));
                    arr_42 [i_5] [i_5] = 34678;
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_28 = (min(var_28, (arr_30 [i_5] [i_5] [i_11] [i_11] [i_11] [i_5])));
                    var_29 = ((-(arr_40 [i_11 + 1] [i_5] [i_5] [i_5 - 2] [i_5])));
                }
                arr_45 [i_5] = (((((10090469318314340844 ? var_8 : (arr_32 [i_5] [i_7] [i_7] [i_7] [i_11] [i_5] [15])))) ? (arr_32 [i_5] [i_5] [i_5] [i_5] [i_7] [i_7] [i_7]) : (arr_24 [i_5 - 3])));
            }
            arr_46 [4] [4] |= (((-26231 ? var_3 : 2428022088)));
            var_30 = (((-3527510853746011179 | 3878656920) ? (5277346695839751674 % 32663) : (3878656920 * 1866945208)));
            arr_47 [i_5] [12] [i_7] = (((((arr_17 [i_5 - 4]) + var_9))) ? -3442672285749433762 : ((((arr_40 [i_5] [i_5] [4] [i_5] [i_7]) ? var_9 : (arr_37 [i_5 - 3] [i_7])))));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
        {
            arr_50 [2] [i_14] [i_14] = (arr_37 [i_5] [i_14]);
            var_31 &= (min((((arr_14 [i_5 + 1]) ? (arr_14 [i_5 - 1]) : (arr_14 [i_5 + 1]))), ((((max(14759725425716630659, (arr_40 [i_5 - 1] [i_14] [i_14] [i_14] [i_5]))) != (((min(var_10, (arr_17 [i_5]))))))))));
        }
        var_32 = var_4;
    }
    /* vectorizable */
    for (int i_15 = 4; i_15 < 21;i_15 += 1) /* same iter space */
    {
        arr_53 [i_15] [i_15] = -111;
        arr_54 [13] [i_15 - 1] = 32486;
    }
    var_33 = var_2;
    var_34 = var_0;
    var_35 = ((var_13 | ((var_3 ? (1048860409304905943 * -3442672285749433747) : var_4))));
    #pragma endscop
}
