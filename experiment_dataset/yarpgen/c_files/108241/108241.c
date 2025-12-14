/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((65531 ? 7582363286940580341 : 0));
                    var_17 = (min(var_17, -var_6));
                }
            }
        }
    }
    var_18 = ((var_0 ? ((7582363286940580341 ? -149548226 : 736358963)) : ((var_10 >> (((min(-149548218, var_0)) + 149548227))))));
    var_19 += var_6;
    #pragma endscop
}
