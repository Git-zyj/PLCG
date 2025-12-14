/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104235
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) ((signed char) (signed char)-41))), ((-(((/* implicit */int) (signed char)-35))))))));
        var_20 *= ((/* implicit */unsigned long long int) (signed char)119);
    }
    var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (short)27925))))))));
    var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((var_3) >> (((((/* implicit */int) (short)32767)) - (32752))))) >> (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1)))))))));
}
