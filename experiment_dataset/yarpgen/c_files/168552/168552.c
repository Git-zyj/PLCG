/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = var_5;
                var_22 = (max(var_22, (((((((((arr_4 [i_0] [i_0] [12]) - (arr_4 [16] [i_0] [16])))) ? -27656 : (arr_3 [0]))) & var_19)))));
                var_23 += (((((0 ? 1 : 19675))) ? (!27656) : (arr_1 [1])));
            }
        }
    }
    #pragma endscop
}
