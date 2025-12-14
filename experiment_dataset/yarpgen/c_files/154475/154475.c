/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((((!((max(3851875846777296861, 16)))))), -0));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 -= (((min(16109, (((-17 ? 49548 : 15987))))) - (!1181504855015518110)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 = (max(var_12, (((-54851 ? (arr_9 [i_1 - 1] [i_1] [i_1] [i_0]) : var_3)))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] &= (((((((min(-32751, 15982)))) / 81382225)) > (((29 ^ var_9) ? ((1 ? 3229014905 : 1033491341)) : var_9))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_2] [i_0] = ((49523 % (arr_0 [i_1 - 1])));
                        arr_16 [6] [i_0] = (((var_1 / 92) * (((arr_7 [i_1] [i_0] [i_1 - 1] [i_4] [i_1] [i_2]) ? 2944823363 : 4))));
                    }
                    arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = 1065952390;
                    var_13 = ((54851 | ((((((arr_8 [i_0] [i_1 - 1]) * 4))) ? ((65535 ? (arr_9 [i_1 - 1] [i_1] [i_2] [i_0]) : (arr_14 [4] [i_2]))) : (((((arr_7 [i_0] [i_1] [i_1] [i_2] [i_1 - 1] [i_0]) || -124))))))));
                }
            }
        }
    }
    var_14 -= ((-(((-125 + 2147483647) << (((var_2 + 113) - 6))))));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] [i_5 + 1] = -5678381897213142844;
        var_15 = (min(var_15, (var_2 - 1727377099)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_16 = (max(var_16, (((-3229014905 - ((((arr_18 [i_6]) ? 226 : 1))))))));
        var_17 += ((~(arr_18 [i_6])));
    }
    var_18 = (max((var_10 / 65535), ((var_0 ? (~-2997652443301626606) : ((15782041566481404862 << (var_1 - 31)))))));
    #pragma endscop
}
