/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131833
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (402653184U)))) ? (((/* implicit */unsigned long long int) 2137497091778502465LL)) : (((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_3)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2940029021540871130LL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
        var_17 -= ((/* implicit */long long int) var_3);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_18 -= ((/* implicit */int) (!(((min((((/* implicit */long long int) (short)30756)), (-26LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16296))))))))));
        var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) / ((+(max((var_5), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    var_20 = ((/* implicit */unsigned short) max(((~(((var_2) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
}
