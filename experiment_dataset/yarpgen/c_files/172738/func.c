/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172738
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
    var_20 *= ((/* implicit */unsigned short) max((min((var_12), (((/* implicit */short) ((_Bool) var_13))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_0))))))));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (short)23138)) >> (((((/* implicit */int) arr_1 [i_0])) - (139))))))));
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (_Bool)1))))) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (min((((/* implicit */long long int) var_8)), (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_1 [6LL]), (var_0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_24 = ((/* implicit */short) ((unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)64665)))))));
        arr_4 [i_1] = ((long long int) (~(((/* implicit */int) (signed char)-1))));
    }
    var_25 = ((/* implicit */long long int) ((var_15) >> (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (-968367701)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))));
}
