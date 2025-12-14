/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183816
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)15597))))), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_3)))))) : (((/* implicit */int) var_7))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)1326)), (arr_0 [i_0]))))))))))));
        var_17 -= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_18 *= ((/* implicit */short) ((992485684157646559LL) < (((/* implicit */long long int) min((arr_1 [9U]), (((/* implicit */unsigned int) arr_0 [i_0 - 1])))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (short)-20624))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
}
