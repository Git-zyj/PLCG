/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -2147483632;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1 + 1] [8] &= 41;
                    var_18 ^= (max((arr_3 [i_2 + 1]), 65525));
                    arr_7 [i_0] [i_1 - 1] [i_0] = -1808180443;
                    arr_8 [i_0] [i_1] [i_0] = ((+(max((arr_0 [i_0 - 1]), (min(25288, 10420119570712910463))))));
                }
            }
        }
    }
    #pragma endscop
}
