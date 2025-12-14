/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159193
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_13))));
    var_15 += ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */long long int) var_9)) : (4503599627370484LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (var_13))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (((((!(((/* implicit */_Bool) -334616855)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)65), ((signed char)2))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))))));
        var_16 = ((/* implicit */_Bool) var_9);
    }
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((min(((_Bool)1), (var_10))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (-7664393816667863022LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) : (var_13)));
}
