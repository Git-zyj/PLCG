/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((min(6120, var_6))));
                var_17 ^= (min(((-(32767 < 96))), ((max((var_4 > 18185441126001872299), (!var_10))))));
            }
        }
    }
    #pragma endscop
}
