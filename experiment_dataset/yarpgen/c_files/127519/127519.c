/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, var_5));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = var_3;
                    arr_8 [i_0] [i_0] [i_1] = (arr_0 [i_0]);
                    var_13 = (((((34329 ? (arr_1 [i_0]) : var_2))) ? 1 : var_8));
                }
            }
        }
        arr_9 [i_0] = (max((((arr_3 [i_0 + 2]) ? (arr_6 [i_0 + 2] [i_0 + 1] [i_0]) : (arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]))), -41));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_14 = ((var_10 < ((-27 ? (arr_4 [i_0] [i_0]) : (arr_5 [i_3])))));
            var_15 = arr_10 [i_3];
        }
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            var_16 = ((((max((arr_2 [i_4 - 3] [i_4]), var_8))) != ((3304349239467855440 ? 24854 : 3312646424))));
            var_17 += ((var_10 ? (((((arr_7 [i_0] [i_4] [i_4] [i_0 + 1]) > (arr_7 [i_0] [13] [i_0] [i_0 + 2]))))) : ((-10 ? ((var_5 ? var_4 : 2248099289)) : 1))));
            var_18 = (((arr_11 [i_0 + 1]) <= (arr_14 [i_0] [i_4] [i_0])));
        }

        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_0] = (max(((((arr_0 [i_0]) ? var_7 : 115))), (max((arr_0 [i_0]), (arr_0 [i_0])))));
            arr_20 [i_0] [i_0] = ((((max(var_5, ((var_9 ? 11280 : var_6))))) ? (((max((arr_16 [i_0] [i_0]), (arr_16 [i_5 - 1] [i_0]))))) : ((57717 ? 3060 : (arr_11 [i_5 + 2])))));
        }
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_19 = (((~(arr_0 [i_0]))));
                        var_20 = (arr_5 [i_0]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_34 [i_0] [i_0] = ((!((min(((min(var_4, (arr_12 [i_9])))), (arr_17 [i_6] [i_11]))))));
                            var_21 ^= ((var_7 ? ((((var_9 ? var_4 : 14)))) : var_5));
                            arr_35 [i_0] [i_6] [i_0] [i_0] [i_11] [i_9] [i_11] = ((!(((65535 ? (arr_7 [i_11] [i_10] [i_6 - 3] [i_0 - 1]) : 112)))));
                            arr_36 [i_11] [i_11] [i_0] [i_0] [i_6] [i_0] = (max(((1 >> (var_0 - 3677755168))), 7814));
                            var_22 = ((0 ? (arr_5 [i_0]) : (((arr_3 [i_0 + 2]) ? (arr_31 [10] [i_6 + 1] [i_0]) : (arr_31 [i_11] [i_6 - 2] [i_0])))));
                        }
                    }
                }
            }
            var_23 = (max(143, 22));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_44 [i_14] [20] [i_14] [i_14] [i_6] [i_0] &= (max((((arr_4 [i_0 - 1] [i_12]) ? var_6 : (arr_4 [i_0 - 1] [i_14]))), ((((arr_29 [i_12] [i_0 - 1] [i_0 + 1] [i_0 - 1]) >= -3304349239467855447)))));
                            arr_45 [i_0] [i_12] [i_0] = ((max(-120, -126)));
                            arr_46 [i_14] [i_14] [i_0] [i_14] = max((max((min(57722, var_6)), 3839865562)), (min(var_4, var_9)));
                        }
                    }
                }
            }
            var_24 -= (max(((2249564977 >= (arr_38 [i_6 - 2] [i_6 + 1] [i_6 + 1]))), (arr_23 [0])));
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    {
                        var_25 += min((max((arr_37 [i_0] [i_15] [13] [i_0]), var_3)), ((max((arr_37 [i_0] [5] [i_16] [i_17]), (arr_37 [i_0 - 1] [i_15] [i_16] [i_17])))));
                        var_26 = (max((((15013577834867989408 ? (!1) : 3839865574))), ((max(var_2, var_1)))));
                        var_27 = ((!((((var_5 ? var_0 : (arr_47 [i_0] [i_15] [i_16])))))));
                        var_28 = var_7;
                    }
                }
            }
            arr_56 [i_0] [i_0] [i_0] = 143;
        }
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_29 += ((~(max((arr_16 [i_18] [18]), 28))));
        arr_59 [i_18] = (min((((((max((arr_7 [i_18] [i_18] [i_18] [i_18]), 0))) != (max((arr_52 [6] [6]), var_8))))), (max((arr_6 [i_18] [i_18] [i_18]), ((var_7 ? 28 : var_10))))));
        arr_60 [i_18] = ((!(((arr_37 [i_18] [i_18] [i_18] [i_18]) == (arr_37 [i_18] [i_18] [i_18] [i_18])))));
    }
    var_30 = var_1;

    for (int i_19 = 2; i_19 < 22;i_19 += 1)
    {
        arr_63 [15] [i_19] = (!((((arr_24 [i_19 - 1] [i_19] [i_19]) ? (arr_24 [i_19 - 2] [8] [i_19]) : 1))));
        var_31 ^= ((34 ? (((min(1, var_8)))) : (max(-3304349239467855437, (arr_40 [i_19 + 1])))));
    }
    var_32 = ((var_1 || (((var_6 ? (var_7 / var_8) : ((max(var_3, var_10))))))));
    #pragma endscop
}
