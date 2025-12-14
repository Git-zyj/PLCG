/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_18 ? (min(var_15, var_10)) : (~var_14))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((1 ? 4524227106204868189 : 65)), (arr_1 [i_0] [i_0])))) ? (arr_1 [16] [i_0]) : (arr_0 [i_0] [i_0])));
        var_20 = ((~(~17)));
        arr_3 [i_0] [15] = (((arr_1 [i_0] [i_0]) ? (min(1, 134217728)) : (~81)));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_21 = (max(((((min((arr_7 [i_1]), (arr_5 [i_1] [i_1])))) ? (arr_6 [i_1 + 3]) : 4294967278)), (arr_5 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_22 = (~0);
                                var_23 = (+(min((((arr_8 [i_3] [4]) ? (arr_5 [i_1] [i_5]) : (arr_12 [i_2] [i_2] [i_2] [i_5]))), ((1 ? 1 : 0)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] [i_6] [10] = (arr_7 [i_1 + 1]);
                        var_24 ^= -454012393;
                        arr_23 [i_1] [i_1] [i_1] [i_3] [i_6] = (arr_13 [i_6] [i_3] [i_3] [i_2] [i_1] [i_1]);
                        var_25 -= 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_26 = (arr_26 [i_7] [i_7 - 1] [i_7 + 1]);
            arr_28 [1] [i_8] [i_7 - 2] = ((17 ? 80 : 2522111944));

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 6;i_11 += 1)
                    {
                        {
                            var_27 = ((-(arr_13 [i_11 + 3] [i_11] [i_11 + 1] [i_11] [i_11 + 4] [i_11])));
                            var_28 = (max(var_28, (((~(arr_8 [i_7 + 1] [i_11 + 4]))))));
                        }
                    }
                }
                var_29 ^= (arr_7 [i_7 + 1]);
            }
            var_30 = ((-(arr_16 [i_8] [i_8] [i_7] [0] [i_8] [0] [i_7 + 1])));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_31 = (arr_39 [i_12] [i_12]);
            var_32 = (max(var_32, (arr_25 [i_12])));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 6;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_33 = (arr_19 [8]);
                            var_34 *= 1495047640;
                            var_35 = arr_33 [i_12] [i_15];
                            var_36 = (((arr_46 [i_13 + 1] [i_15] [i_15] [i_15]) ? (arr_46 [i_13 + 4] [i_15] [i_15] [i_15]) : (arr_46 [i_13 - 1] [i_13] [i_15] [i_15])));
                        }
                    }
                }
            }
            var_37 |= (((arr_37 [i_7] [2]) ? (arr_37 [i_7] [0]) : (arr_37 [i_7] [8])));
            var_38 *= arr_42 [1];
        }
        var_39 = 434633684672885880;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    arr_55 [i_16] [i_16] [8] = (((arr_49 [i_16]) ? (arr_15 [i_7] [i_7] [i_7 + 1] [i_16] [i_16]) : (arr_52 [i_7] [i_17] [i_16] [2])));
                    var_40 = (!13363799794859014726);
                }
            }
        }
    }
    #pragma endscop
}
