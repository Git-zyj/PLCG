/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_3 [i_0])));
        arr_4 [i_0] [i_0] = ((((arr_3 [1]) ? var_14 : (arr_3 [i_0 - 3]))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                var_17 = (arr_5 [i_1] [4] [5]);
                var_18 = (max((arr_7 [i_0]), ((max(var_9, (arr_0 [i_0] [i_0]))))));
                arr_12 [i_0] [i_0] [4] = ((((arr_1 [i_0 - 3]) ? 32767 : (arr_1 [i_0 + 3]))));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_5] [i_4] = 15366606837301557444;
                            arr_23 [i_1] [i_1] [i_3] [i_4 - 1] [i_1] &= var_9;
                        }
                    }
                }
                var_19 = var_13;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_20 = (max((max(((var_4 ? var_1 : (arr_6 [11] [i_1]))), ((var_3 ? (arr_0 [i_0] [i_0]) : (arr_6 [i_0] [3]))))), ((min((max(var_13, (arr_25 [i_0] [0] [i_6]))), var_9)))));
                var_21 = ((~(((arr_16 [i_0] [i_0] [i_0 - 3] [i_0]) >> (((var_2 ^ 607721096963746616) + 607721097768231889))))));
            }
            var_22 = arr_13 [i_0] [i_0] [i_0];
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_23 = (((arr_1 [i_0]) / (arr_30 [i_0 + 2])));
            arr_31 [i_0] [i_0] = (min(32759, (((arr_29 [i_0] [i_0]) ^ ((355833695929955740 ? var_12 : 0))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_24 = ((~((((min(var_14, var_5)) <= ((var_7 ? var_6 : -6187090230142975368)))))));
                            var_25 += (min((arr_6 [i_0 + 3] [i_0 - 3]), ((max((arr_6 [i_0 + 3] [i_0 - 3]), (arr_6 [i_0 + 3] [i_0 - 3]))))));
                            var_26 = (max(var_26, ((((arr_35 [i_0] [i_7] [i_10]) < ((min(((min((-32767 - 1), -32765))), (max(var_2, -2))))))))));
                            arr_38 [i_0] [i_7] [i_8] [i_8] [i_0] [i_10] = -1941352680;
                            arr_39 [2] [i_7] [i_8] [i_0] [i_9] [i_10] = 1;
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_27 = max(1596071933, 32767);
                            var_28 -= (!2);
                            arr_44 [i_0] [i_0] [i_8] [0] [i_11] = (arr_30 [i_9]);
                        }
                        var_29 = (max(var_29, var_3));

                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            arr_47 [i_0] [i_7] [i_8] [i_8] [1] [i_7] [i_0] |= (max(0, 1));
                            arr_48 [i_12] [i_12] [i_0] = ((var_9 ? (arr_6 [i_12] [7]) : (((-15614 / -18) / var_6))));
                        }
                        var_30 = (max(var_30, ((min(-124, 1465)))));
                        arr_49 [i_0] [i_7] [i_7] [i_0] [i_7] [i_9] = (min(((min((arr_27 [8] [i_0 - 2] [i_0]), 50))), ((-(max(var_3, var_8))))));
                    }
                }
            }
            arr_50 [i_0] [i_0] = (max(((max(13532, -1191275607))), (max((arr_41 [7] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]), (max((arr_35 [3] [3] [i_7]), (arr_5 [i_0] [i_0] [i_0])))))));
        }
    }
    var_31 = ((var_4 ? var_13 : (max((max(var_9, var_12)), var_11))));
    var_32 ^= (max((max((((var_4 ? var_12 : var_3))), (max(var_5, var_6)))), (((32767 && ((max(1, 9223372036854775807))))))));
    #pragma endscop
}
