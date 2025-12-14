/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_9);
        var_20 = ((var_16 ? (((((arr_1 [i_0]) >= (arr_0 [i_0]))))) : var_8));
        var_21 = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_7 [5] [i_2] [i_2 - 1] = ((~(((520093696 > (arr_5 [i_2 + 3]))))));
            var_22 = (min(0, -6));
            var_23 = (min((((var_16 >= (arr_1 [i_2])))), ((min((arr_4 [i_2 + 2]), (!1))))));
            var_24 = (max(var_24, (((1 ? ((~(arr_4 [i_2 + 3]))) : (arr_4 [i_2 + 1]))))));
        }
        arr_8 [i_1] = ((((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (arr_0 [i_1]) : (arr_0 [i_1])));
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_25 = (max((var_0 + var_0), ((49843 ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3])))));
        var_26 |= var_4;

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            arr_14 [i_3] = ((((arr_12 [i_4 + 1] [i_4 + 1]) & var_17)));
            var_27 = (arr_9 [i_4] [i_4 - 1]);
        }
        var_28 = (max(var_28, (((((arr_11 [i_3] [4] [i_3]) ? 175 : (arr_12 [i_3] [i_3])))))));
        arr_15 [i_3] = 1;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_29 ^= (81 ? -1935412642 : 3494146175);
        var_30 = ((!(arr_9 [i_5 + 2] [i_5 + 1])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_23 [i_6] [i_7] = (arr_16 [i_5 - 3]);
                    arr_24 [i_5] [9] [i_7] [i_7] = ((((((arr_9 [i_6] [i_5]) / var_4))) ? ((1836932413 ? -1935412642 : 80)) : (1 || var_14)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_31 = 62;
        arr_27 [i_8] = (-var_2 - var_9);
    }
    var_32 = var_10;
    var_33 = (var_12 * -2968911734);
    #pragma endscop
}
