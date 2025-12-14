/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129111
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~(var_4))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4032))))) << (((((/* implicit */int) ((unsigned short) var_10))) - (43293))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0LL)))))));
            }
        } 
    } 
}
