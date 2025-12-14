/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138317
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
    var_18 = ((/* implicit */unsigned char) var_4);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967295U))) % (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (6294185685375252680LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) ((int) (unsigned short)65535)))), (var_5)));
                var_21 = ((/* implicit */unsigned long long int) var_1);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)7);
            }
        } 
    } 
}
