/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = (~1067);
            arr_5 [i_0] [i_0] [i_0] = ((1062 ? (arr_1 [i_0 - 3]) : (~7)));
            var_15 ^= 15;
        }
        arr_6 [i_0] [i_0] = ((((!-1067) ? (arr_3 [i_0 - 3] [i_0 - 3]) : var_9)));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = ((+(((arr_7 [i_2 + 1]) ? -12172 : 251658240))));
        arr_10 [i_2] = (max((arr_7 [i_2 + 3]), (((arr_7 [i_2 + 1]) ? var_3 : (arr_8 [i_2])))));
    }
    var_16 = ((~var_6) ^ (((max(var_7, var_11)))));
    #pragma endscop
}
