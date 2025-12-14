/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (var_13 ? (~var_9) : var_9);
    var_18 += (~var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (((~((~(arr_1 [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 += (arr_10 [i_0] [i_0] [i_3] [i_0]);
                        var_20 = (min(var_20, (arr_1 [i_3])));
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (var_11 && (arr_0 [i_2] [i_2]));
                        var_21 = (max(var_21, (((var_0 || (arr_10 [i_3] [i_3] [i_3] [i_0]))))));
                        var_22 *= 1;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_0] [i_0] [i_0] = var_16;
            var_23 = (arr_6 [i_0] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_24 ^= ((((1 ? -434972828 : 1721462642850155981)) == var_14));
                        arr_21 [i_0] [i_0] [i_0] = var_6;
                        arr_22 [i_0] [i_4] [i_0] [i_0] = (((arr_3 [i_0] [i_0]) ? (!var_3) : (arr_14 [i_5] [6] [i_5])));
                    }
                }
            }
            arr_23 [i_0] [6] = ((((var_10 ? -46 : 4))) ? (arr_5 [i_0]) : 1);
        }
        var_25 = (min(var_25, var_4));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_33 [i_7 - 3] [2] [i_9] &= ((0 | (var_6 == 17787410287353250641)));
                    var_26 *= (arr_24 [2] [18]);
                }
            }
        }
        var_27 ^= (((((-(arr_28 [i_7 - 1] [i_7 - 2] [i_7 - 3])))) ? (((arr_27 [i_7 + 1]) ? (arr_27 [i_7 - 1]) : (arr_27 [i_7 - 2]))) : ((max(113401598, 1721462642850155995)))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    {
                        var_28 += ((-((9 ? (arr_38 [i_12] [i_12]) : var_8))));
                        var_29 &= ((!var_14) ? (arr_39 [i_10] [i_12] [i_12]) : (arr_45 [i_10]));
                        var_30 *= ((((max((arr_30 [i_11]), (((arr_27 [i_10]) % 16806))))) && 101));
                        var_31 = (max((!var_10), ((-var_3 ? ((3 ? (arr_44 [i_10] [i_11] [i_12] [i_13]) : (arr_24 [i_10] [i_10]))) : (var_12 == -434972828)))));
                        arr_48 [i_12] [i_12] [i_12] [i_12] &= ((28 ? (arr_26 [i_10]) : (arr_26 [i_10])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    arr_53 [i_10] [i_10] [12] = (((arr_43 [i_14 - 2] [i_15] [4]) << (((!(arr_40 [i_10] [i_14 - 1]))))));
                    var_32 ^= (17787410287353250627 | var_16);
                    var_33 = ((((max(1, (((var_2 || (arr_46 [i_14] [i_14] [i_15] [i_15]))))))) & ((min((arr_52 [i_10]), (arr_36 [i_14 + 1] [i_14 - 2]))))));
                    arr_54 [i_10] = (~var_4);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_61 [i_10] [i_10] [i_15] [i_10] [i_10] = var_3;
                                var_34 += ((((arr_40 [i_17] [i_14]) ? ((((arr_32 [i_17] [i_14] [17] [i_14]) ? var_13 : (arr_44 [i_14 - 3] [i_14 - 3] [7] [i_14 - 3])))) : ((var_10 ? 27881 : 31457280)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
