/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (min((min(((4 ? -6622044862899027112 : (arr_0 [4]))), 1619530062)), (arr_4 [i_0] [13] [i_0])));
                var_11 = (~(((arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]) : var_8)));
            }
        }
    }
    var_12 = 6622044862899027114;
    var_13 = var_6;
    var_14 = (min(var_14, (((-12 ? ((max(var_0, 6622044862899027116))) : -6622044862899027109)))));
    var_15 |= ((var_9 ? (((91 ? var_7 : 1))) : (!var_8)));
    #pragma endscop
}
