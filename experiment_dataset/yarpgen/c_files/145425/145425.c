/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((~0) != var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 += ((!((min((arr_6 [16]), (arr_6 [16]))))));
                    arr_9 [i_0] [i_0] [i_2] = ((!(arr_4 [i_1 + 1] [i_2 + 2] [i_2])));
                    arr_10 [i_0] [19] [i_0] = (arr_0 [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
