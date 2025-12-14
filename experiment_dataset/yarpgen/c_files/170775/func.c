/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170775
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -2147483645)) ? (2147483621) : (((/* implicit */int) (unsigned short)65535)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((arr_2 [i_0]), (var_0))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 1887040875431372487LL))))), (var_9)));
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) != (max((var_3), (((/* implicit */unsigned long long int) var_8)))))))));
}
