/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((2730592832977448882 + 2147483647) >> (var_9 - 152526631)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 &= arr_0 [i_1 - 1];
                var_12 &= (arr_4 [i_0] [i_0]);
                arr_6 [i_0] = (((((var_3 ? var_1 : 6397))) < (((max((arr_5 [i_1 - 1]), var_5))))));
                arr_7 [3] [i_0] [i_1] &= (arr_5 [i_0]);
                var_13 = (min((min(-var_9, -6397)), (((~var_6) | (~-6397)))));
            }
        }
    }
    #pragma endscop
}
