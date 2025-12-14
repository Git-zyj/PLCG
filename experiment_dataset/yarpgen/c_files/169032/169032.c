/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (((arr_5 [i_2] [i_1] [i_0]) ? ((min((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_2] [i_2] [i_2])))) : ((max((arr_5 [i_2] [i_1] [i_0]), var_13)))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((var_9 ? (var_12 / 17619) : (((arr_6 [i_1] [i_1] [i_1] [i_1]) ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
