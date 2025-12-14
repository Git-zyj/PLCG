/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [8] [i_2] = (arr_3 [i_0]);
                    var_10 = (-6663679528803575559 <= 77);
                }
            }
        }
    }
    var_11 = (((((15646115774824511215 ? 6732942259950861313 : 0))) ? ((1 ? 1 : 1)) : (!-1)));
    var_12 = (1 | 1);
    #pragma endscop
}
