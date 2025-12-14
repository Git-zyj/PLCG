/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= (((arr_9 [i_0] [i_0]) ? var_2 : (arr_7 [i_0] [i_1] [i_2])));
                    var_15 = var_7;
                    arr_10 [i_0] [i_1] = ((2080374784 ? 0 : 2080374784));
                    var_16 -= var_5;
                }
            }
        }
    }
    var_17 = (23519343 * 1);
    #pragma endscop
}
