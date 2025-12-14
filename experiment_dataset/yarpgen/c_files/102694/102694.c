/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((var_9 > ((~((-70 ? (arr_8 [5] [11]) : 10747465452050366666))))));
                    arr_11 [i_0] = 64;

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_11 &= (max((!2147483647), (max(((var_1 ? var_8 : var_4)), (((!(arr_15 [9] [i_1] [i_2] [i_2]))))))));
                        var_12 -= (arr_8 [i_0] [i_1 - 1]);
                    }
                    var_13 -= (max((((7100019937790585406 ^ (arr_13 [7] [7])))), (((var_9 ? (var_5 / var_3) : (66 / 3))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_14 = (max(var_14, (((2094082777 && (arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                            var_15 ^= ((-((var_9 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_16 [10] [7])))));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_16 = (((-927602581 ? var_3 : (arr_17 [6] [i_2] [i_2] [i_6]))));
                            var_17 = (arr_18 [i_0] [i_0] [10] [10] [i_6 + 2]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = (max(var_18, (arr_17 [i_1] [i_1 - 1] [i_1] [7])));
                            var_19 = (((~(arr_19 [i_0] [i_7]))));
                            arr_25 [3] [3] [1] [3] [i_7] = ((!(1832417379 > var_3)));
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            var_20 = 2147483647;
                            var_21 = 7100019937790585406;
                        }
                        var_22 = (arr_16 [i_0] [i_0]);
                        var_23 = (((arr_21 [i_1 + 1]) ? (arr_21 [i_1 + 1]) : (arr_21 [i_1 - 1])));
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        var_24 = (min(var_24, (((((max((((-2147483647 - 1) & 2147483647)), ((16 ? 1 : 32767))))) ? (min((arr_31 [i_9] [i_9]), var_2)) : (-2147483647 - 1))))));
        arr_32 [i_9] = ((+(min((arr_31 [i_9 - 1] [i_9 - 1]), var_1))));
    }
    #pragma endscop
}
