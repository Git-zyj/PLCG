/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((max(var_14, ((max(var_0, -54)))))), (~var_5));
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 += ((((-(arr_3 [i_1 + 2] [i_1 - 1])))) && var_6);
                    var_23 = (max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_0 [15] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
