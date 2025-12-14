/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (22352 < 43184);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 ^= (arr_7 [i_2] [0] [0] [i_0 + 1]);
                    arr_9 [i_0] = ((-(((!(arr_2 [i_0] [i_1 + 2]))))));
                    var_19 -= (29930 || 187);
                    var_20 -= 146947729676072499;
                }
            }
        }
    }
    var_21 ^= var_8;
    var_22 = var_7;
    #pragma endscop
}
