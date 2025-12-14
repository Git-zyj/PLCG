/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_3 ? var_15 : var_9)), (48 / -11232)));
    var_17 = ((var_4 ? var_7 : var_12));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [0] &= ((!(((41 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_0;
        var_19 *= (arr_4 [i_1]);
        var_20 = var_5;
        arr_6 [i_1] [i_1] = -19827;
        var_21 = ((~((max(-27, 36974)))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_3 [i_2 - 3] [i_2]) > (arr_3 [i_2 - 1] [i_2 - 1])));
        var_22 = (var_5 / var_7);
        arr_11 [i_2] [i_2 - 4] = (arr_1 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_23 = (((-599 ? -204068254 : (arr_7 [i_3]))));
                    var_24 -= (((arr_7 [i_5]) ? var_2 : (arr_8 [i_3] [i_5])));
                }
            }
        }
        arr_20 [i_3] = (var_6 % -var_2);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_25 = ((((var_15 ? var_2 : (arr_21 [i_7]))) - ((((arr_15 [i_6]) && (((var_5 ? 58 : 0))))))));
                    arr_27 [i_3] [0] [i_3] |= (((arr_21 [i_7]) - var_3));
                }
            }
        }
    }
    var_26 = 241;
    #pragma endscop
}
