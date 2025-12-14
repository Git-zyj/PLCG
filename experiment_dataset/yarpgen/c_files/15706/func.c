/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15706
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_7)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)38)) || (((/* implicit */_Bool) -1612313036))));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) != (1710897875))))) >= (min((arr_0 [(unsigned short)8]), (((/* implicit */unsigned long long int) (short)2590)))))) ? (((long long int) ((((/* implicit */_Bool) 815546587)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned short)4910))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)101)), ((short)-4529)))) : (((/* implicit */int) (unsigned char)250)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min(((((_Bool)1) ? (-1908700201725530114LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))), (((/* implicit */long long int) var_1))));
    }
}
