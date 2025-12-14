/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= -var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (min(var_18, (((!-16777216) ? var_0 : (arr_2 [i_0])))));
        var_19 = -16777216;
        arr_4 [i_0] = ((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            {
                arr_9 [1] [i_1] [i_1] = ((((-16777217 ? 510 : -16777216))) ? ((-(arr_7 [i_2 + 1] [i_1 - 2]))) : ((-(arr_7 [i_2] [i_1]))));
                arr_10 [i_1] [i_2] = min((!16777216), -371527955);
                arr_11 [i_1] [i_2 - 1] = min((max((arr_6 [i_2 + 1] [i_1 - 1]), (arr_6 [i_2 - 1] [i_1 + 2]))), (arr_6 [i_2 + 1] [i_1 - 1]));
            }
        }
    }
    var_20 = max((max(-1785234480, ((1533146719 ? 1995089168 : 371527955)))), -2147483644);
    #pragma endscop
}
