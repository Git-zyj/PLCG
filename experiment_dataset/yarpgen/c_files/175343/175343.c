/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (min(var_8, (var_8 || -7915224587279287716)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((-118 ? 7915224587279287718 : 58975));
                var_20 = 1605590141;
            }
        }
    }
    #pragma endscop
}
