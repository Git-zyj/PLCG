/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 / 9054998189107179573);
    var_13 = (min(var_13, 9054998189107179562));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_14 = -9054998189107179583;
                        arr_11 [i_1] [i_1] [i_2] [i_2] = (((var_4 ? 19387 : 2097151)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_0] = ((((((-2147483647 - 1) ? var_10 : -9054998189107179591))) + ((+(((arr_3 [i_4] [i_4]) ? -9054998189107179591 : var_5))))));
                            var_15 = (((max((arr_3 [i_0] [i_0]), (9054998189107179549 - var_5))) + (((-(arr_16 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [i_1 + 2]))))));
                            var_16 = ((((-2147483647 - 1) ? 9054998189107179591 : -7372)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                {
                    arr_25 [i_7] = (arr_10 [i_8] [i_0]);
                    arr_26 [i_7] [i_7] = (arr_7 [i_0] [i_0] [i_0]);
                    arr_27 [i_8] [i_7] [i_0] = 33307;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_17 = (arr_35 [i_12 - 2] [i_12 - 2]);
                            var_18 = (arr_29 [i_10]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_43 [i_9] |= (max((((((4294967288 ? (arr_34 [i_14] [i_10] [i_13]) : (arr_37 [i_10] [i_10]))) / 56712))), 9054998189107179556));
                            arr_44 [i_9] [i_9] = (((max(var_8, -2113441676)) ^ ((1470297237 ? (arr_35 [i_13] [i_13]) : (arr_35 [i_9] [i_13])))));
                            var_19 = (((-9054998189107179566 <= ((1 ? -1470297257 : -9054998189107179591)))));
                        }
                    }
                }
                var_20 ^= (arr_35 [i_9] [i_10]);
            }
        }
    }
    #pragma endscop
}
