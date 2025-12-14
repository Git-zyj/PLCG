/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [5] = (min((arr_2 [i_0]), (!var_1)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_10 = (((max(var_7, 3114888497))));
                        arr_13 [i_3] [i_3] = (((~-var_5) ? (min(223, (arr_7 [16] [16]))) : var_0));
                        var_11 = (((var_5 || 3114888497) ? 3114888484 : 61));
                    }
                }
            }
        }
        var_12 = 3114888497;
    }
    var_13 = (max(var_13, var_3));
    var_14 |= 1180078828;
    #pragma endscop
}
