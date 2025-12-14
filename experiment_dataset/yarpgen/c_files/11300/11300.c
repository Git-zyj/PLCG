/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2] = ((-((max(var_2, 18446744073709551615)))));
                    arr_8 [i_0 + 1] [i_1 - 2] [i_1 - 4] [i_2] = var_3;
                }
            }
        }
    }
    var_11 *= -1559658055;
    #pragma endscop
}
