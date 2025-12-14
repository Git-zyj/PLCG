/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_2 [i_0])));
            var_18 = var_4;
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_19 = var_7;
            var_20 = ((-(((!(arr_0 [i_2 + 2] [i_0]))))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_21 = (((arr_4 [i_2 + 2] [i_2 + 2]) ? 49958 : (arr_4 [i_2 + 3] [i_2 + 3])));
                arr_10 [i_0] [i_0] [i_0] [i_0] &= (arr_0 [i_2 + 3] [i_3]);
                var_22 ^= (((arr_6 [i_2 + 1] [i_2 - 1]) + (arr_3 [i_0])));
            }
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_13 [i_0] = ((!((var_7 || (arr_8 [i_0])))));
            arr_14 [i_4] = ((var_12 ? ((-92334693 ? var_1 : -1119251532)) : var_9));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 = (min(var_23, ((((arr_22 [i_0] [i_5] [i_6]) - (arr_7 [i_0] [i_0]))))));
                        var_24 = (max(var_24, (((var_14 ? ((-86 ? 6473342167550877742 : var_9)) : (arr_17 [i_0] [i_6] [i_7]))))));
                        arr_23 [i_0] [i_7] [i_0] [i_0] = (((arr_4 [i_0] [i_0]) & (arr_4 [i_0] [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((1119251506 ? (((arr_15 [i_6] [11]) * -32529)) : 62494));
                        var_25 = ((-1119251506 ? -var_9 : (arr_20 [i_0] [i_5] [i_6] [7])));
                        var_26 = (max(var_26, ((((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]) <= var_6)))));
                    }

                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_27 ^= (~((var_13 ? (arr_4 [i_6] [i_0]) : 85)));
                        var_28 = (min(var_28, ((((arr_6 [i_9 - 1] [i_9 + 2]) * (arr_2 [i_9 - 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
