/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_11;
    var_21 = (max(var_21, (((~(min(((var_12 ? var_11 : var_13)), var_9)))))));
    var_22 = var_16;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((+(((arr_0 [i_0]) - (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 += (((((arr_0 [i_1]) | (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? 667389879 : 1975361553)) : ((~(arr_1 [i_0]))));
            arr_5 [i_0] [i_1] = ((((max(((4294967279 ? var_9 : (arr_4 [13] [i_1] [i_0]))), (((arr_0 [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))))) ? -255 : (((arr_1 [i_0]) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [1] = ((235 * (((arr_7 [i_2] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            var_24 = (((((255 ? 1 : (!0)))) ? ((((!((((arr_7 [i_0] [i_2] [i_2]) ? (arr_8 [i_0]) : (arr_1 [i_0])))))))) : (((arr_1 [i_0]) ? (arr_7 [i_2] [i_2] [i_0]) : (max(-32, (arr_1 [1])))))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_12 [i_0] = ((((min((arr_11 [i_0] [2] [i_3]), (arr_0 [i_3]))) >> ((0 ? -54 : 1)))));
            arr_13 [i_0] [i_3] [i_3] = (arr_4 [i_0] [i_0] [i_3]);
            arr_14 [i_0] = (((arr_10 [i_3]) ? (arr_10 [i_0]) : (((!(arr_10 [i_0]))))));
            var_25 = ((~((max(1, -2)))));
        }
        var_26 = ((((max((arr_6 [i_0]), (arr_0 [i_0])))) ? (!610302887) : (arr_4 [i_0] [i_0] [i_0])));
        arr_15 [i_0] = (((((min(var_11, (arr_11 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_0]))));
        arr_16 [i_0] = 667389897;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = arr_19 [i_4];
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_27 = (max((arr_22 [i_5 - 1] [i_5 - 1]), (arr_22 [i_5 - 1] [i_5 - 1])));
                        var_28 = ((-((-(arr_24 [i_5 - 1] [9] [i_5 - 1])))));
                    }
                }
            }
        }
        var_29 ^= (((((~(arr_28 [i_4] [i_4] [i_4] [i_4] [13] [2])))) ? var_17 : (max((((arr_23 [i_4]) ? (arr_21 [i_4] [i_4]) : (arr_27 [i_4] [i_4] [i_4] [i_4] [i_4]))), (arr_17 [i_4])))));
        var_30 = (max(var_30, (((-(arr_23 [1]))))));
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_33 [i_8] [1] = (arr_4 [i_8] [i_8] [i_8]);
        arr_34 [i_8] [i_8] = (min((min((arr_1 [i_8]), (arr_1 [i_8]))), (min((arr_1 [i_8]), (arr_1 [i_8])))));
    }
    #pragma endscop
}
