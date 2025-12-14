/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(15457798403103007095, 4309165121121810202));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((((((385640845 < (arr_5 [i_0] [2] [i_2] [i_1]))))) < 122));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((-(65532 != 2988945670606544496)));
                    arr_9 [i_0] [i_0] [i_0] = -9084574105906724267;
                    var_21 ^= (-(((32048 / (arr_6 [i_2] [i_1] [i_0])))));
                }
            }
        }
        arr_10 [i_0] = (((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));
        var_22 = (min(var_22, ((((!0) ? (((max((arr_6 [i_0] [i_0] [i_0]), (-127 - 1))))) : (min((!51), ((var_14 ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))))))))));
        var_23 = ((max(15457798403103007095, (((var_19 ? 117 : -5243894378697105889))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_24 = (max(var_24, ((min((((min(var_6, var_19)) / ((min(-3006679717440512237, 4449512255809372812))))), (arr_12 [i_3] [i_3 + 2]))))));
        var_25 = (((((!(((var_11 << (((var_9 + 2129037381) - 15)))))))) << (-5477169256512531206 + 5477169256512531237)));
        var_26 = (((arr_11 [i_3 + 1] [i_3 + 1]) - 10803221373072434168));
        arr_14 [i_3] [i_3] = ((+((min((var_12 || var_12), var_14)))));
    }
    #pragma endscop
}
