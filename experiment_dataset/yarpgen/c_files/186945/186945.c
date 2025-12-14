/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_11 *= (min((max(((max(var_2, var_7))), (arr_1 [i_0]))), (var_5 ^ 1)));
            var_12 = ((-(arr_2 [i_1 - 1])));
            arr_6 [i_1] = (arr_4 [i_0]);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_13 *= (((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_7 : ((-(arr_7 [4])))));
            var_14 = 1;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = (((arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (((arr_2 [i_0]) ? var_9 : -1081335215285445108)) : 1));
            var_15 = (arr_0 [i_0]);
        }
        var_16 += (max((((((1 & (arr_1 [i_0])))) ? 1 : (arr_2 [i_0]))), var_10));
        arr_14 [i_0] = (max(-327067051, 1));
        var_17 -= (max((min(243, (arr_0 [i_0]))), (max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_15 [0] = max((16114919180970645657 < 1), (max(((var_7 ? var_6 : var_10)), (13635 >= 250))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_2 [9])));
        arr_19 [i_4] [i_4] = (((var_8 ? 1 : 1)));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_19 = (~-327067054);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_29 [i_4] [i_5] [1] [i_5 - 1] [i_6] [i_7] = (arr_3 [i_4] [i_4] [1]);
                        arr_30 [8] [i_7] [i_6] [i_5] [8] &= var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_20 = var_10;
                        var_21 -= ((arr_35 [i_8 + 1] [i_9 - 1] [i_8] [i_9]) >= (var_1 > 1));
                    }
                }
            }
            var_22 -= ((arr_12 [i_5 - 1]) * var_8);
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_23 = (((min((arr_39 [i_10] [1] [i_4]), 255)) - (arr_39 [i_10] [i_4] [i_4])));
            var_24 += 1;
        }
        var_25 = (min(var_25, ((min((max(-32758, (1 * 1))), (((-(arr_33 [1] [2] [i_4] [i_4])))))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                {
                    arr_45 [i_4] [i_11] [i_11] [i_12] = (arr_32 [i_4] [i_4] [i_4] [i_4]);
                    arr_46 [i_11] [i_11] = -105661162;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            {
                var_26 = (min(16114919180970645676, (arr_48 [i_13])));
                var_27 = (max(var_27, (~24921)));
                arr_51 [18] = (((arr_48 [i_13 - 3]) ? ((max((arr_48 [i_13 - 3]), (arr_48 [i_13 - 3])))) : (arr_48 [i_13 - 3])));
                var_28 = ((((min(13824897978007558124, -327067048))) || ((max(((~(arr_50 [i_13] [i_14] [i_14]))), (arr_49 [i_13] [i_13 - 4]))))));
                var_29 = (min(var_29, (min(236, (16114919180970645648 ^ 251)))));
            }
        }
    }
    var_30 = var_8;

    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    arr_60 [i_15] [i_16] [i_17] = (((arr_50 [i_17] [i_16] [i_15]) ? -327067058 : (arr_50 [i_17] [i_16] [i_15])));
                    var_31 = (min(var_31, (((255 ? (min(((max(1, 1))), ((23676 ? var_3 : 1)))) : (16114919180970645694 == 1))))));
                    var_32 = (max(var_32, ((((arr_58 [i_15] [i_16]) ? 17473243005064190143 : ((16408779680983443938 << ((min(1, 237))))))))));
                    arr_61 [i_15] [i_15] [i_16] [18] &= (((min(327067031, 2331824892738905987)) | 1));
                }
            }
        }
        var_33 = (min(var_33, (16005762780535803354 << 1)));
    }
    var_34 = 327067045;
    #pragma endscop
}
