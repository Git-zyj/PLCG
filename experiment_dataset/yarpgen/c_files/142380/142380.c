/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (2949689405965357185 > (var_1 > 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [8] = (((arr_2 [i_1] [i_0]) >> ((((248 << ((-59192659 ? 1 : 32)))) - 482))));
                var_15 = var_3;
                arr_5 [i_0] [1] = (max(((-(arr_0 [i_0 - 1] [i_1 - 1]))), (arr_0 [i_0] [1])));
                var_16 += (127 ? var_0 : var_11);
            }
        }
    }
    #pragma endscop
}
