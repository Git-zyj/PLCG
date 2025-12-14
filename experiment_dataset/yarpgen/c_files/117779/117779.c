/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~((188 ? 29095 : 0))))) < (~var_12)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, (arr_3 [i_0] [i_1])));
            arr_5 [i_0] [i_0] = (!18446744073709551594);
            arr_6 [i_0] = (((((arr_2 [i_0] [4] [4]) > ((((arr_4 [i_0] [i_1] [i_0]) >= (arr_0 [1] [i_1])))))) ? ((((((arr_4 [i_0] [i_1] [i_0]) ? (arr_1 [i_0] [6]) : (arr_2 [i_0] [i_1] [i_0])))) ? ((var_12 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_1]))) : (var_4 & var_2))) : var_8));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        arr_17 [i_0] [i_2] [1] [i_2] = ((var_10 ? (((~var_0) ^ (arr_16 [i_0] [i_2] [i_3] [i_4] [1] [i_0]))) : (arr_9 [2] [i_3 - 1] [i_2])));
                        var_15 = (arr_13 [i_2] [12] [0] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] = ((-(arr_21 [i_0] [3] [i_3] [i_0])));
                                arr_23 [i_0] [i_0] [i_0] [i_2] [6] [i_0] = var_8;
                                arr_24 [i_0] [i_2] = (1 && 0);
                                var_16 -= -7972874935543639205;
                                arr_25 [i_5] [i_5] [i_5] [13] [i_5] [i_2] [i_5] = ((~((((arr_1 [i_0] [i_2]) == (((var_11 && (arr_2 [i_0] [i_0] [2])))))))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_2] = (((((var_10 ? ((~(arr_0 [i_0] [9]))) : (~619)))) ? ((~(978021554 != -2547372852981169794))) : var_7));
                    var_17 = ((((((((arr_13 [i_2] [8] [i_2] [i_3]) ? var_9 : (arr_9 [i_0] [i_2] [i_0]))) << (((arr_1 [i_0] [i_0]) - 915505330))))) ? ((((((var_7 ? (arr_2 [i_0] [i_0] [i_0]) : var_8))) ? (-7739258337644668139 == -1075099324307952725) : var_8))) : ((var_6 ? (arr_7 [i_0]) : (var_7 / var_9)))));
                    arr_27 [i_0] [i_2] [i_2] [i_3 - 1] = var_10;
                }
            }
        }
    }
    var_18 = ((4783058865670987860 ? (-9223372036854775807 - 1) : -5539));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 20;i_8 += 1)
        {
            {
                var_19 = ((!(((arr_28 [i_7] [i_7]) && ((!(arr_32 [i_7])))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_20 = ((var_12 ^ (!1191152665)));
                            var_21 = (!92);
                        }
                    }
                }
                arr_39 [i_8] = ((((((var_5 == var_1) >> ((((-(arr_29 [i_7]))) + 7362611800511248482))))) ? (((var_9 ^ var_10) ? ((var_8 ? var_1 : var_3)) : var_1)) : (((((((arr_31 [9] [9] [i_8]) ? (arr_36 [i_8] [4] [i_8] [i_8]) : var_3)) > (arr_33 [i_7] [i_7 - 3])))))));
                var_22 ^= (((((805627605 ? 115 : 13576))) ? var_6 : (arr_31 [i_7] [i_7 - 3] [i_7])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_23 = arr_28 [i_7] [i_7];
                            var_24 = ((~(~var_5)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
