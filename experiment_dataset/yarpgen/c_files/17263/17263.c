/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(var_11, var_1));
        var_12 = (min(var_0, var_8));
        var_13 ^= (max(30491, 0));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_14 = (((((((~(arr_2 [i_1] [i_1]))) ^ (arr_3 [i_1 + 2])))) ^ (min((arr_1 [i_1]), (var_2 & -1)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (((((~((var_3 ? var_4 : (arr_5 [i_1] [i_1]))))) + 2147483647)) << (((((~1) + 8)) - 6)));
            arr_8 [i_1] |= (((((((var_3 ? 0 : (arr_7 [7] [i_2])))) ? (((-64 ? 56 : 63))) : 2855766022)) | 65535));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {
                        var_16 ^= var_9;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_17 = (((arr_9 [i_1]) > var_8));
                            var_18 = (((arr_7 [i_4] [i_6]) ? var_3 : (arr_4 [i_5 - 3] [i_1 + 1])));
                            var_19 = ((((((arr_15 [i_1] [i_3] [14] [i_5 + 1] [i_6]) | var_5))) ? (1758129827 != -22) : (arr_10 [i_3] [i_5 - 3] [i_6])));
                            var_20 = (((arr_7 [i_1 + 1] [i_5 - 2]) <= (arr_5 [i_1 + 2] [i_3])));
                            var_21 = (max(var_21, (((~(arr_16 [i_3] [i_6] [i_6]))))));
                        }
                        arr_17 [i_5] [i_3] [i_3] = (arr_3 [i_1 + 1]);
                    }
                }
            }
            var_22 = (((arr_12 [i_1] [i_3]) ? (arr_7 [i_3] [i_1]) : ((((arr_3 [i_1 - 1]) ? var_9 : (arr_2 [i_1] [i_1]))))));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_23 = (max(var_23, (((var_5 / (max(var_5, ((var_7 ? 3774843870978252567 : var_2)))))))));
                    var_24 = (max(var_24, (arr_24 [i_9] [i_8] [i_7])));
                    var_25 = ((~(~134217727)));
                }
            }
        }
    }
    var_26 = -var_0;
    var_27 = ((var_0 ? ((((~0) ? var_4 : (var_7 > var_2)))) : ((((var_0 ? -1194755713 : var_6)) ^ (~-1194755722)))));
    #pragma endscop
}
