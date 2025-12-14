/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (((-7646416173055067377 ? 1 : 14641)));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0 + 2] = ((38531 ? (((((arr_0 [i_0 + 2]) <= (3015332423522801166 - 29329))))) : (min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))));
    }
    var_11 = ((((28 ? (((-22201 ? -6391 : 9258))) : 1398279227917358177)) < 10920));
    var_12 |= 2539;
    #pragma endscop
}
