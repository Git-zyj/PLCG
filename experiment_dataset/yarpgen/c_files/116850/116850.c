/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, var_8));
        arr_2 [4] [i_0] = (((arr_1 [i_0] [i_0]) ? 70368743653376 : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((var_4 >= ((18013 ? 18013 : 7712817111467680085))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_12 = (min(var_12, (!61005)));
                var_13 = ((-7841416208147118438 ? var_6 : var_0));
                var_14 = (arr_8 [17]);
            }
            arr_12 [i_1] = 16829;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 ^= (((var_7 * var_4) - 23132));
                        arr_17 [i_5] [i_4] [i_2] [i_1 - 3] = ((var_9 ? var_2 : 1920406726));
                        var_16 = ((-(arr_9 [i_1 - 2] [i_1 - 2])));
                    }
                }
            }
        }
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            var_17 = -var_6;
            arr_20 [i_6] = ((max(((min(23132, 4671))), (max(1, 70368743653376)))));
            arr_21 [i_6] [i_6] [3] = (arr_7 [13] [i_1 - 2] [i_1]);
            var_18 = ((((max((var_4 + var_6), (var_5 + 4530)))) || var_4));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_19 = ((-919122815 ? 7841416208147118437 : -90647503));
                            arr_31 [i_1] [i_6] [i_6] [i_7] [i_8] [i_6] [i_6] = var_8;
                            var_20 = (~-21809);
                            var_21 *= ((-1 ? 42375 : 61011));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_42 [i_1 - 2] [2] [i_1 - 2] [i_10] [i_13] = var_4;
                            arr_43 [i_10] [i_10] [i_10] [i_10] = -82;
                            arr_44 [i_11] |= (arr_36 [i_1] [i_1] [1]);
                            arr_45 [i_10] [i_10] [i_11] = ((34397 > (arr_36 [i_13 - 1] [i_13 - 1] [i_1 - 3])));
                            var_22 = ((var_8 || -7841416208147118438) - 1);
                        }
                    }
                }
            }
            var_23 = (arr_13 [8] [8] [i_1 - 3]);
            var_24 = (~-28454);
        }
        arr_46 [i_1 - 3] = ((-((var_8 ? (arr_36 [i_1] [i_1] [6]) : (arr_4 [i_1])))));
        arr_47 [i_1] = (min(((11441479558215402164 ? (arr_35 [i_1 + 1] [i_1]) : (arr_9 [i_1 - 1] [i_1 - 1]))), ((((((-32767 ? 203 : 0))) ? ((138604505 >> (var_6 - 8880763583076598837))) : -var_7)))));
        arr_48 [i_1] [15] = (max((var_2 & 47515), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            {
                arr_53 [i_15] [13] [i_14] = ((-(-58 / 3483257279)));
                var_25 = ((((var_10 < (arr_30 [i_14] [i_15] [i_15] [i_15] [i_15]))) ? (arr_36 [i_14] [i_14] [i_14]) : (((arr_36 [i_14] [i_14] [i_14]) ? (arr_36 [i_15] [16] [i_15]) : 18013))));
            }
        }
    }
    #pragma endscop
}
