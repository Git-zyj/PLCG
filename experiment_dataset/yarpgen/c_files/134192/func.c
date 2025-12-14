/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134192
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
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 70368744177663ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 8371876270199184451ULL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))))) : (var_15))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_11);
        arr_3 [i_0] = ((/* implicit */long long int) min((((((18446673704965373953ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) - (((((/* implicit */_Bool) (short)-28714)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (4406097790273824958ULL))))), (4887356446206072768ULL)));
        arr_4 [i_0] = var_10;
    }
}
