/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174801
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (1LL)))) ? (((/* implicit */unsigned long long int) max((0), (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (13955232039380786017ULL) : (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))), (var_7))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) && (var_9)))), (max((((/* implicit */long long int) (unsigned short)12433)), (6871872411248551333LL))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 17199849814676948299ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0])) * (4491512034328765598ULL)))) ? (((((/* implicit */_Bool) arr_1 [(short)0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) 37097756U))));
        var_17 = ((/* implicit */_Bool) 37097756U);
        var_18 = ((/* implicit */short) arr_0 [0]);
    }
    var_19 = ((/* implicit */unsigned char) var_10);
}
