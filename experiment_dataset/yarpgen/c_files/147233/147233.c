/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((-124 ? ((var_6 ? (arr_0 [5]) : var_5)) : (arr_12 [i_0] [i_2])));
                            var_13 = ((~(arr_0 [i_0])));
                            var_14 *= ((var_5 && (((126 ? 6 : 250)))));
                            var_15 += ((((var_8 ? (arr_0 [3]) : (arr_6 [i_3]))) ^ ((~(arr_7 [i_0] [i_2] [i_3] [i_3])))));
                            var_16 *= (((arr_6 [i_0]) > var_3));
                        }
                    }
                }
            }
            var_17 = ((var_7 ? (var_2 & 64) : (arr_6 [i_0])));
            var_18 = var_9;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_19 = (arr_11 [i_0]);
            var_20 = var_3;
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_18 [i_6] [i_6] [i_6] = (arr_12 [2] [i_0]);
            var_21 *= var_7;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_22 = ((2908008355 ? 2088406885 : ((((!(arr_19 [i_0] [i_7])))))));
            var_23 ^= (arr_0 [i_0]);
            var_24 = (~var_0);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_25 ^= 2206560401;
                            var_26 += (((arr_10 [i_0] [22] [i_8] [22] [i_10]) ? var_6 : var_1));
                            var_27 = (arr_3 [i_0] [i_7] [i_8]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_28 = (((arr_15 [i_12]) < var_10));

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_36 [i_11] [i_11] = -178;
                            var_29 = var_7;
                            var_30 = ((~(arr_4 [i_0] [i_7])));
                            arr_37 [i_0] [i_11] [i_7] [i_11] [i_11] [i_7] [i_7] = -var_5;
                            var_31 = ((2206560401 ? (arr_29 [i_0] [i_7] [i_11]) : 32767));
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_32 = var_6;
                            arr_42 [i_0] [i_7] [i_7] [i_11] [i_11] [i_7] = ((174 ? (arr_25 [i_0] [i_7] [i_11] [i_12] [i_14]) : var_5));
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_46 [17] [i_7] [i_12] [i_11] = (100 ? 1897201098 : 61);
                            var_33 |= ((((46 ? 2206560393 : var_0)) + (arr_28 [i_0] [i_0] [6] [i_7] [i_11] [13] [i_15])));
                            var_34 *= (~var_6);
                            var_35 = 2729340732;
                        }
                        arr_47 [i_0] [i_7] [i_11] [i_11] = var_9;
                    }
                }
            }
        }
        var_36 = (((-127 - 1) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_5));
        var_37 ^= var_8;
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                {
                    arr_57 [i_16] [i_16] [i_18] = var_4;
                    var_38 = (arr_9 [i_18] [i_16] [i_16]);
                }
            }
        }
        arr_58 [i_16] [i_16] = (arr_14 [i_16] [i_16] [14]);
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        var_39 = var_3;
                        arr_66 [i_21] [0] [i_16] [i_19] [i_16] = 38;
                    }
                }
            }
        }
        arr_67 [i_16] = ((((((arr_43 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) << (((arr_38 [i_16] [4] [i_16] [i_16] [i_16]) - 2042436962))))) ? (((arr_21 [i_16] [i_16] [i_16]) ? (arr_38 [i_16] [i_16] [i_16] [i_16] [9]) : var_0)) : (((-(arr_21 [i_16] [i_16] [i_16]))))));
    }
    for (int i_22 = 0; i_22 < 16;i_22 += 1)
    {
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 16;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    {
                        var_40 = var_4;
                        var_41 ^= (((arr_76 [i_22] [14] [9] [i_25]) ? (min(((193 ? -119 : 189)), ((-120 ? (arr_16 [i_22]) : (arr_74 [0] [i_23]))))) : (((min(2415446319, 360799615))))));
                        var_42 = ((((((((arr_14 [i_25] [i_24] [i_22]) ? var_2 : (arr_14 [i_22] [i_23] [i_24])))) && (((arr_1 [4]) > var_6)))) ? (arr_3 [i_22] [i_24] [i_24]) : (((((((max(-122, -38)))) > var_8))))));
                    }
                }
            }
        }
        arr_78 [0] [3] = ((((((var_10 | var_8) > ((((73 > (arr_7 [4] [14] [i_22] [i_22])))))))) > (((!(((var_0 ? 127 : var_6))))))));
    }
    #pragma endscop
}
