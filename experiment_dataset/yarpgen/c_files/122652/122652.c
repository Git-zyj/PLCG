/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (((((arr_5 [i_2] [i_2] [i_2] [i_0]) ? (arr_5 [i_2] [i_2] [11] [i_2]) : (arr_5 [i_0] [i_2] [i_2] [i_1]))) > (min((arr_4 [i_0] [i_1] [i_2]), 425854026))));
                    arr_9 [i_2] = (min((((7680 ? 4294967295 : -24118))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_6 [i_1] [i_2])))));
                    arr_10 [i_2] = var_2;
                }
            }
        }
    }
    var_14 += ((-93 ? ((((var_7 && var_12) && (((-29979 ? -1238720820 : 30830)))))) : var_0));
    #pragma endscop
}
