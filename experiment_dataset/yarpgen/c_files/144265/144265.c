/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(21215, 1)), (!40459)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (max(65526, ((max(var_13, (arr_1 [i_1] [i_2]))))));
                    var_18 = (max(var_18, (arr_2 [i_0] [i_1] [i_2 + 3])));
                }
            }
        }
    }
    var_19 = (max(((min(((min(-118, 1))), var_13))), (max(44311, 1))));
    var_20 *= (min(var_8, var_0));
    #pragma endscop
}
