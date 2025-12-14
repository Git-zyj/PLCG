/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_5);
    var_21 &= (max((((var_3 || ((((var_15 + 9223372036854775807) >> var_12)))))), (~var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_22 = 43;
                var_23 = (max(var_23, ((((var_1 + 9223372036854775807) << (((((arr_2 [i_1] [i_0]) ^ (arr_4 [i_0] [i_1] [16]))) - 80)))))));
            }
        }
    }
    #pragma endscop
}
