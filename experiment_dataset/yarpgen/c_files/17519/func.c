/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17519
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)19482))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2421292170U)) ? (9381749021839950699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (1617091020))))))));
        var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) (-((+(509141650)))));
        arr_6 [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 10758338384813868732ULL)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (474314767))));
    }
    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_16)))) ? (max((((/* implicit */long long int) var_17)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
