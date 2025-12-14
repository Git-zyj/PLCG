/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = -1;
        var_19 &= 4611686018427387872;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((((-124 > (arr_5 [i_0] [i_1]))) ? (((-(arr_2 [i_2] [i_0])))) : 11));
                    var_20 = -123;
                    var_21 -= -1;
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((0 ? 123 : 3));
                }
            }
        }
        var_22 = (arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_6] [i_6] [i_6] = 255;
                            arr_22 [i_5] [i_5] [i_4] |= -1;
                        }
                        arr_23 [i_0] [i_0] [i_3] [i_3] [i_3] [i_5] = (max(((-(arr_19 [i_0] [i_3] [i_5] [i_5] [i_5]))), (arr_19 [10] [i_3] [i_3] [i_3] [i_3])));
                        var_23 = 123;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_8] [i_9] = 13835058055282163743;
                    arr_32 [i_7] [i_8] [i_9] [i_9] = (((((arr_30 [i_7]) / 73142216)) <= ((-(arr_30 [i_7])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_41 [i_7] [i_11] [i_7] [i_7] [i_7] [i_7] = (min(96, (144115188075855871 == 3194091799)));
                        arr_42 [i_7] [i_7] [i_11] [i_7] [i_12] &= ((((~(arr_34 [i_7]))) != (~61)));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_51 [i_14] = 128;
            var_24 |= ((-(arr_26 [i_13] [13])));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_25 = (min(var_25, -47));
                    arr_57 [i_13] = (((max(-1, 134)) ^ 2147483647));
                }
            }
        }
        arr_58 [i_13] = (((((~(arr_35 [i_13] [i_13] [i_13])))) ? (arr_40 [i_13] [i_13] [i_13] [i_13]) : ((+(min((arr_47 [i_13]), 18446744073709551615))))));
        var_26 = (122 != -127);
    }
    var_27 = ((1921342302500150849 > ((((((23 ? 220 : 28)) <= var_7))))));
    var_28 = var_17;
    #pragma endscop
}
