/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 281474943156224;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] = -18446462598766395392;
                    arr_8 [i_1] [i_1 - 2] [i_1] = (arr_0 [i_0]);
                    var_13 = (((-((((arr_6 [i_0 - 3] [i_1] [i_2] [i_2]) <= var_6))))));
                    var_14 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
