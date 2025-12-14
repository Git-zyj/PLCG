/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = -var_7;
                    arr_9 [i_1] [12] = 0;
                }
            }
        }
        arr_10 [i_0] = ((-(arr_3 [i_0] [i_0])));
        arr_11 [i_0] [i_0] = 2549396791;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_15 [14] = (((arr_14 [i_3 - 1] [i_3 - 1]) ? (arr_12 [i_3 + 1] [i_3 - 2]) : (arr_12 [i_3 + 1] [i_3 + 1])));
        arr_16 [i_3] = 30806;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_22 [i_5] = ((2620601101 ? 0 : var_7));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_26 [i_3] [i_5] = (arr_21 [i_5] [9] [i_5]);
                        arr_27 [2] [0] [i_5] [i_6] [i_5] = arr_25 [0] [i_4] [i_5] [i_6];
                        arr_28 [i_6] [i_4] [4] [i_4] [i_4] [i_3] = ((var_6 << (((arr_18 [i_3 - 1] [i_6]) + 61))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_31 [i_7] = ((((((min(var_0, (arr_29 [i_7] [i_7]))) != (511 >= 4294967295)))) << (((arr_30 [i_7]) - 1872))));
        arr_32 [13] = arr_29 [i_7] [i_7];
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_38 [i_7] [i_8] [i_9] = (((((((18332 || (arr_34 [i_9] [i_8] [i_7]))) ? ((max(6813, (arr_30 [i_7])))) : (var_6 || 20121)))) * (min(0, (~var_1)))));
                    arr_39 [i_9] [i_9] [i_9] [i_9] = ((var_6 ? (((-(arr_30 [i_9])))) : (((~(arr_37 [i_7] [i_8] [3]))))));
                    arr_40 [i_7] = var_4;
                    arr_41 [i_7] = ((-(((2313244246 || var_6) ^ (min(441105913398060061, (arr_36 [i_7])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_49 [i_11] [i_12] [i_12] = (min(-1244097857, var_7));
                        arr_50 [i_7] [i_11] [i_11] = (max((max((min(18881, var_5)), (max(14984, 663123735)))), (((((((arr_48 [10] [i_7] [i_7] [i_7] [i_7]) != var_8)))) % (max((arr_44 [i_7] [i_10] [i_11]), 4294967295))))));
                        arr_51 [i_11] [i_10] [i_10] [i_10] = (((var_0 & var_6) ? (!64195) : (arr_35 [i_11] [i_11 + 3] [i_11])));
                        arr_52 [i_7] [14] [i_7] = arr_30 [i_11 + 2];
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        arr_55 [i_11] [i_10] [i_10] [i_11] [i_10] [i_10] = ((~(((arr_54 [i_11] [i_13 + 2] [i_11] [i_11]) & 17114))));
                        arr_56 [i_7] [i_7] [i_10] [i_7] [i_11] [i_13] = (((((var_7 <= var_6) || var_0)) ? (((var_3 + (arr_48 [i_7] [17] [i_11] [i_13] [i_13])))) : (((((-(arr_53 [i_10])))) ? var_0 : var_0))));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        arr_59 [i_7] [i_11] [i_11] [i_7] = (((~-65535) || ((((arr_48 [i_10] [i_10] [i_10] [i_10 - 2] [i_10]) ? (arr_36 [i_10 - 1]) : (max(var_5, (arr_53 [i_11]))))))));
                        arr_60 [i_11] [13] [i_11] = (0 ? 38287 : 4101728108);
                        arr_61 [i_10] [i_10] [i_14] [i_14] [i_7] |= 1;
                        arr_62 [i_10] [i_10] [i_11] [i_14] = (arr_58 [i_11] [i_11 + 1]);
                    }
                    arr_63 [i_10] [i_7] [i_7] [i_11] = var_2;
                }
            }
        }
    }
    var_10 = var_3;
    var_11 = ((~(max(38287, ((4294967295 ? var_9 : var_7))))));
    #pragma endscop
}
