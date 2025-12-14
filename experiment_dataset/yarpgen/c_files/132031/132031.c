/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-168, ((max(1620278895, (~-60))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (((((((arr_4 [i_0 + 1] [i_0 - 1]) ? var_7 : (arr_4 [i_0] [i_0 + 2]))) + 2147483647)) >> ((((arr_4 [i_0] [i_0 + 3]) && 1)))));
                var_14 ^= (max(((~(((-9223372036854775807 - 1) | var_9)))), 9223372036854775784));
                arr_8 [i_0] [i_0] = (min((min(-var_5, (~var_8))), ((max((min((arr_1 [i_0]), (arr_3 [i_0]))), (((arr_1 [i_1]) << (-7130630248360553656 + 7130630248360553658))))))));
            }
        }
    }
    #pragma endscop
}
