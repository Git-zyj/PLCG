/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138238
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) 0U);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20099)) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45436)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-21)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)45423)) - (45397)))))) : (((((/* implicit */_Bool) 2147483647)) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) -647571502)), (5578805028742762214ULL)))))));
        arr_5 [i_0] [i_0] = ((arr_0 [i_0]) != (arr_0 [i_0]));
    }
    var_21 = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) (unsigned short)11347)) ? (var_14) : (((/* implicit */unsigned long long int) 2035262842U)))))), (((/* implicit */unsigned long long int) (unsigned short)11347))));
}
