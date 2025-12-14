/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184799
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)65531))))), (var_2)))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_1)) - (111)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((arr_1 [i_0 - 3] [i_0]), (arr_1 [i_0 + 1] [i_0]))));
        var_15 = ((/* implicit */unsigned char) max((min((var_0), (((/* implicit */unsigned long long int) var_8)))), (min((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (min((var_10), (((/* implicit */unsigned long long int) (short)-4477))))))));
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned short) var_10);
    }
    var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((((/* implicit */int) (unsigned short)11789)) - (11774))));
}
