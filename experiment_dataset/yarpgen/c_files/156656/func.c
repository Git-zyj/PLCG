/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156656
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_11)))) ? (((/* implicit */int) var_5)) : (((int) var_2))))) ? (1664902697) : ((+(((((/* implicit */int) var_4)) >> (((var_9) - (2020490751U)))))))));
    var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)14336)) - (14313)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (252459297940626992ULL))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) - (127)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((-359550936) == (((/* implicit */int) (short)-876)))))))) : (max((((/* implicit */long long int) arr_6 [i_0] [i_0])), ((~(arr_0 [i_0])))))));
                var_17 = ((/* implicit */int) arr_5 [i_1] [i_1]);
            }
        } 
    } 
}
