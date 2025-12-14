/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 = (~(!0));
            var_15 = (max(var_15, 3135317035));
            var_16 = ((min(var_6, (arr_1 [i_1]))) - ((((((-(arr_1 [i_1])))) ? (arr_1 [i_1]) : (arr_0 [i_0] [i_1])))));
            var_17 = (min(var_17, (arr_1 [i_1])));
        }
        var_18 = (arr_2 [i_0] [i_0]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 *= (arr_4 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_20 = (arr_7 [i_4] [i_3] [i_2]);
                    arr_10 [i_2] = arr_8 [i_2] [i_3] [i_2];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_21 += ((var_9 ? (((-1563102762570564870 - (arr_16 [i_2] [i_3] [i_4] [i_5] [i_6])))) : (((((arr_5 [i_2] [i_3 - 1]) && 125867644)) ? (min(1563102762570564870, 24213)) : 1048874295))));
                                var_22 = max((arr_16 [i_2] [i_2] [i_2] [i_5] [i_6]), (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]));
                            }
                        }
                    }
                    var_23 *= var_6;
                    arr_17 [i_2] [i_2] [i_2] [i_2] = (arr_15 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_20 [i_7] = (min((arr_19 [i_7] [i_7]), 262143));
        var_24 = (max(var_24, ((((max((!var_5), (~5401530114193124288)))) ? var_7 : var_7))));
        var_25 = (min(var_25, (arr_18 [10] [10])));
        var_26 = ((7158467338809471357 ? -5669034798955155984 : 3524254798));
    }
    var_27 = (max((!var_13), ((1099338368083062377 ? 0 : (~256)))));
    var_28 = 52418;
    #pragma endscop
}
