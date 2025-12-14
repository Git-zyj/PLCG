/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = arr_0 [i_0];
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_18 += (arr_7 [i_1] [i_2 + 2] [i_1]);
                    var_19 = (((-(arr_9 [i_2] [i_1]))));
                }
            }
        }
        var_20 = (4294967295 && (((+(min((arr_7 [i_1] [i_1] [i_1]), var_7))))));
        var_21 = -108;
    }
    var_22 = (var_11 ? -var_10 : var_2);
    var_23 = (min(((((!1) ? ((var_5 ? var_14 : 31)) : (var_7 || 1)))), var_10));
    #pragma endscop
}
