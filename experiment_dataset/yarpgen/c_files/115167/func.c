/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115167
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) var_2);
                var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) -793181076);
    var_23 -= ((/* implicit */_Bool) ((int) ((unsigned short) var_10)));
}
