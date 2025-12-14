/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 >> (((+-16383) + 16432))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((min(((((arr_4 [i_0] [i_0] [i_1]) + (-32767 - 1)))), ((-7067966207106391787 ? var_6 : 7067966207106391787)))), 9223372036854775800)))));

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = ((var_10 ? -5004556265095336427 : (arr_4 [i_2 - 2] [i_2 + 4] [i_0 - 2])));
                    arr_9 [i_0] = (((min(var_5, (((-100 ? -121 : (arr_1 [i_0 + 1] [i_2]))))))) | ((((min((arr_1 [i_0 - 2] [i_2]), 100))) ? (max(18446744073709551615, (arr_6 [i_0]))) : (((18446744073709551615 ? (arr_1 [i_0] [i_0 - 3]) : var_4))))));
                    arr_10 [i_0] [i_0] [18] = (((!(((-9223372036854775772 ? 16383 : 100))))) ? (max((((arr_4 [i_2] [i_1] [i_0]) | var_4)), (-32767 - 1))) : (((((((arr_2 [i_1] [i_2]) && (arr_2 [i_0] [i_2]))) || -113)))));
                    arr_11 [i_0] [i_1] [i_1] [i_2 - 2] = (max(((((arr_1 [i_0 + 1] [i_0 + 1]) + (arr_1 [i_0 - 2] [i_0 - 1])))), (((arr_1 [i_0 - 2] [i_0 - 1]) ? -228342552844133526 : 7))));
                    var_15 = (min((~var_2), (-32767 - 1)));
                }
                arr_12 [i_1] = ((((!(arr_4 [i_0 + 1] [i_0 - 1] [3]))) ? (max(-16383, (-32767 - 1))) : (((arr_4 [i_0 + 1] [i_0 - 1] [i_1]) >> (((arr_0 [i_0 + 1]) + 75))))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_16 = (max(var_16, (((var_3 ? ((((arr_5 [i_3] [24] [i_3]) | 88))) : var_6)))));
        var_17 = ((~(~var_6)));
        var_18 -= ((var_6 ? 7067966207106391789 : (arr_5 [i_3] [i_3] [i_3])));
    }
    #pragma endscop
}
