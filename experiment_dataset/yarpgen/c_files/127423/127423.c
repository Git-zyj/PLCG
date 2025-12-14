/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = 231;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 |= 12662;
        var_17 = ((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [3])))) ? (max(((max(-12662, var_5))), ((var_13 ? var_9 : 16912085066094531362)))) : (-12663 / 25969)));
        var_18 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((((-(arr_1 [i_0]))) / (arr_1 [i_0])));
        var_19 *= ((((min(255, 39566))) * ((((arr_1 [i_0]) < (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (max(((((0 ^ 32563) % ((255 ? (arr_5 [i_1]) : (arr_5 [i_1])))))), (max((arr_0 [i_1] [i_1]), (!251)))));
        arr_7 [i_1] = ((~(max((((-(arr_2 [i_1])))), (((arr_5 [i_1]) ? (arr_1 [i_1]) : var_9))))));
        arr_8 [i_1] = (arr_4 [i_1] [i_1]);
        var_20 = var_9;
        var_21 |= (arr_0 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_22 = (arr_10 [i_2]);

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_23 = ((32581 * ((((arr_10 [i_2]) < (arr_10 [i_2]))))));
                    arr_16 [i_2 + 1] [i_2] [i_4 + 1] [i_4] = ((+(((-12662 % -12674) ? -32564 : (-126 * 0)))));
                    var_24 -= (min((((!(arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 1])))), (((arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 2]) ? (arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 2])))));
                }
                arr_17 [4] [i_3] |= (((max(((-(arr_14 [9]))), ((max(213, 25941))))) / (arr_11 [i_2] [i_2] [i_3])));
            }
        }
    }
    #pragma endscop
}
