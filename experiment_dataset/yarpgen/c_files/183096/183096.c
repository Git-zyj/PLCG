/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (!31959);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = 17423;
                                var_21 ^= ((~(arr_4 [i_0] [i_1] [i_0])));
                                var_22 = ((!((var_12 > (max(var_15, var_11))))));
                                var_23 -= (min((arr_3 [i_2] [i_1] [i_0]), (!0)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    arr_19 [i_7] [i_7] [i_6] [i_5] = (arr_6 [i_5] [i_5] [7] [i_5]);
                    var_24 = (min((((((arr_12 [i_5]) ? var_11 : var_14)))), ((((var_4 - (arr_1 [i_7]))) + 65535))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_9] [i_10 - 2] = (((arr_20 [i_5] [i_5] [i_5]) ? (((((min((arr_12 [i_5]), var_4))) ? var_14 : (arr_6 [i_5] [i_5] [i_9] [i_10])))) : (max(var_8, var_0))));
                        arr_28 [i_9] [i_9] [i_9] [i_10 + 1] = ((((((max((arr_5 [i_5] [i_9] [i_10 - 1]), (arr_14 [i_8])))) ? (((0 ? 48113 : 48113))) : var_0)) & var_10));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_31 [i_11] [1] [6] [1] [i_5] |= (~var_12);
                        arr_32 [i_9] [17] [i_8] [i_5] [i_9] = ((~(arr_13 [i_9])));
                    }
                    arr_33 [i_9] = ((~(min(((max(var_9, (arr_12 [i_5])))), (min(var_7, (arr_3 [i_9] [i_8] [i_5])))))));
                    arr_34 [i_9] [i_8] [i_9] = (max((arr_3 [i_5] [i_5] [i_5]), (max((min((arr_3 [7] [7] [i_9]), (arr_8 [i_5] [i_5] [i_5] [i_9]))), ((min((arr_16 [i_5] [i_5] [i_5]), var_18)))))));

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_37 [i_5] [i_8] [i_9] [i_8] = (max(var_5, (((var_5 ? var_1 : 2147483647)))));
                        var_25 = (((((max(var_14, 31))) != (min((arr_10 [i_9] [i_8] [i_12] [i_8] [i_12] [i_9] [i_9]), var_10)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 18;i_15 += 1)
                {
                    {
                        var_26 = (max(var_5, (arr_13 [i_15])));

                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            arr_46 [i_14] = 65531;
                            arr_47 [i_14] = (min(var_13, var_5));
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        arr_50 [i_17] [i_17] = var_0;

        /* vectorizable */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_27 = var_16;
            arr_53 [3] [i_18] = ((var_12 & (var_2 % 18446744073709551606)));
        }
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        var_28 = (0 || -17);
        var_29 = var_9;
        var_30 &= ((((min((arr_14 [i_19]), (min(var_13, var_15))))) != (((arr_29 [i_19] [i_19] [i_19] [i_19] [i_19] [1]) ? (arr_2 [i_19] [i_19]) : var_1))));
    }
    for (int i_20 = 1; i_20 < 13;i_20 += 1)
    {
        var_31 &= ((+(max((var_5 - var_14), var_4))));

        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            var_32 = ((8332 ? 1 : 7758));
            arr_63 [i_20] [i_21] |= 17423;
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 20;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 20;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 18;i_24 += 1)
            {
                {
                    arr_72 [i_22] = var_8;
                    arr_73 [i_24] [i_23] [i_23] [i_22] = (((arr_68 [i_23] [1]) ? ((((min(456827403088836474, 33564))) ? ((var_12 ? -32 : (arr_66 [4] [i_23]))) : var_12)) : var_9));
                    arr_74 [i_22] [i_22] = var_3;
                    var_33 = (max((arr_3 [i_24 + 2] [i_24 + 2] [i_24 - 1]), ((var_0 ? (arr_3 [i_24 + 2] [i_24 + 2] [i_24 + 2]) : (arr_3 [i_24 + 2] [i_24 + 1] [i_24 + 2])))));
                    var_34 = var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_25 = 1; i_25 < 14;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {
            {
                var_35 = (arr_75 [i_25]);
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    for (int i_28 = 3; i_28 < 14;i_28 += 1)
                    {
                        {
                            arr_86 [i_28] [5] [i_27] [i_26] [i_25 - 1] = (((((~(!-1354630864)))) ? ((((((arr_83 [i_28 - 3] [2] [i_26] [7]) ? (arr_70 [i_26] [i_25]) : var_0))) ? (((arr_42 [i_25 + 1] [i_25 + 1] [i_27] [i_28]) ? var_14 : var_7)) : (((arr_39 [i_28] [i_25]) % var_10)))) : ((((!(arr_8 [i_27] [i_27] [i_26] [i_27])))))));
                            var_36 ^= (min(((((max(var_10, var_12))) ? var_5 : ((((arr_44 [i_25]) - (arr_11 [i_25] [i_25] [i_27] [i_28] [i_27] [6] [i_27])))))), var_13));
                            var_37 = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
