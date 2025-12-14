/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = ((var_2 ? (!var_0) : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((arr_5 [i_0] [i_1]) ? (arr_5 [i_1] [1]) : var_3));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = var_0;
                    arr_10 [i_1] [i_1] [i_1] = (((var_9 ? (arr_5 [i_1] [i_2]) : 1)) | 1);
                    var_12 = ((+((((arr_2 [i_0] [i_0] [i_0]) == (arr_5 [24] [i_1]))))));
                }
            }
        }
        var_13 = var_2;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_14 = ((((1 < (arr_6 [i_3]))) ? (min((arr_0 [i_3]), (arr_0 [i_4]))) : (min((arr_8 [i_3] [i_3] [i_3]), var_3))));
            var_15 = 1;
            arr_16 [i_3] [i_4] = 1;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_16 = (min(0, (min((arr_1 [1]), (0 & 1)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_17 *= ((var_5 & ((1 ? 100 : 1))));
                            var_18 *= ((-(((arr_18 [i_5] [i_7] [i_8]) & ((min((arr_11 [15] [i_5]), var_7)))))));
                        }
                        arr_27 [i_3] [i_5] [i_6] [i_7] = (+-var_8);
                        arr_28 [8] [i_5] [i_7] [i_7] &= ((-(max(2438250313, 1))));
                        var_19 = (arr_17 [i_6]);
                    }
                }
            }
            var_20 = (min(var_20, ((((min((arr_14 [i_5] [i_5] [i_3]), (arr_14 [i_5] [i_5] [i_3]))) << 1)))));
            arr_29 [i_3] [i_5] = -1;
        }

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_21 -= ((~(min((!1), (~var_4)))));
            arr_32 [i_3] [10] [i_3] = (min((~var_5), 1));
            var_22 = (!(((-(arr_31 [i_3] [i_9])))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_23 -= 0;
                        var_24 = (max(var_24, -1));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_49 [1] [i_10] [i_3] [i_14] [i_15] [i_15] = ((1 << (((arr_17 [i_14]) + 374678636180468724))));
                            arr_50 [i_3] [i_10] [i_13] [i_3] [i_15] = (arr_39 [i_3] [1]);
                        }
                    }
                }
            }
        }
        var_25 = (min((min(-6439242967492452002, 1)), (1 | 262147032011367031)));
    }
    var_26 = var_3;
    #pragma endscop
}
