/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 &= (min(12224, 192));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] |= (((-(max((arr_11 [0] [i_1]), (arr_10 [i_0] [5] [i_2] [i_0]))))) - ((((arr_6 [i_0] [2] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_1] [i_3]) : (((arr_10 [6] [i_1] [4] [i_3]) ? 1 : 4294967294))))));
                            arr_13 [i_0] [1] [i_2] [i_0] [i_1] [i_0] = (((!248) ? ((var_12 ? (arr_9 [i_0]) : (arr_9 [i_0]))) : (((min(0, 0))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((min((min(var_1, 11507283448600837565)), 16))) ? ((((((var_7 ? var_4 : var_10))) ? (2552915230 || 7) : var_15))) : (min((208 * 65535), var_2))));

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 = 2;
        var_19 &= (max((((3 ? -7483004295062462187 : 1))), (((arr_14 [i_4]) & ((1 ? 61379 : (arr_14 [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (((((min(var_4, -7605248420133916775))) ? var_14 : (1 == -11419))));
        var_20 = ((1 ? 1 : -16));
    }
    var_21 = var_13;
    var_22 = var_8;
    #pragma endscop
}
