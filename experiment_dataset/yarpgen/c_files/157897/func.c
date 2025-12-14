/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157897
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11808))))))))));
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)28))));
                var_14 = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
}
