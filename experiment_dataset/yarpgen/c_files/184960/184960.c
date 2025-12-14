/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = 29;
                    var_15 = -28;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = arr_3 [i_3] [i_3];
        arr_11 [i_3] = ((+(((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])))));
        var_16 = arr_5 [i_3] [i_3];
    }
    #pragma endscop
}
