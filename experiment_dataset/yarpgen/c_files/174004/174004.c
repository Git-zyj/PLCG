/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_13;
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 += (((((((~var_2) < ((4294967291 ? 142 : -748162554)))))) - (min(-3813202053569463785, 22))));
                    var_20 = (max(var_20, ((max((~107), ((18398 ? (arr_5 [i_1 + 3] [i_1 + 3]) : 9795071147227999826)))))));
                    arr_8 [i_0] [i_2] [i_0] [7] = (+((var_3 ? (~-107) : -24)));
                    arr_9 [i_0] [i_1] [i_2] = ((max((arr_5 [1] [i_1 + 4]), 18398)));
                    arr_10 [i_2] [i_2] = var_1;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = ((1023 ? 201 : 3432832111));
        arr_13 [i_3] = var_15;
    }
    #pragma endscop
}
