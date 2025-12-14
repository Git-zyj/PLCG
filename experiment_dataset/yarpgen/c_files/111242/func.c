/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111242
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
    var_15 = ((/* implicit */signed char) max((var_8), (var_0)));
    var_16 *= ((/* implicit */unsigned int) 1735958617);
    var_17 = ((/* implicit */_Bool) (~((((_Bool)1) ? ((+(var_13))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((-4947101528690143702LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4947101528690143701LL))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (short)-1))))));
    }
}
