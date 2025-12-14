/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108485
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
    var_10 = ((/* implicit */unsigned int) max((min((min((var_8), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-110)) : (2023726051)))))), (((/* implicit */long long int) (unsigned short)42761))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) min((((signed char) var_7)), (((/* implicit */signed char) (_Bool)1))))) - (((/* implicit */int) var_7))));
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) != (2786501109U))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_0 [i_0]))), (arr_0 [i_0 + 1])))) || (((6218901118309674662LL) >= (max((((/* implicit */long long int) (signed char)-4)), (arr_0 [i_0 + 1])))))));
        arr_2 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (845210301099340007LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110)))));
    }
}
