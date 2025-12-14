/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 *= (~var_1);
    var_15 = ((~((max((min((-127 - 1), -121)), var_6)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 - 2] [i_0] = ((-((((min(-95, var_12))) ? ((0 ? (arr_3 [i_0] [0]) : -124)) : (((arr_0 [i_0]) ? (-127 - 1) : var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_2] = min((arr_2 [i_2 - 2]), (((min((-127 - 1), (arr_1 [i_2]))))));
                    arr_12 [18] = ((((((((arr_9 [1] [i_0 - 2]) + 2147483647)) << (((((~127) + 141)) - 13))))) ? (arr_1 [i_0 + 2]) : ((var_2 | (min(-274877906944, var_11))))));
                    var_16 = ((-(((((min((arr_3 [21] [i_2 - 1]), (arr_9 [i_0 + 2] [i_0 + 2]))))) * (arr_5 [i_0 + 2] [i_0])))));
                    var_17 += ((max((arr_7 [i_0]), ((-(arr_9 [i_1] [18]))))));
                    arr_13 [i_2] [16] [i_2] = ((((min(var_1, (((arr_3 [i_2] [i_2]) * 127))))) + ((1714092651 ? 113 : 3))));
                }
            }
        }
        arr_14 [i_0] = (((arr_7 [i_0]) ? (((arr_5 [i_0] [i_0]) | 113)) : 4885366364795589314));
        arr_15 [i_0] = var_3;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_18 = (arr_16 [i_0] [i_0] [i_0]);
            var_19 = (min(var_19, (((-(((127 == var_8) ? (arr_0 [i_0 - 1]) : (52 > 0))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] = (arr_0 [i_0]);
                        arr_23 [i_5] [i_5] [i_4] [i_5] [i_0] = (((arr_10 [i_3] [i_3] [i_5]) ? ((~(((arr_18 [i_0] [i_0]) ? (arr_5 [i_5] [i_3]) : 105)))) : ((-var_2 ? (arr_3 [i_4] [i_4]) : ((var_9 | (arr_19 [i_0] [i_4])))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_20 = (((arr_19 [i_6] [i_7]) | ((((arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6] [i_8 - 1]) ? (arr_20 [i_8 + 1] [12] [12] [i_8] [i_0] [12]) : (arr_28 [i_8 + 1] [i_8] [i_8] [i_8]))))));
                        arr_31 [i_6] = (min((arr_1 [i_0 - 1]), ((max((((arr_9 [i_0] [i_0]) <= var_6)), ((var_8 == (arr_1 [i_7]))))))));
                        arr_32 [18] [i_6] [i_8] |= ((~(min(2110707532, (arr_26 [i_0] [i_0] [14] [i_0 - 1])))));
                    }
                }
            }
            arr_33 [i_6] [i_6] [i_0] = ((((-(arr_1 [i_0 - 1]))) >= (((65526 > (arr_1 [i_0 + 1]))))));
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_21 = (max(var_21, (arr_35 [i_9])));
        arr_37 [i_9] = arr_0 [i_9];
        var_22 = (((-var_0 ^ (arr_10 [i_9] [i_9] [i_9]))));
        var_23 += (((((arr_25 [i_9]) ? (arr_25 [i_9]) : (arr_25 [i_9]))) * (!4143654419865309773)));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_24 *= (max(-1937747379, (((((((arr_38 [i_10] [i_10]) | (arr_39 [1])))) || (arr_40 [i_10]))))));
        var_25 += ((-(((-832819494 < (arr_40 [i_10]))))));
        var_26 += (max((((arr_38 [i_10] [i_10]) | (arr_38 [i_10] [i_10]))), (arr_39 [8])));
        var_27 += var_0;
    }
    var_28 = var_6;
    #pragma endscop
}
