/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1103
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned int) arr_0 [11LL]);
        var_17 *= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */long long int) var_12)), (607066688118180980LL))))));
        var_18 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (1010065438U)))) ? (max((((/* implicit */long long int) arr_0 [i_0])), (607066688118180984LL))) : (((/* implicit */long long int) 4119458092U)))) >> (((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_6)))), (((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0])) - (29596))))))) - (29534LL))));
        arr_3 [(short)0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) || ((!(((/* implicit */_Bool) 1414638612U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (var_15)))));
        arr_4 [i_0] = arr_0 [(short)1];
    }
    var_19 &= (((-(var_10))) % (4095LL));
}
