/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((-(((arr_1 [i_0]) * var_6)))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_16 = (((((arr_3 [i_1]) || var_13))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_17 = ((max((arr_2 [2] [2] [i_1 - 3]), -49)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((arr_12 [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4]) % var_13))) ? (min((arr_7 [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 - 1]), (arr_12 [i_4] [i_4 + 2] [i_4] [i_2] [i_2]))) : -63)))));
                            arr_14 [i_4 + 2] [i_4] [i_3] [i_4] [i_4 - 1] [i_4 - 1] = var_2;
                        }
                    }
                }
                arr_15 [1] [11] [i_0] &= (((~((max((arr_8 [i_2] [i_1 - 3] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                var_19 ^= (arr_0 [i_2] [3]);
                var_20 = ((var_5 ^ (min(((((arr_13 [i_2] [i_1] [12] [i_2] [i_2]) | var_3))), -var_5))));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_21 = 22;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_25 [20] [20] [i_5] [i_1] [i_0] = (max((((arr_24 [i_7] [i_6] [i_5] [i_0] [i_0] [18]) / (arr_24 [i_7] [i_6] [i_5] [i_1 - 3] [i_0] [i_0]))), (((arr_24 [i_0] [6] [i_5] [6] [6] [i_7]) % var_2))));
                            var_22 = (min(((((arr_21 [i_1 + 1] [i_1] [i_5] [19] [0] [i_7]) * var_3))), (arr_21 [i_0] [i_1 - 3] [i_1] [i_1] [i_7] [i_7])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_33 [i_9] [i_9] = ((((arr_6 [i_0] [i_0]) > 0)));
                        var_23 -= (arr_0 [i_1] [i_8]);
                    }
                }
            }
            var_24 = (((max((min(3407862507, 0)), -76)) == 0));
        }
        arr_34 [0] |= -1;
        var_25 += ((((arr_21 [9] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [9] [i_0]) : var_11)));
    }
    var_26 = (~-var_6);
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_27 = var_10;
                    var_28 = (arr_41 [i_11] [i_11] [i_11]);
                    var_29 |= ((var_10 || ((((((arr_7 [i_12] [i_11 - 1] [12] [i_10]) ^ -1)) | (arr_26 [i_12] [i_11 + 1] [i_10] [i_10]))))));
                    arr_44 [11] [0] [i_11] = var_13;
                }
            }
        }
    }
    #pragma endscop
}
