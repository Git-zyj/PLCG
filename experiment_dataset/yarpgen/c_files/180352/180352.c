/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((var_9 ? (((max((arr_6 [i_0] [i_1] [i_2] [i_1]), (arr_0 [i_0]))))) : ((((min(134152192, -20))) ? (arr_1 [i_1] [i_2]) : -20))));
                    var_16 ^= 1;
                }
            }
        }
    }
    var_17 = 1;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = (!1048560);
        var_18 = ((((var_5 ? 4501400604114944 : (-2147483647 - 1))) == -8));
        var_19 = (((arr_8 [i_3]) % (arr_8 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 = (~var_12);
                    arr_18 [i_3] [i_4] [i_5] = arr_15 [i_4] [i_4] [i_3] [i_4];
                    arr_19 [i_3] [i_4] [i_4] [10] = -1048560;
                }
            }
        }

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_21 = ((!(-9223372036854775807 - 1)));
            var_22 = ((-1048563 ? 1 : 1));
            var_23 = (arr_0 [i_3]);
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_30 [i_9] [i_8] [i_9] = (min((((arr_6 [i_9] [i_9] [i_7] [i_7]) ? (arr_6 [i_7] [16] [i_8] [i_9]) : 1)), (arr_6 [i_7] [i_7] [i_8] [i_9])));
                    arr_31 [i_8] [i_8] [i_9] = 0;
                    var_24 = ((max(32766, (arr_23 [i_7] [i_7]))));
                    arr_32 [i_9] [i_8] [i_7] [i_7] = ((!(((arr_23 [i_9] [i_9]) > (max((arr_27 [i_7] [i_9]), (arr_3 [i_8] [i_7])))))));
                }

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_25 = min(((max(16128, (arr_34 [i_8] [i_8] [i_8])))), ((((min(1, 16128))) ? var_13 : (((max((arr_36 [i_7] [i_8]), 236)))))));
                    var_26 = arr_33 [i_10] [i_8] [i_7] [i_7];
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_39 [i_7] = ((+(min((arr_23 [i_7] [i_8]), (arr_23 [i_7] [i_8])))));
                    var_27 = var_10;
                    var_28 = ((((-(max(1, 7830229560039847724))))) ? (((0 ? 9223372036854775807 : 26973))) : ((63343 ? ((((!(arr_5 [i_7] [i_7] [i_11] [i_7]))))) : ((35 ? (arr_36 [17] [i_8]) : var_9)))));
                }
                var_29 = (min(var_29, (((-(((arr_27 [i_7] [i_8]) ? (((~(arr_24 [19])))) : (min((arr_36 [i_7] [i_8]), (arr_1 [i_7] [i_8]))))))))));
                var_30 = (min(((((arr_23 [i_7] [i_8]) || 1048557))), -1048557));
            }
        }
    }
    #pragma endscop
}
