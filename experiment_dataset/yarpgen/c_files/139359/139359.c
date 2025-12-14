/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((!(((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_0])))) ? 313595469 : 89)))))));
                arr_5 [i_0] [i_1] = ((~(((((var_6 * (arr_2 [i_0])))) - -4294967295))));
            }
        }
    }
    var_16 += (!var_7);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        var_17 = (((arr_15 [i_2] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 1]) ? ((((arr_8 [i_2] [i_2]) && 239))) : (!5867)));
                        arr_18 [i_2] [i_3] [i_2] [i_5 + 1] = 8615;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_18 = ((2078752098048044454 ? 577385816 : 0));
                            var_19 = (((((8029469849025384701 ? var_5 : (arr_9 [i_2] [i_2])))) ? ((((arr_20 [1] [i_6] [i_4] [i_2] [i_2]) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : var_12))) : (((arr_12 [i_2] [i_4] [i_4] [i_7]) ? (arr_21 [12] [i_3] [i_2] [i_7]) : (arr_16 [i_3] [i_4] [i_3] [i_7])))));
                            var_20 = (arr_19 [i_2] [11] [i_2]);
                        }
                        var_21 = (min(var_1, ((((-8029469849025384702 - (arr_9 [i_3] [i_3])))))));
                    }
                    arr_26 [i_2] [i_2] [i_2] [i_2] = (arr_21 [i_2] [i_3 + 1] [i_2] [i_4]);
                    var_22 = ((((2666967905 ? -2078752098048044455 : 161))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_23 = (69 % var_11);
                        arr_30 [i_2] [i_3] [i_3] [i_4] [i_2] [i_2] = ((813719249799115423 ? (arr_28 [i_3 + 1] [10] [i_2] [i_3 - 1]) : ((((arr_7 [i_2]) * var_14)))));
                        arr_31 [i_2] [i_3] [i_4] [i_8] = ((-0 ? (arr_10 [i_2] [i_3 + 2]) : (arr_19 [i_2] [i_2] [i_2])));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_37 [i_2] [i_2] [i_2] [i_9] [13] = (arr_24 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]);
                            var_24 *= ((var_4 || (((var_3 ? (arr_33 [i_2] [i_3] [i_9] [i_10]) : var_3)))));
                            var_25 = -2666967885;
                            var_26 -= (((arr_28 [i_2] [i_3 + 2] [8] [i_10]) * (arr_19 [i_9 + 1] [i_9 + 1] [i_4])));
                            var_27 = (-1299714157 ? (arr_36 [i_10] [i_10] [i_9 - 1] [7] [i_9] [i_4]) : var_8);
                        }
                        var_28 = ((-(var_1 - -7)));
                        var_29 = ((((-(min((arr_20 [i_4] [i_3] [i_4] [i_9 - 1] [i_2]), 1)))) / ((((arr_29 [i_2] [i_2] [12] [i_3] [i_3] [i_9]) ? ((var_13 ? 213 : (arr_19 [i_2] [i_3] [9]))) : ((1827082237 + (arr_23 [i_2] [i_2] [i_3 + 1] [4] [i_4] [i_2]))))))));
                        var_30 = (arr_7 [i_2]);
                    }
                    var_31 -= (arr_7 [6]);
                }
                var_32 = (((arr_16 [i_2] [i_2] [i_2] [i_2]) ? (1627999395 != var_11) : (arr_9 [i_2] [i_3])));
                var_33 = (min(var_33, (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])));
                var_34 = (arr_29 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]);
                arr_38 [i_2] [i_3] [i_2] = (min((((0 ? 62 : 39312))), (((arr_7 [i_2]) ? ((var_3 ? var_9 : 889954033)) : ((((arr_19 [i_2] [i_2] [i_3]) + (arr_32 [i_2] [i_2] [i_2] [1] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
