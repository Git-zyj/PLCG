/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((30319 ? -6549110622599334014 : 6)));
                var_11 = ((18391276850824961269 ? 674940586 : -32767));
            }
        }
    }
    var_12 = var_1;
    #pragma endscop
}
