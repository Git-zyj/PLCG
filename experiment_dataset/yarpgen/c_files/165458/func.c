/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165458
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
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((long long int) var_14)));
                var_16 = ((/* implicit */unsigned int) ((174574311) / (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_3)), (arr_0 [i_0])))))));
                var_17 *= ((/* implicit */unsigned char) (signed char)127);
            }
        } 
    } 
}
