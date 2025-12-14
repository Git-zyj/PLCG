/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(var_8, (max(1, var_0)))), (((min(1, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 |= (((~var_5) ? 111 : ((((arr_7 [22] [i_1 - 3] [i_1 - 2]) ? -92 : -92)))));
                    arr_9 [i_0] [i_0] = (arr_6 [22] [i_1 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
