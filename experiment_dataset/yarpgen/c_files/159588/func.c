/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159588
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
    var_11 -= var_3;
    var_12 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)2))))) && (var_8))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-622008215)))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && ((_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (+((+((((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13375)) * (((/* implicit */int) var_6))))) : (((unsigned long long int) (unsigned short)17539))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-48))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17539))) : (arr_1 [(signed char)3]))), (((/* implicit */unsigned long long int) (signed char)-68))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (4751148810587315295ULL)))));
    }
}
