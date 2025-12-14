/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 59006;
    var_12 = (max(var_12, 12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (((arr_3 [i_0]) >= var_4));
                    arr_8 [i_0] [i_1] [i_2] |= ((((~(arr_2 [i_0]))) % 1));
                }
            }
        }
    }
    #pragma endscop
}
