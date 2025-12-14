/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138494
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18085064985764250938ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))), (var_12)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_9))))));
        var_16 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 3308893377811174615LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))) << (((((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_6) - (45853547U))))) - (4081)))))));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) 4084433152U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2035468596)) ? (var_5) : (((/* implicit */long long int) arr_2 [i_1]))))))) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) var_3))));
        var_18 = ((/* implicit */short) arr_1 [i_1]);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((max((2137175099), (((/* implicit */int) (unsigned char)180)))) != (((/* implicit */int) min((arr_1 [i_1 - 2]), (((/* implicit */signed char) arr_4 [i_1 - 1]))))))))));
        arr_5 [i_1 - 2] = ((/* implicit */int) (~(max((((((/* implicit */_Bool) -2035468576)) ? (-3637728254618058762LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((arr_2 [i_1 - 2]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_9))));
    }
}
