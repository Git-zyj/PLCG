/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 0;
        var_12 = -4294967292;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [5] [i_0] [i_0] [i_0] = (min((4294967292 <= 4294967294), ((max(var_9, (arr_4 [i_0] [i_0] [i_0]))))));
                    arr_10 [i_0] [i_0] = (max(((((min(972444824, (arr_4 [i_0] [i_0 + 3] [i_0])))) ? (((-(arr_0 [i_0] [i_0])))) : ((var_2 ? (arr_6 [i_1]) : (arr_4 [i_0] [i_1] [i_0]))))), ((((arr_0 [i_0] [i_1 + 2]) ^ (arr_8 [i_1] [8] [i_1 + 2] [10]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_13 = (((arr_15 [i_3] [i_3]) ? (arr_11 [i_3] [13]) : var_3));
            var_14 ^= ((1 ? (arr_11 [i_3] [i_4]) : (arr_11 [i_3] [i_4])));
            var_15 = ((var_3 ? (arr_13 [i_3]) : (arr_13 [i_3])));
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_26 [i_8] [i_3] [i_3] [1] = (~1);
                            var_16 = ((3322522488 ? ((~(arr_14 [i_8] [12] [i_3]))) : (arr_11 [i_5 + 1] [i_5])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((224 ? (arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1]) : 0)))));
                            arr_33 [3] [3] [i_3] [i_10] = ((-0 ? (arr_32 [i_3] [i_3] [i_5 + 1] [i_9] [i_10]) : ((((arr_22 [i_5] [i_6] [19] [i_10]) * (arr_11 [18] [i_6]))))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [3] = ((~(arr_22 [i_3] [i_3] [i_3] [i_5 - 1])));
                        }
                    }
                }
                var_18 = (arr_25 [i_3] [i_5] [i_3]);
                var_19 &= ((3322522471 ? 255 : 0));
            }
            arr_35 [i_3] [i_3] = var_11;
            arr_36 [i_3] [i_3] [i_3] = ((var_11 ? (arr_20 [i_5 + 1] [i_5 + 1] [i_3] [i_5]) : (arr_20 [i_5 + 1] [i_5] [i_3] [i_3])));
        }

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_20 = (min(var_20, (arr_20 [i_3] [i_3] [i_11] [i_11])));
            var_21 = (arr_28 [1] [i_3] [14] [i_3]);
            var_22 = (min(var_22, 0));
        }
        arr_41 [i_3] = (arr_22 [i_3] [10] [i_3] [i_3]);
        arr_42 [i_3] = (((((21 ? -60 : var_10))) ? ((~(arr_32 [i_3] [i_3] [i_3] [i_3] [1]))) : ((((arr_19 [15] [6] [6] [i_3]) ? (arr_28 [i_3] [i_3] [i_3] [i_3]) : (arr_17 [i_3] [i_3] [12]))))));
    }
    var_23 *= (min(((min((var_6 == var_5), var_7))), ((19 ? 21 : var_0))));
    var_24 = 0;
    var_25 = (min(var_25, var_11));
    #pragma endscop
}
