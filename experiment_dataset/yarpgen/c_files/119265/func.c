/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119265
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((((/* implicit */_Bool) 16383)) && (((/* implicit */_Bool) (unsigned char)110)))))))) * (((long long int) (!(((/* implicit */_Bool) (signed char)38)))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) ^ ((+(min((6849282436650783547LL), (((/* implicit */long long int) (signed char)45))))))));
            }
        } 
    } 
}
