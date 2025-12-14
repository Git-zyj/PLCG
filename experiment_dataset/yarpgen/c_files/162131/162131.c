/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(arr_1 [i_0])));
        arr_5 [i_0] = (arr_2 [i_0]);
        arr_6 [i_0] = (arr_3 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 |= var_4;
                        var_20 = arr_8 [0] [i_1];
                    }
                }
            }
        }
    }
    #pragma endscop
}
