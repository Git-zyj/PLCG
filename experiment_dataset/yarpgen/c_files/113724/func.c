/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113724
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
        var_18 *= ((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) << (((((/* implicit */int) arr_1 [i_0])) - (69)))));
        var_19 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_20 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)60012))));
    }
    var_21 = ((/* implicit */long long int) (unsigned short)60008);
    var_22 = ((/* implicit */unsigned char) (+(((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((-5820266712715489299LL), (-3934614044580517002LL)))))));
}
