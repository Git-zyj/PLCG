/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = 0;
                        var_20 ^= min(0, 2001);
                    }
                }
            }
        }
        var_21 = var_1;
        arr_10 [i_0] = var_5;
        arr_11 [i_0] = (min(((!(arr_3 [i_0]))), (var_3 && 0)));
    }
    var_22 = var_5;
    #pragma endscop
}
