/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (~6133549044207245305);
                var_14 = ((((arr_0 [i_0]) ? (arr_2 [i_0] [13]) : 162)));
                arr_6 [i_0] [9] [i_1] = (max(92, 24695));
            }
        }
    }
    var_15 = ((9920816687176796369 ? ((max(-24695, 93))) : (4317464366572528561 && 6964415535518199265)));
    #pragma endscop
}
