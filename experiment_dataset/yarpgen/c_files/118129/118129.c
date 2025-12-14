/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 += min(((((arr_1 [i_0 + 1] [i_0 + 1]) ? 91 : ((142 ? 9223372036854775807 : 165))))), (arr_1 [i_0 - 1] [1]));
        var_19 += (arr_1 [i_0] [i_0]);
        var_20 = (-2613656571226474448 / -1181293994398544486);
        var_21 = (max(var_21, (((((((arr_0 [i_0]) ? (84 && var_2) : (15 >= -84)))) ? (max((((arr_0 [1]) << 0)), (-9223372036854775807 - 1))) : (((~(35 * var_0)))))))));
        var_22 = var_4;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (!101);
        var_23 = -73;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_7 [20] [20] = (((arr_3 [i_2] [i_2]) != (((34212 ? 46274 : (arr_2 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_24 = -4244769799086610934;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_25 += (((((-121 ? var_7 : (arr_9 [i_2])))) != ((var_2 & (arr_15 [i_2] [i_2] [i_4] [i_5] [i_2] [i_5])))));
                                arr_19 [i_5] [i_5] [i_5] [i_3] [i_6] [i_4] [i_5] = (-8241426989070073739 + var_14);
                                arr_20 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] |= (~75300751);
                            }
                        }
                    }
                    arr_21 [i_2] [10] [i_3] = (arr_15 [i_2] [i_2] [i_3] [i_2] [i_4] [i_4]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = -0;
                            var_26 = (max(var_26, (((9196036541537961724 ? 27013 : 4294967291)))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_27 += ((!(0 <= 6917529027641081856)));
                            arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_33 [i_2] [i_7] [i_8] [i_9] [i_11] [i_9]);
                        }
                        for (int i_12 = 2; i_12 < 20;i_12 += 1)
                        {
                            var_28 *= ((!(arr_17 [i_9 - 2] [i_12 + 1] [i_12] [i_12 - 2] [i_12] [i_12])));
                            var_29 = 2097151;
                            arr_40 [i_2] [2] [i_8] [i_9 + 2] [2] |= ((-((((arr_35 [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_9 [i_12]))))));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            arr_44 [i_13] [i_2] [i_8] [i_7] [i_2] = var_15;
                            arr_45 [i_2] [i_2] [i_8] [i_8] [i_9] [i_13] [10] = (arr_31 [i_9] [i_9 + 3] [i_9 + 3] [i_9] [i_9 + 2]);
                            arr_46 [i_2] [i_7] [i_8] [i_8] [i_8] [i_9] &= 4;
                        }
                        arr_47 [i_2] [i_7] = (((arr_28 [i_2] [i_2] [i_8] [i_2] [i_8] [12]) >= (((arr_1 [12] [i_2]) - (arr_5 [3])))));
                        var_30 = (max(var_30, (~255)));
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 19;i_14 += 1)
    {
        var_31 += ((2048776972 ? var_15 : (arr_3 [i_14 + 1] [i_14 + 1])));
        arr_50 [i_14] = -8669;
        var_32 = ((!((((arr_3 [14] [i_14]) + (max(9250707532171589892, 3160791481700943355)))))));
        arr_51 [i_14] [i_14] = 14948472090532816840;
    }
    #pragma endscop
}
