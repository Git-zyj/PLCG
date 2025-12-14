/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1124
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
    var_19 &= 2119008318417725417LL;
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2119008318417725418LL) - (-2119008318417725417LL)))) ? (((/* implicit */int) var_5)) : (var_4)))) && (((/* implicit */_Bool) var_17))));
    var_21 = ((/* implicit */unsigned int) (-(min((max((((/* implicit */long long int) var_3)), (-2119008318417725418LL))), (min((var_0), (((/* implicit */long long int) var_2))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((2119008318417725407LL), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (-2119008318417725395LL) : (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) 2119008318417725417LL)))), ((!(((/* implicit */_Bool) var_17))))))))));
        var_23 = max((arr_2 [i_0]), (((((((/* implicit */unsigned long long int) -94396295)) - (var_7))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)2556), (((/* implicit */short) arr_0 [i_0])))))))));
        var_24 = ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 33292288LL))))), (((((/* implicit */int) (unsigned char)20)) * (((/* implicit */int) var_15))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) (~((-2147483647 - 1))))), (((unsigned int) var_7)))));
        arr_4 [i_0] &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)26391)))) - (max((((/* implicit */unsigned long long int) var_11)), (18443356329605539284ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_16), (-33292283LL))) != ((~(-1LL)))))))));
    }
}
