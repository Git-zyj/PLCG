/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 - 4] [i_0] = ((((-2147483618 ? 17 : (((arr_5 [i_0] [i_1] [i_2] [i_1]) ? (arr_5 [3] [i_1] [i_1] [i_0]) : (arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_2]))))) >> ((min((arr_5 [i_2] [i_2] [i_0 + 1] [i_0 - 3]), (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 2]))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_0 - 4]);
                    var_18 |= (max((min((arr_1 [i_0 - 2] [1]), var_1)), (((arr_1 [i_0 - 4] [12]) & (arr_1 [i_0 - 4] [10])))));
                    var_19 += ((((((arr_1 [i_2] [6]) * (arr_6 [i_2] [i_1] [i_0 - 4])))) && ((var_17 > (arr_2 [i_1] [i_1] [i_2])))));
                }
            }
        }
    }
    var_20 = (min(var_20, 0));

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = ((((((var_12 && (arr_9 [i_3]))))) > (max(var_16, (arr_10 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_22 += min((max((arr_15 [i_5] [i_3]), (arr_15 [i_4] [i_4]))), ((((arr_15 [i_3] [i_3]) && (arr_15 [i_5] [i_5])))));
                    arr_16 [i_3] [i_4] [i_3] [i_3] = ((min((arr_13 [i_3] [i_5]), (arr_13 [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_23 = (!2147483617);
                                arr_24 [i_3] [i_7] [15] [i_6] [i_3] = 1073741823;
                            }
                        }
                    }
                }
            }
        }
        var_24 += (((((max((arr_20 [10] [i_3]), (arr_20 [2] [i_3]))))) % ((var_11 ? ((-40 ? 1843308046 : (arr_13 [i_3] [i_3]))) : (((var_1 ? (arr_19 [16] [16] [i_3]) : (arr_13 [i_3] [i_3]))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_25 ^= (arr_11 [i_8]);
        arr_28 [i_8] = (arr_12 [i_8]);
    }

    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        arr_32 [i_9 + 2] [i_9] = ((((max(var_11, (arr_6 [i_9] [i_9] [i_9 + 1])))) | 2147483632));
        var_26 = (arr_3 [i_9 + 1] [i_9]);
        var_27 = ((((((min(var_5, (arr_0 [i_9] [i_9]))) / (min((arr_31 [i_9]), (arr_15 [i_9 + 2] [19])))))) / (((((var_15 ? (arr_2 [i_9 - 2] [i_9 - 2] [i_9 - 2]) : (arr_6 [i_9] [15] [i_9])))) ? var_0 : (max((arr_19 [i_9] [i_9] [i_9 - 1]), (arr_29 [i_9])))))));
        arr_33 [i_9] [i_9] = (min((arr_13 [i_9 - 1] [i_9 - 3]), ((((((arr_15 [i_9] [i_9 + 2]) << (((-1444549628 + 1444549655) - 27))))) ? -2147483610 : 1))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_28 ^= (!(arr_0 [i_10] [i_10]));
        var_29 = var_9;
        arr_37 [12] &= (685912516 <= var_11);
        var_30 = ((var_7 ? (arr_13 [i_10] [i_10]) : var_13));
    }
    #pragma endscop
}
