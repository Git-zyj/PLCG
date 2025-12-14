/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((min(-1249, (min(17, 17342792405675709456))))) ? (var_11 / 25716922) : 1841981587)))));
    var_15 = 7602488880644242612;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = var_12;
                var_17 = ((65535 ^ 1841981587) ? (max(1805183783, 60904)) : (!var_10));
                arr_7 [i_1] = (((var_0 >> (-98 + 128))));
            }
        }
    }
    #pragma endscop
}
