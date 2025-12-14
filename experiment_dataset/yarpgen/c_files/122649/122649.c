/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((4987667123213384864 ? 0 : (arr_2 [i_0 - 2])));
                var_14 = (max(871782811, -4987667123213384855));
                arr_7 [i_0] [2] [i_0] = arr_2 [i_0 - 1];
            }
        }
    }
    var_15 = var_8;
    var_16 = var_10;
    #pragma endscop
}
