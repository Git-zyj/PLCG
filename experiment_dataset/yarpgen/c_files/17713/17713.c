/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_8);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (arr_1 [6]);
        var_20 = ((~(((arr_1 [i_0]) + var_9))));
        arr_2 [i_0] [8] = ((arr_1 [1]) ? (arr_1 [1]) : var_8);
        var_21 = (((var_2 > 7996719451605197656) - (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = var_7;
        arr_6 [i_1] = ((~(arr_5 [22])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 = (((arr_8 [i_2] [i_2]) ? (((~(arr_4 [i_2] [i_2])))) : (arr_1 [4])));
        var_24 += ((var_8 + (arr_7 [i_2])));
        var_25 = (min(var_25, (arr_4 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_26 = ((10140751954870636279 ? 0 : 36696));
                        arr_15 [i_5] = (arr_3 [i_5]);
                        var_27 = ((((((var_10 ? 1 : 232)) ? (((arr_9 [i_5] [i_3] [i_2]) ? 240884849 : var_6)) : (((-(arr_5 [i_5]))))))));
                        var_28 = (((((-(arr_13 [1] [i_3] [i_4] [5])))) ? var_11 : ((((((-23812 ? -52 : -56)) + 2147483647)) << (((arr_13 [i_2] [i_3 - 3] [i_4] [i_5]) - 248))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_29 = (min((arr_18 [i_6]), (((arr_16 [8]) ? (arr_16 [i_6]) : (((arr_16 [7]) ? var_2 : (arr_17 [i_6] [i_6])))))));
        var_30 = (arr_1 [i_6 - 2]);
    }
    #pragma endscop
}
