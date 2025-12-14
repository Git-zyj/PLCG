/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173833
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) var_10);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_2 [i_0 - 1] [1U]), (((/* implicit */unsigned char) (_Bool)1)))))))) : (((unsigned long long int) (-(((/* implicit */int) (unsigned short)11162)))))));
    }
    var_12 &= ((/* implicit */signed char) var_4);
    var_13 = (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)11162)) : (((/* implicit */int) ((unsigned char) var_7)))))));
}
