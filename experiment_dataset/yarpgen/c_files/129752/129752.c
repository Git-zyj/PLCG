/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] |= 2880455809;
                var_10 = (min(var_10, (((((min((arr_1 [i_1]), 46020))) ? (((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1]))) : (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_11 = (((((249 ? ((var_6 ? 912894044 : 1)) : 1))) ? 17827 : var_7));
    #pragma endscop
}
