/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (var_2 ? var_4 : (((17907307614047794829 ? 539436459661756786 : 18446744073709551615))));
    var_14 -= ((((((var_7 ? var_4 : var_9)))) ? (((0 ? 12360248491638516659 : var_8))) : (min(13, ((0 ? 539436459661756795 : 2450807019))))));
    var_15 = (min(var_15, ((13 ? (min(var_6, ((var_7 ? 18414742738815030891 : var_4)))) : var_5))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((18446744073709551613 <= ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [10]) : (arr_0 [i_0] [i_0]))))));
        var_17 = ((arr_1 [i_0]) << ((((9142994626118254911 ? 539436459661756786 : 134217720)) - 539436459661756732)));
        var_18 = (min(var_18, (((-(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] = arr_3 [i_1];
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = 3707826543012362074;
                        arr_18 [i_1] [i_1] [i_3 + 2] [i_4 - 2] = (arr_15 [i_1] [i_2 + 1] [i_1] [2]);
                    }
                }
            }
        }
        arr_19 [i_1] = (((arr_6 [i_1] [i_1]) - (arr_6 [i_1] [i_1])));
        var_19 *= (arr_2 [i_1]);
    }
    #pragma endscop
}
