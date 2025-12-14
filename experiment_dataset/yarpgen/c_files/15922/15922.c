/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((48259 ? 185909456 : (-2067190145421115701 / 2067190145421115686))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 = var_10;
                        var_20 = ((var_4 <= (((-2067190145421115701 + 9223372036854775807) >> (231 - 196)))));
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((arr_5 [i_0] [i_0 + 2] [i_0 - 1] [24]) || (((16383 ? (arr_5 [i_0] [i_0 + 2] [i_0 + 1] [1]) : (arr_5 [i_0] [i_0 - 1] [i_0 + 2] [14])))))))));
        var_22 = (max(13498033579659825218, ((((((arr_3 [i_0]) || var_7)) ? ((-94 ? 115666871 : 115666871)) : var_5)))));
        var_23 = ((3600109298 ? (min((arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 + 2]), 562947805937664)) : (arr_2 [i_0] [i_0] [i_0])));
    }
    var_24 = ((var_11 ? 115666871 : (max(var_7, var_13))));
    var_25 = (var_4 < var_11);
    #pragma endscop
}
