/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((max(-var_14, (((var_7 - var_15) - ((max((arr_1 [i_0]), 32767))))))))));
        var_18 = ((((((arr_1 [i_0]) ? (var_11 ^ var_4) : (arr_0 [3] [i_0])))) ? (max(var_5, var_4)) : var_9));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_1] [i_1] = (((max(var_14, 116))) ? (!var_4) : var_11);
                            var_19 -= (14396030170446890762 < var_12);
                        }
                    }
                }
            }
            arr_19 [i_1] = 128;
            var_20 = ((var_14 < ((((-(arr_2 [i_1] [i_1])))))));
        }
        var_21 *= ((var_1 | (min(((var_2 ? (arr_11 [i_1] [i_1] [i_1]) : var_15)), var_12))));
        var_22 = (max(-var_1, ((var_12 ? 18446744073709551615 : (arr_6 [i_1] [i_1] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_23 = (max((max(255, var_2)), (min((!1690098458), ((var_8 ? (arr_2 [i_6] [i_6]) : var_15))))));
        var_24 = ((-((var_2 ? var_13 : var_10))));
        var_25 *= var_12;
    }

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_26 = var_8;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_27 = (((arr_23 [i_8]) ? (max(-var_0, -0)) : 0));

                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        var_28 = min((((arr_26 [i_8] [2]) ^ (arr_26 [i_8] [i_8]))), ((((((~(arr_24 [10] [i_8])))) < (min(var_5, var_15))))));
                        arr_33 [i_8] [i_8] = var_4;
                        arr_34 [i_7] [i_8] = var_5;
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_39 [i_8] [i_8] [i_9] [i_11] = (-(max(((var_10 / (arr_36 [i_11] [i_11] [i_11] [i_8]))), ((((arr_24 [i_9] [i_9]) <= (arr_35 [i_7] [i_8] [i_8] [i_11] [i_8] [i_7])))))));
                        arr_40 [i_8] [i_11] [1] [11] [i_8] = -var_5;
                        var_29 = var_0;
                    }
                    arr_41 [i_7] [i_8] [i_8] = (min((((((var_3 & (arr_26 [i_8] [i_8])))) ? (max(var_9, var_10)) : ((((250 && (arr_30 [i_7] [10] [i_7] [i_7] [i_8]))))))), var_12));
                    var_30 *= (!var_12);
                    var_31 = ((((min((arr_38 [i_7] [14] [i_8] [i_8] [i_9]), (arr_24 [i_8] [i_8])))) ? (((var_2 || ((min(var_0, (arr_24 [i_8] [i_8]))))))) : (~28634)));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_44 [i_12] [i_12] = var_13;

        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_32 += ((-((var_4 << (((max(8, var_2)) - 3249415523272187132))))));
            var_33 *= ((39981 != (((!((max(var_15, 14396030170446890762))))))));
            var_34 = (!var_11);
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_35 = (15 + ((-(var_14 || var_0))));
            var_36 = ((((~(arr_26 [i_14] [i_14]))) >= (((597355041 & (arr_16 [i_14] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
        {
            arr_55 [i_15] [i_15] [i_15] |= min(var_3, (max((((arr_47 [10] [i_15]) ? (arr_16 [i_12] [i_12] [i_12] [i_15] [i_12] [10]) : var_0)), (arr_17 [i_12] [i_12] [i_15]))));
            var_37 = (min(var_37, var_1));
            arr_56 [i_15] [i_12] [i_12] = (((max((arr_32 [10] [i_12]), (arr_16 [i_12] [i_12] [i_12] [i_15] [i_15] [i_15]))) == ((~(arr_32 [i_12] [i_15])))));
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_38 = (max(var_38, ((max(((var_14 * (!7341306881152806583))), var_9)))));
            var_39 = var_1;
            var_40 = (((((arr_32 [i_12] [i_12]) - (12249952888250756590 + var_1)))) ? ((var_1 - ((((arr_23 [i_16]) < var_8))))) : var_4);
        }
    }
    var_41 = (min(((-var_5 ? (var_12 < var_12) : var_7)), ((var_0 ? var_12 : ((min(var_11, var_6)))))));
    #pragma endscop
}
