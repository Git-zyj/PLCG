/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(65530, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 -= (arr_1 [i_0]);
        arr_2 [i_0] = var_9;
        arr_3 [i_0] = ((-((-(arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [4] [i_2] = var_2;
                    var_12 = (((~65535) ? (arr_7 [6] [i_2 + 3] [i_0]) : (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] = (arr_11 [i_2 + 3] [i_2 + 3] [17] [i_2 + 4]);
                                var_13 |= (var_0 ? var_5 : var_8);
                                arr_17 [i_4] = 65530;
                            }
                        }
                    }
                }
            }
        }
        var_14 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_15 ^= ((var_0 ? (max(((~(arr_5 [i_5]))), var_8)) : -var_9));
        arr_21 [i_5] = 0;
        var_16 = ((6 ? 4146234920 : 148732376));
        var_17 &= (((!117) ? (arr_12 [10] [i_5] [10]) : var_2));
    }
    var_18 = 8197623648808078530;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    arr_30 [i_6] = var_5;
                    arr_31 [i_8] = ((!(arr_29 [i_6] [i_7 - 2] [i_6])));
                    var_19 = (arr_4 [i_8 - 1] [i_7 + 2]);
                    var_20 ^= ((~(arr_15 [i_6] [4] [10] [i_8 - 1] [i_7] [2])));
                    arr_32 [i_6] [i_6] [i_8] = (arr_0 [i_8 + 2] [i_7 - 2]);
                }
                var_21 = (arr_10 [i_6] [7] [i_6] [i_6]);
            }
        }
    }
    var_22 |= -18727;
    #pragma endscop
}
