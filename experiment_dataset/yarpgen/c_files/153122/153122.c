/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (((max((-674460348 - var_5), 22198)) != -674460345));
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_10 [i_1] = min(var_9, 22198);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_18 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] = ((+(((arr_11 [i_1] [i_2] [i_1]) ? (arr_15 [i_4]) : -1572967616713112131))));
                        var_17 = (max(var_17, (((!(arr_9 [i_2 - 1] [i_3 + 1]))))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_21 [i_1] [15] = ((((((min((arr_17 [i_5] [i_5] [i_5] [8]), 1572967616713112121))) ? 60 : (max(1572967616713112130, 8102185033604769746)))) >= -22172));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((((min(-25, 22198))) != (~-7669794536518598068))))));
                            var_19 &= arr_26 [i_5] [i_5] [i_5] [i_5] [i_5];
                            var_20 *= ((((((arr_26 [i_1] [i_5] [i_6] [15] [i_8]) | 1572967616713112130))) ? ((max((arr_17 [i_8] [i_5] [4] [i_7]), -67))) : (arr_20 [i_6])));
                            var_21 += -22198;
                        }
                    }
                }
            }
            arr_30 [i_1] [i_1] = max(((!(arr_28 [i_1] [1] [i_5] [i_5] [i_5]))), (!1649189091));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_1] = (min(-7103784062643306977, -998104383));
            var_22 = (min(var_22, var_16));
            arr_34 [i_1] [i_9] = (((((998104370 * ((35534 ? (arr_26 [i_1] [i_1] [i_9] [i_9] [i_9]) : (arr_32 [i_1] [i_1])))))) ? (((!(arr_12 [i_1])))) : ((112 ? 998104370 : 380635465))));
        }
        var_23 = (max(var_23, var_14));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_24 = (((arr_22 [i_10] [i_10] [i_10]) || -67));
        arr_37 [i_10] = (arr_16 [i_10] [i_10] [i_10] [1]);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_25 ^= 70677320;
        var_26 = (max(var_26, (((((min(582359487, 6706256433124479386))) ? (arr_38 [i_11]) : ((((arr_25 [i_11] [i_11] [i_11] [i_11] [18] [i_11]) || (!-7103784062643306977)))))))));
    }
    var_27 = (min(var_27, (((2173107787 ? ((((((var_4 ? 7669794536518598067 : 22172))) || var_4))) : 1)))));
    #pragma endscop
}
