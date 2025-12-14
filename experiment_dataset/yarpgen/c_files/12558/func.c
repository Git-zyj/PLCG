/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12558
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) | (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-22630))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))));
                var_14 = var_5;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((short) var_5));
}
