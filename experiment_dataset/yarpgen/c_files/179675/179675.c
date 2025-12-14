/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (((arr_2 [i_1 + 3]) ? (arr_4 [i_1 + 3] [i_1 + 2]) : var_7));
                        var_17 ^= (arr_4 [i_1 + 2] [i_1 - 1]);
                    }
                }
            }
            var_18 += 4294967291;
            arr_10 [i_1] [5] [11] = (arr_4 [i_0] [i_1 + 2]);
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_19 = ((~(arr_9 [i_4] [i_4] [5] [i_0])));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_20 *= ((-(arr_18 [9] [i_7 + 1] [i_7 + 1] [i_6] [i_4])));
                            var_21 = (arr_6 [i_0] [i_6] [8]);
                            var_22 = (arr_13 [i_5 - 1] [i_5 - 1] [i_5 + 1]);
                        }
                    }
                }
            }
        }
        arr_20 [2] [i_0] = ((-(((arr_14 [7] [11]) ? (arr_16 [10] [9] [1] [i_0] [0]) : var_6))));
        var_23 = (arr_12 [i_0] [11] [11]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_29 [i_0] [i_8] [i_8] = -var_0;
                    arr_30 [i_9] |= 33364;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_24 = max((arr_32 [i_10]), (arr_31 [i_10]));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 19;i_13 += 1)
                {
                    {
                        var_25 = -4294967295;
                        var_26 *= ((((min((max((arr_40 [i_12]), (arr_33 [i_11] [i_12]))), ((~(arr_33 [i_11] [i_13 + 3])))))) ? (((max((((4294967291 || (arr_35 [i_11] [10])))), (arr_38 [i_10] [i_10] [i_10] [20]))))) : ((-(arr_35 [16] [i_11 - 1])))));
                    }
                }
            }
        }
        arr_42 [9] = arr_31 [i_10];
        arr_43 [20] = ((!((((21 << (11502 - 11497)))))));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            {
                var_27 *= (arr_48 [i_15] [12] [i_14]);
                arr_49 [i_14] = ((+(max((arr_33 [17] [i_15 + 1]), (arr_44 [i_15 - 1] [i_15])))));
            }
        }
    }
    #pragma endscop
}
