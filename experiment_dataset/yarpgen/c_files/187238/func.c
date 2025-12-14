/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187238
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
    var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) : (var_10)));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32765))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)28))))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = var_16;
        var_21 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))) < (max((min((((/* implicit */unsigned int) (unsigned char)41)), (1467204559U))), (((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0])))))));
        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) ((4ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))), (var_3)));
    }
}
