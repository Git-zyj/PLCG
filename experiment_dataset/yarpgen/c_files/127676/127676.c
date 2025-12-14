/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] = -3877094968371366555;
            var_11 = (-3877094968371366555 != var_5);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_12 = var_10;
            var_13 = (((arr_1 [11]) ? (arr_2 [i_0 - 2]) : var_7));
            var_14 += (arr_1 [i_0]);
            arr_10 [i_2] [i_2] = arr_8 [i_2] [i_0 - 3] [i_0 - 3];

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_15 = (var_7 / var_4);
                var_16 = (arr_4 [i_0 - 1]);
                arr_13 [i_0] [i_2] = (((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 4]) <= var_9));
                arr_14 [i_0 - 4] [i_2] [i_2] = (arr_7 [i_0 - 2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_4] [i_2] [i_4] [i_5 + 1] = (((arr_16 [i_0] [i_2] [i_5 + 1] [i_0] [i_0 - 2] [i_0]) / (arr_16 [15] [i_2] [i_5 + 1] [i_2] [i_0 - 3] [i_4])));
                            arr_22 [i_2] = var_2;
                            var_17 = 3102159808237125399;
                            var_18 = 281474976709632;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_19 *= ((((var_4 ? (arr_12 [i_0] [i_2] [3]) : var_2)) << (((arr_25 [i_0 + 2] [i_0 + 2] [i_6]) + 4878256606320406311))));
                var_20 = (((arr_3 [i_0 + 1]) ? (arr_8 [i_2] [i_6] [i_6]) : var_7));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_28 [i_0] [i_0] [i_2] [i_0] = ((arr_24 [i_0] [i_0] [i_0 + 2]) ? (arr_0 [i_0 - 2] [i_0 + 2]) : var_7);
                var_21 = (((arr_26 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]) ? (arr_26 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 2]) : (arr_9 [i_0 - 3] [i_0 - 3] [i_2])));
            }
        }
        arr_29 [2] |= ((((((arr_26 [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 4]) ? (arr_4 [i_0]) : var_10))) ? ((var_2 & (arr_0 [i_0] [i_0]))) : (var_9 <= var_0)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] = var_8;
                            var_22 |= (arr_15 [10] [10] [i_9 - 2] [i_10] [i_11]);
                            arr_40 [i_0] [i_8] [i_0] = (!((((arr_23 [i_11]) ? (arr_12 [i_0] [i_0] [i_0 - 3]) : var_5))));
                        }
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            var_23 *= ((((((arr_26 [i_0] [i_8] [i_9] [i_12 + 3]) ? var_10 : var_2))) && -3877094968371366569));
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [4] [i_8] = (((arr_4 [i_0 - 4]) || (-32767 - 1)));
                        }
                        for (int i_13 = 3; i_13 < 16;i_13 += 1)
                        {
                            var_24 = ((var_0 != (arr_45 [i_13] [i_13] [i_10] [i_10] [i_10] [i_0 + 2] [i_0 + 1])));
                            var_25 = var_10;
                        }
                        var_26 += var_7;
                    }
                    var_27 = (var_3 + (arr_20 [i_0 - 2] [i_0 - 1] [i_0]));
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = (((((var_6 ? (var_6 < var_10) : 1))) + var_10));
    var_30 = ((var_7 < (min((((var_3 ? 1 : var_7))), ((var_0 ? var_1 : var_6))))));
    #pragma endscop
}
