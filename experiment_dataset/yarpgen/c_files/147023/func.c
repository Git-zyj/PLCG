/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147023
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
    var_16 = ((/* implicit */short) ((1U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62707)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((8502308925546729117ULL) / (4ULL)))))))) : (var_10)));
    var_18 += ((var_14) * ((+(24ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) 131071LL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) (+(min((((/* implicit */long long int) 2146435072U)), (131040LL)))));
                var_20 += ((/* implicit */short) ((int) ((unsigned long long int) var_1)));
            }
        } 
    } 
}
