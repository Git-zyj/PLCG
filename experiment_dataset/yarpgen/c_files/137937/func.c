/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137937
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */long long int) ((int) var_9));
    var_12 &= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (short)-32744))));
                var_14 &= ((/* implicit */int) var_5);
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_9))), ((+(var_0)))));
}
