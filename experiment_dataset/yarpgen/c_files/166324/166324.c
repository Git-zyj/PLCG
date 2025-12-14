/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_3 <= 3120707175);
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_3));
                    var_19 += ((0 <= (arr_7 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = (max(var_21, 1697553328));
    #pragma endscop
}
