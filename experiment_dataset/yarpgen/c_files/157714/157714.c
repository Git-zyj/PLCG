/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_12;
                    var_20 = (max((((-(~252)))), (((arr_7 [i_2 + 1] [i_2 + 1]) ? (arr_7 [i_2 - 1] [i_2 - 1]) : 9201))));
                }
            }
        }
    }
    var_21 = var_12;
    var_22 |= (-3728707279 - 7400);
    var_23 *= max(((((max(7168, var_15))) ? (~var_5) : (max(var_5, var_6)))), var_1);
    var_24 = var_7;
    #pragma endscop
}
