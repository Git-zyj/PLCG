/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_14 = 2;
                arr_5 [2] |= ((~(((arr_4 [i_1 - 1] [i_1 + 3]) ? 30 : 60454))));
            }
        }
    }
    var_15 = ((((min(var_7, var_8))) > -var_5));
    var_16 &= var_4;
    #pragma endscop
}
