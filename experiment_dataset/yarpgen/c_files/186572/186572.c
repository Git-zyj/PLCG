/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 186;
    var_21 = ((-((75 << (var_7 + 100)))));
    var_22 = ((~((var_5 ? ((var_13 ? var_18 : var_3)) : var_10))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_23 = ((((((~63) ? (((max((arr_2 [i_0] [i_0]), 191)))) : (arr_1 [i_0])))) ? var_7 : (53 >= 179)));
        arr_3 [i_0] = min((arr_0 [i_0]), -9);
        var_24 ^= ((((-(arr_0 [i_0]))) != (max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = (((40 & 7286) || var_17));
            arr_9 [i_2] [i_2] [i_1] = ((~(arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_1] [1] = (arr_11 [i_1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_25 = (max((max((min((arr_11 [i_1]), var_17)), ((max(var_18, (arr_16 [i_5] [15])))))), ((((arr_10 [i_3] [22]) ? (arr_10 [i_4] [i_5]) : (arr_10 [i_1] [i_3]))))));
                        arr_18 [i_4] [i_4] [i_4] [i_1] [6] [i_1] = ((((max((arr_7 [i_5]), var_3))) ? (arr_7 [i_1]) : (((arr_7 [i_1]) ? (arr_7 [i_3]) : 58117))));
                        var_26 = (min(var_26, var_19));
                    }
                }
            }
            var_27 = ((-(min((~69), (arr_0 [i_3])))));
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            arr_23 [1] [i_1] = (arr_14 [i_1] [i_6]);
            var_28 = (max((((arr_6 [i_1] [i_6] [i_6]) ? var_1 : (arr_6 [i_6 + 4] [i_1] [i_1]))), (((arr_6 [i_1] [i_1] [i_6]) ? (arr_6 [i_1] [19] [18]) : (arr_6 [i_1] [i_6 - 2] [i_6])))));
            arr_24 [i_1] = var_9;
        }
        var_29 = var_6;
        var_30 |= (arr_4 [i_1]);
    }
    var_31 = ((((max(var_6, (max(var_3, 52390))))) ? var_12 : ((-(max(var_12, var_13))))));
    #pragma endscop
}
