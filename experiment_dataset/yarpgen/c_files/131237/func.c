/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131237
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_14))))));
                arr_5 [(unsigned short)4] [i_1] = arr_1 [i_1 - 1];
                var_18 = ((/* implicit */short) max(((~(-5LL))), (((/* implicit */long long int) ((unsigned int) (~(722429413843415307ULL)))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */short) (-(((((/* implicit */long long int) var_7)) + (5LL)))));
    var_20 = ((/* implicit */_Bool) var_15);
    var_21 = ((/* implicit */unsigned int) (+((+((+(var_11)))))));
}
