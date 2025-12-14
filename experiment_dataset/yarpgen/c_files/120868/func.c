/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120868
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) var_9);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((var_15), (((/* implicit */unsigned long long int) (_Bool)1)))) >= (((unsigned long long int) 3618964181U)))))));
        arr_3 [(unsigned char)9] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) var_2)));
    }
    var_20 = ((/* implicit */long long int) (short)11922);
}
