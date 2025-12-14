/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172278
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
    var_14 = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) (short)3173)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3178))) : (var_10))), ((-(1332622863U)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((short) (-(min((1244065152142587911ULL), (1244065152142587888ULL))))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) 3534675621006038322LL)) < (arr_0 [i_0]))))), (min(((+(arr_1 [(unsigned short)9]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)21)))))))));
    }
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)86))));
    var_17 -= ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) min(((unsigned char)200), (((/* implicit */unsigned char) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) - (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
