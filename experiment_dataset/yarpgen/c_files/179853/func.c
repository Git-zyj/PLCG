/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179853
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
    var_15 = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (var_14) : (4ULL)))), (((/* implicit */unsigned long long int) var_9))));
    var_16 = ((/* implicit */short) (+(((((/* implicit */int) var_11)) >> (((-1236560453) + (1236560483)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_7)))) >= (((/* implicit */unsigned long long int) min((33552384U), (((/* implicit */unsigned int) -1236560443))))))) ? (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) var_6))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-1236560453))))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((unsigned long long int) arr_2 [i_0])) << (((((((/* implicit */_Bool) (+(18446744073709551611ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1236560443) : (((/* implicit */int) (short)-7440)))) : (((/* implicit */int) ((_Bool) var_4))))) + (1236560459))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_12)))) : ((((_Bool)0) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_1))))));
    }
}
