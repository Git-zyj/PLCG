/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(var_0, var_2))) ? var_18 : ((743702503 ? var_0 : var_10))))) / ((~((var_16 ? var_4 : var_11))))));
    var_20 = var_18;
    var_21 = (((((((3294998163 ? var_2 : 999969132))) ? (max(var_13, var_1)) : var_13))) ? ((var_13 ^ (~743702503))) : 58352);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 -= (min((arr_1 [1]), (((((min((arr_0 [14]), var_16))) && ((max((arr_1 [6]), (arr_1 [14])))))))));
        var_23 = (((((-((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? ((((((arr_1 [i_0]) ? var_14 : (arr_1 [i_0])))) ? (((arr_0 [i_0]) * var_4)) : (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (((arr_1 [i_0]) ? ((3239108180 ? var_7 : (arr_1 [i_0]))) : var_9))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [14] = ((709946862 + (arr_4 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] = (~(arr_1 [i_2]));
            var_24 = (arr_7 [i_2]);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_17 [i_4] [0] [i_4] = (arr_10 [10] [i_3]);
                        arr_18 [i_1] [8] [6] [i_4] = (~var_9);
                    }
                }
            }
            arr_19 [i_1] [i_3] = (((arr_10 [i_1] [i_1]) ? (arr_3 [9] [i_1]) : (~746472732)));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_25 = (arr_1 [i_1]);
            arr_22 [i_1] [i_1] [6] |= ((678109548 < (arr_9 [3] [i_6])));
            arr_23 [i_1] [i_1] [i_1] = (-(arr_0 [i_1]));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_26 = (arr_21 [2]);
                            var_27 ^= (((arr_6 [i_1] [i_1] [i_7 - 2]) | (~var_17)));
                        }
                    }
                }
            }
            var_28 = (0 + 3931473335);
        }
        var_29 |= var_10;
        var_30 |= (((arr_4 [i_1] [i_1]) ? 3035041060 : ((-746472748 ^ (arr_24 [i_1] [i_1])))));
        var_31 = (((arr_6 [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : -1));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_32 = ((((var_5 - (arr_15 [i_10] [i_10] [i_10] [i_10]))) == (((((~(arr_10 [i_10] [10])))) ? (arr_4 [i_10] [i_10]) : (~26)))));
        var_33 = (max((((-(arr_15 [i_10] [i_10] [i_10] [i_10])))), ((+(((arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_33 [i_10]) : (arr_3 [i_10] [i_10])))))));
        var_34 = (min(var_34, (min(((((((var_2 ? (arr_28 [i_10] [i_10] [i_10] [i_10]) : 32176))) ? 140 : (arr_20 [i_10])))), (max((((var_8 ? var_0 : (arr_0 [i_10])))), (arr_28 [12] [i_10] [13] [10])))))));
        var_35 = (arr_0 [i_10]);
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_37 [i_11] = ((-((((max(var_5, 4294967295))) ? 144 : (max((arr_1 [i_11]), 4294967295))))));
        arr_38 [13] = ((((max((arr_34 [16]), (arr_34 [i_11])))) ? (((arr_34 [i_11]) ? (arr_34 [i_11]) : (arr_34 [i_11]))) : var_4));
    }
    #pragma endscop
}
