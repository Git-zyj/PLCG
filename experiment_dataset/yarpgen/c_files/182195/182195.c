/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = max((16771572014194686148 - 113981727991408051), (((!(((var_10 ? 18446744073709551615 : var_4)))))));
    var_14 &= (-18446744073709551615 ? var_1 : (var_8 * 15));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = arr_3 [i_0 - 1] [i_0 - 2];
                arr_5 [i_1] [i_1] = ((((~(((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_0] [i_0]) : 262143))))) ? (arr_3 [i_0] [i_0 - 2]) : (min(16, ((((arr_0 [i_0 - 2] [i_1]) || (arr_2 [i_1] [i_1])))))));
                arr_6 [i_1] = var_11;
                arr_7 [i_1] [i_1 - 1] = ((~10475430475461332157) ? (((arr_3 [i_1 - 1] [i_1 + 1]) / (arr_3 [i_1 - 1] [i_1 - 2]))) : (max((max(8, 7971313598248219470)), (((arr_3 [i_0] [13]) ? 12478818454751368820 : 0)))));
            }
        }
    }
    #pragma endscop
}
