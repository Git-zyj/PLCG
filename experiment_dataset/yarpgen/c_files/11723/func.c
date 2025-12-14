/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11723
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
    var_18 = ((/* implicit */short) var_12);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (var_15) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((int) var_12)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        var_21 |= ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((962470642795951642LL) - (962470642795951636LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0 + 1]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_17);
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1382848408128303063LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62576))) >= (((((/* implicit */_Bool) 831691082564169127ULL)) ? (((/* implicit */unsigned long long int) 4294967276U)) : (7691835120610394209ULL)))))))));
}
