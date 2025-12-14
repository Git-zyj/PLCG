/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144111
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
    var_15 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15742))));
    var_16 = ((/* implicit */long long int) (+(var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) || (((_Bool) arr_0 [18ULL] [i_1])))))));
                var_18 -= (short)32640;
            }
        } 
    } 
}
