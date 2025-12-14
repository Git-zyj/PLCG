/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((~(((arr_0 [i_0]) ? 3133808436 : 3133808415))));
        var_19 = (max(var_19, (((-(arr_2 [i_0]))))));
        var_20 = (~-1730971793172007426);
        arr_4 [6] &= ((~(arr_1 [i_0])));
        var_21 -= (((~747657191) ? 60043 : (5489 > 4294705152)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 = ((~((74 ? (arr_7 [i_1]) : (((arr_1 [9]) * 60011))))));
            var_23 &= ((+(((24513 <= -24513) ? (arr_11 [i_2]) : (min(114, 2268510207))))));
            arr_12 [i_1] [i_2] = ((!((((min((arr_8 [i_1]), (arr_7 [i_2])))) && ((min(129296122, (arr_6 [i_1] [i_1]))))))));
        }
        for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_3 - 1] = (((((-((min((arr_5 [i_3]), 60043)))))) ? ((min((((16777088 ? (arr_7 [i_1]) : (arr_14 [i_1] [i_1] [i_3])))), (min(2064228949669616648, (arr_15 [i_3])))))) : (min((arr_1 [i_3 + 2]), (((~(arr_2 [i_3]))))))));
            arr_17 [i_1] [i_1] = 142;
            var_24 *= (((~((-24513 ? (arr_11 [10]) : (arr_13 [i_1] [i_1] [i_1]))))));
            var_25 = (min(var_25, ((min((min(-52, 112)), (((!((min(3133808436, (arr_8 [i_1]))))))))))));

            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_20 [i_1] [i_1] [i_4] = (min((((((arr_10 [i_3] [i_1]) ? (arr_5 [i_3]) : (arr_9 [i_1] [i_1]))) % 141)), (((!(((0 ^ (arr_14 [i_1] [i_1] [i_1])))))))));
                arr_21 [i_1] [0] [i_3] [i_4 - 3] &= 142;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_26 = (((arr_19 [i_3 - 1] [i_3 - 2] [i_3 + 2]) & (arr_19 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                var_27 = (((arr_18 [i_3 - 2] [i_3 + 2] [i_3 + 1]) ? (arr_18 [i_3 - 2] [i_3 + 2] [i_3 + 1]) : 63));
            }
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
        {
            arr_27 [i_1] [i_6] = (747657191 | 3547310114);
            arr_28 [i_1] [i_1] [i_1] = (+-2026457077);
        }
        var_28 = (min(var_28, ((max(((min(((~(arr_11 [1]))), (arr_7 [i_1])))), (((arr_18 [i_1] [i_1] [i_1]) ? (arr_25 [i_1]) : (~-24500))))))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_29 = ((((((arr_5 [i_7]) * (max(1161158859, (arr_23 [i_7] [i_7])))))) ? (arr_10 [i_7] [i_7]) : (((max(111, (arr_14 [i_7] [i_7] [i_7])))))));
        var_30 *= (((~16709811941470175777) ? (min(15806275429520036729, 2640468644189514880)) : ((max((arr_25 [i_7]), ((-(arr_0 [i_7]))))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_31 = (min(var_31, ((max(((~(arr_35 [i_8])), (min((arr_35 [i_8]), (arr_33 [i_8])))))))));
                arr_38 [i_9] = (((((~(arr_36 [i_8])))) ? (((~((~(arr_36 [i_9])))))) : (max(18446744073709551605, 18446744073709551610))));
                arr_39 [i_8] [i_9] = (min((((((min((arr_34 [i_8]), (arr_35 [i_8])))) != (((arr_35 [i_8]) ? 4292244563 : 8699811528323222096))))), 18446744073709551615));
            }
        }
    }
    #pragma endscop
}
