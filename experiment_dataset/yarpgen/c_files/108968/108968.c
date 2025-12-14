/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (var_11 ? 0 : ((((max(var_4, var_10))) ? (!var_1) : -var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = min(32767, var_0);
                    var_17 ^= (~16);
                    arr_7 [i_0] [i_0] [i_1 + 2] [i_2] = (min((max(1920, 559432131)), ((min(-32747, (!var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
