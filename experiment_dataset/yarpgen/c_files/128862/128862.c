/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_10 -= var_0;
                arr_5 [i_1] [i_1] &= (min((max((~57155), 18446744073709551615)), var_5));
            }
        }
    }
    var_11 = ((var_4 ? ((~(max(4047030851, var_8)))) : ((var_2 ? var_4 : var_0))));
    var_12 = ((var_8 ? (min((min(var_7, var_8)), var_4)) : (max((max(10823, 3624012731)), (~var_2)))));
    var_13 = (((~var_9) ? var_5 : var_2));
    var_14 = var_4;
    #pragma endscop
}
