/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((20846 ? 50 : 2606539871));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_3 [6] = (~-42);
        arr_4 [i_0] [i_0] = -545916251;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (-2066580869 & var_7);
        arr_8 [13] = (arr_6 [i_1] [i_1]);

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_16 = (48843 ? 94 : 545916237);
            var_17 = (49 <= 2066580841);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_3] = (min(11, 13));
            arr_15 [i_1] [i_3] [i_1] = 3;
            var_18 = 339249719;
        }
    }
    var_19 = var_9;
    var_20 = var_3;
    #pragma endscop
}
