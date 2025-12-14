/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_16 = ((((((((var_5 ? -8063443796060483481 : var_5))) ? var_15 : 1))) ? ((var_15 ? var_8 : (32767 & var_11))) : (((min(var_14, var_1))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 ^= (((((arr_7 [i_0] [10] [10] [i_0]) % var_5)) == 132));
                            var_18 = 46162;
                        }
                    }
                }
            }
            var_19 = max((((((min(82, 7534104851394159021))) >= var_10))), (min(((var_2 ? var_4 : var_11)), (((~(arr_3 [i_1] [i_0])))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_15 [i_0] [8] [8] = (((arr_12 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((((var_12 ? var_6 : var_9))) ? (((var_12 ? (arr_6 [i_0] [10] [i_0] [i_5]) : var_7))) : -var_1)) : var_6));
            var_20 = (min(var_20, (arr_3 [i_0] [i_5])));
        }
        var_21 -= (arr_14 [i_0] [i_0]);

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_22 = ((~((var_1 ? (arr_10 [i_6] [9] [i_6 - 1] [i_6] [i_6] [i_6 - 2]) : (arr_10 [i_6] [10] [i_6 - 1] [i_6] [i_6] [i_6 - 1])))));
            var_23 = var_8;
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 = ((var_10 >> var_6) ? (arr_25 [4]) : ((var_5 ? -578642051327002844 : var_9)));
                            var_25 = var_1;
                        }
                        var_26 |= (((((arr_29 [13] [i_10] [13] [i_9] [i_7] [i_7] [18]) ? 5233 : var_8)) % (arr_25 [i_7])));
                    }
                }
            }
        }
        arr_30 [i_7] = ((!(arr_21 [14] [i_7])));
    }
    var_27 = var_9;
    var_28 = var_6;
    var_29 = ((min((var_2 * var_7), var_9)) ^ (~26));
    var_30 = (((-3395553170242246831 * (min(var_10, var_12)))));
    #pragma endscop
}
