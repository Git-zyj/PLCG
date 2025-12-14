/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((max(3849356565, var_7))) ? 549755813887 : (((max(var_10, 1)))))), (var_15 - var_12)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0] [i_1] = (max((max(((min((arr_1 [i_0] [10]), var_9))), -1)), var_13));
                arr_5 [i_0] = (((max(var_4, 13)) - (min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
