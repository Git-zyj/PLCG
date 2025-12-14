/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 0;
                arr_5 [i_1] [i_1] = max(((43031 ? ((-941006837 ? (arr_4 [i_0]) : 10)) : var_0)), ((max(((max(17, 1))), 43038))));
                arr_6 [i_1] [i_1] [9] = ((~(arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
