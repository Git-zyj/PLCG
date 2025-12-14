/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 &= 31;
                        var_14 += ((((!(arr_1 [i_1 + 1])))));
                        arr_12 [i_2] = (((arr_0 [i_0]) ? (((-(arr_3 [i_1 - 1] [i_1])))) : (arr_5 [3] [i_1 - 1])));
                    }
                }
            }
        }
        var_15 = (~65535);
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        var_16 = (((!(arr_14 [i_4 + 1]))));
        var_17 = (arr_13 [i_4]);
    }
    for (int i_5 = 4; i_5 < 8;i_5 += 1)
    {
        arr_19 [i_5 + 3] [i_5 + 2] = -1;
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_18 = (min(var_18, var_4));
                        arr_27 [i_6] [5] [i_6] = 1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_19 = (max(var_19, -1));
                    arr_34 [i_9] [i_9] [i_10] = ((((((0 * -31) ? (((arr_23 [i_10] [i_9] [i_5]) ? 540334409 : var_9)) : (arr_32 [i_9] [i_9] [10] [i_9])))) ? (min(21, ((6067612780296844362 ? var_3 : (arr_23 [i_10] [i_9] [i_5]))))) : (min(684409796, (arr_18 [i_5])))));
                    arr_35 [i_10] [i_10] |= (((min((((!(arr_32 [i_10] [i_5 + 3] [i_10] [i_5])))), (arr_13 [i_9])))) ? (!65535) : (((arr_22 [i_5] [i_5 - 3] [i_5 - 1] [i_5]) * (arr_26 [i_5 - 3] [i_5] [i_5]))));
                    var_20 = (max(var_20, 186));
                    arr_36 [i_5 - 3] [i_9] [10] = (~((((arr_23 [i_5 + 1] [i_9] [i_5]) >= (arr_18 [i_5 - 4])))));
                }
            }
        }
    }
    var_21 = (max(var_5, -1));
    #pragma endscop
}
