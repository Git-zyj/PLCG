/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14609
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_12)))) ? ((+(((/* implicit */int) (unsigned short)41312)))) : (((((((/* implicit */int) (signed char)-100)) + (2147483647))) << (((2612635545751280820LL) - (2612635545751280820LL)))))))), (max((-3061321152472470971LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - ((~(arr_0 [i_0 + 1] [i_0]))))) : ((((~(arr_0 [i_0 + 1] [i_0]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
        var_17 ^= var_3;
        arr_3 [i_0] = ((/* implicit */unsigned int) 6876882514709716536LL);
        arr_4 [i_0] [i_0] = ((15819146106073514445ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-5397362372669088430LL), (((/* implicit */long long int) 1739205113U)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */int) (signed char)101))))))))));
    }
}
