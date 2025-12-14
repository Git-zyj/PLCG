/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 ^= var_13;
                var_17 &= ((!(((-((241 % (arr_1 [i_1]))))))));
            }
        }
    }
    var_18 = ((-(var_13 || var_9)));
    #pragma endscop
}
