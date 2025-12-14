/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 -= (arr_4 [i_2 - 2] [i_0] [i_2 - 3]);
                    var_16 += ((4294967295 / (arr_2 [i_2])));
                    arr_6 [i_2] = (1898626637543651924 ? -117 : -1072804666);
                }
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
