/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] &= (min(((min(var_9, 134217727))), 15199689044848964798));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_13 += ((4214131228 ? (var_1 | var_10) : 805306368));
                    var_14 += ((var_5 ? (~1296955289486076092) : (arr_7 [i_0 + 2])));
                }
            }
        }
    }
    var_15 = (min(var_5, ((var_12 ? var_11 : 805306366))));
    #pragma endscop
}
