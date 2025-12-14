/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+(min((var_12 & var_12), (1 || var_2)))));
    var_15 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_0 [i_0 + 1]) < ((~(arr_0 [i_0 + 1]))))))));
                arr_7 [i_1] = -110;
                var_17 ^= ((-((max(98, (65518 != 50))))));
            }
        }
    }
    #pragma endscop
}
