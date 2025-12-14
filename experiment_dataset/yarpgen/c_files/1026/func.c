/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1026
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((266741617) << ((((+(((((/* implicit */_Bool) (signed char)18)) ? (var_3) : (((/* implicit */int) var_4)))))) - (1506537641)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)0)))), (max((((((/* implicit */int) var_4)) * (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (unsigned char)235))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)-30)), (min((((/* implicit */long long int) var_8)), (7931622142870108599LL)))));
}
