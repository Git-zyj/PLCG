/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= max(var_11, ((var_14 ? var_14 : (-23 + -1307024348))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (min((((((var_8 ? (arr_0 [i_0]) : 32094))) ? ((-(arr_4 [i_0]))) : (arr_4 [i_0]))), ((-(arr_2 [i_0] [i_0])))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [5] = (min((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]), var_4)), 118));
                    var_16 = (max(var_16, (((var_6 && ((max((arr_8 [i_0] [i_0] [i_0]), ((min((arr_1 [i_2 + 2]), (arr_7 [14] [i_1] [i_2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
