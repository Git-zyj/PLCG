/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(126, (~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_11));
                var_20 = ((-446247225395921409 ? (max(-4, (arr_2 [i_0 - 2] [i_1]))) : var_9));
                arr_7 [6] &= (((arr_2 [i_1 - 3] [i_0 + 1]) <= 446247225395921409));
            }
        }
    }
    #pragma endscop
}
