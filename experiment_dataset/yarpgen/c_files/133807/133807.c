/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 += ((99 ? var_9 : ((82 ? var_11 : ((69 ? var_11 : var_13))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((99 ? ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : 99))) : 8150851697901773261));
                    var_19 &= (((((99 ? -2551615211574002597 : 122))) ? ((156 ? 60113455 : 174)) : 88));
                    arr_6 [13] [i_0] [i_0] [13] = (arr_4 [i_1 + 1]);
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((226 ? (arr_2 [i_0] [i_0]) : 166));
                    var_20 = (min(var_20, ((((arr_1 [i_0]) ? (((arr_2 [i_1] [i_1]) ? -59 : 0)) : (((89 ? 127 : 29))))))));
                }
            }
        }
        arr_8 [i_0] = -123;
        var_21 += 151;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = 89;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_15 [14] [i_4] = 189;
            var_22 = 166;
            arr_16 [i_3] [i_4] [i_4] = 156;
            var_23 = 99;
            var_24 = (min(var_24, (((122 ? 1664916650 : (((99 ? 1 : 1267675102))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 |= ((((((arr_19 [0] [i_5] [i_5]) ? 1 : (arr_5 [12] [i_3] [12])))) ? 0 : 196753422));

            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                arr_22 [i_3] [7] [i_5] [i_3] = 7878405824159102982;
                arr_23 [i_5] = ((-1 ? 2147483644 : 127));
            }
            var_26 += arr_19 [2] [i_5] [2];
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_29 [i_3] [i_5] [i_5] [i_5] [i_5] [i_3] = ((162 ? (((arr_4 [i_3]) ? -1 : (arr_12 [i_5] [i_7] [8]))) : 199));
                        arr_30 [i_5] [i_3] = arr_1 [i_8];
                        arr_31 [i_3] [i_5] = 65535;
                        var_27 = 3764639433;
                    }
                }
            }
            var_28 -= 65535;
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_29 = -7811041817631004548;
                            var_30 -= ((-1267675093 ? ((825297074735822107 ? ((-1 ? 51917 : (arr_9 [i_3] [i_3]))) : (((-24 ? 34 : -1156404959))))) : -24));
                            arr_43 [i_3] [i_3] [i_9] [15] [i_3] = (15 ? ((51938 ? ((-1 ? -6203017240989383038 : 3968708610300542093)) : (arr_14 [i_9]))) : 65535);
                            var_31 = (max(var_31, (arr_40 [i_3] [1])));
                        }
                    }
                }
            }
            arr_44 [i_3] [i_9] = 101;
            var_32 += (arr_35 [i_3] [i_9 - 2]);
        }
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                {
                    var_33 = (min(var_33, ((((arr_46 [i_14] [i_13]) ? 21 : 255)))));
                    arr_53 [i_3] [i_13] [i_14 + 1] = (arr_12 [i_14] [i_14] [i_14]);
                    var_34 = ((((((((13618 ? 3103473507178135501 : 127))) ? (arr_24 [i_3] [i_3] [6]) : (arr_20 [0] [i_13] [i_13])))) ? 26 : (arr_1 [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
