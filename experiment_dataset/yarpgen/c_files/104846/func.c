/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104846
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-795080) : (((/* implicit */int) (signed char)-73))))) ? ((((-2147483647 - 1)) ^ (((/* implicit */int) var_7)))) : ((-(2147483647)))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63))));
        arr_3 [i_0] = 320698916;
        arr_4 [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49))) == (18385817584230450586ULL)));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */unsigned short) var_1);
}
