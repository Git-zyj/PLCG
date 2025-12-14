/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 59776;
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 -= (((((max(var_10, -246057875)))) % ((-246057875 ? (arr_0 [i_1 + 2]) : ((~(arr_1 [3])))))));
                arr_5 [i_0] = (((((max(var_15, -246057875)) >> ((((0 ? 246057887 : 2147483647)) - 2147483622)))) ^ ((max(968322954, (-9223372036854775807 - 1))))));
            }
        }
    }
    #pragma endscop
}
