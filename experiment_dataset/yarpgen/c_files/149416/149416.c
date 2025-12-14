/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 1577073328;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1 + 3] = (((~(arr_3 [i_0 - 1] [i_1 + 4]))));
                var_12 = (1 && 2717893968);
            }
        }
    }
    var_13 = var_2;
    var_14 = (max(((var_5 ? var_9 : 1)), var_4));
    #pragma endscop
}
