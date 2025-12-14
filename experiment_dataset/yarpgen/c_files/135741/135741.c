/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (max(14910583921942690691, (((!(arr_1 [i_0]))))));
                    var_12 = (max(((var_10 ? (min(var_1, 2431764904341476267)) : (~32755))), var_0));
                    arr_8 [i_0] [i_1] [i_0] = (max(61225, 8633536345136239843));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_13 &= 8633536345136239845;
                    arr_13 [i_0] [i_3] [i_0] = 190;
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_14 = 61225;
            var_15 = 61225;
            var_16 = (arr_14 [i_0] [i_0] [i_0]);
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_17 = -1;
            var_18 = 1956777020;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_25 [i_0] [i_6] [i_7] [i_7] = ((var_0 ? ((((arr_4 [i_0 - 1] [i_0]) ? (arr_4 [i_0 + 1] [i_0]) : (arr_4 [i_0 + 3] [8])))) : (arr_0 [i_0])));
                        var_19 = ((-((-71 ? 0 : -19192))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_20 = (max(var_20, ((((arr_21 [i_0] [7] [7] [16]) ? (~var_2) : ((((var_5 ? 197252383928364468 : 33)) * -0)))))));
                            var_21 = ((61225 ? 54034 : 55));
                            var_22 = ((~(arr_22 [i_0] [i_8] [i_0])));
                            arr_30 [i_0] [i_0] [16] = (max(((max(((min(75, (arr_1 [i_0])))), (arr_12 [i_0] [15] [i_8])))), ((-(((arr_4 [i_0] [i_0 - 1]) * 1))))));
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_7] [12] [i_10] = ((((!((min(65535, var_4)))))));
                            var_23 = ((var_8 / ((((arr_14 [i_10] [i_8] [16]) > (var_9 | -31460))))));
                        }
                        var_24 = (max(var_24, (((-(arr_22 [14] [16] [i_7]))))));
                    }
                }
            }
            arr_35 [i_0] [i_6] = (!(((18446744073709551615 >> (((arr_32 [i_0] [i_0 + 2] [7] [14] [i_0] [14] [7]) - 60891))))));
            var_25 = 7881;
        }
        var_26 = (max(65230, 13937054151105997030));
        arr_36 [i_0] = 1872480056;
    }
    var_27 = (((63 | ((1 ? 1 : var_10)))));
    var_28 = (min((var_5 ^ var_6), var_7));
    var_29 = var_1;
    var_30 = ((var_8 * (var_6 & 0)));
    #pragma endscop
}
