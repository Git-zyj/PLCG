/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(17361, ((((4294967295 ? 1 : 1))))));
                var_18 = (1 ? 1 : ((59056 - ((1 ? (arr_2 [i_0] [i_0]) : var_14)))));
            }
        }
    }
    var_19 = (min(var_19, var_2));
    var_20 = (max(var_20, (var_5 <= 4294967272)));
    #pragma endscop
}
