/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0]);
                var_20 = ((min(2501710952219493319, -28017)));
                arr_6 [i_1] = ((min(28017, var_10)));
                arr_7 [i_1] = (max(((((arr_0 [i_1 - 1]) || var_4))), ((~(arr_0 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
