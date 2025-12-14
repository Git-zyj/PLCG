/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 25;
    var_13 = ((((((min(var_11, var_8))) ? (min(2988936694972758958, 0)) : 96)) << (var_9 + 84747961)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 ^= -71;
                var_15 = var_5;
            }
        }
    }
    var_16 = (min(-9, var_6));
    var_17 = (min(((max((!var_5), (1 == 71)))), ((~(((!(-127 - 1))))))));
    #pragma endscop
}
