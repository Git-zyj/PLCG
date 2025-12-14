/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174365
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
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_17) | (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (max((var_14), (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_9)))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((/* implicit */int) arr_0 [i_0 + 1]))))), (min((((/* implicit */unsigned int) (unsigned char)16)), (((var_17) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))))));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) min((arr_1 [i_0]), (var_12)))))));
    }
    var_20 = ((/* implicit */_Bool) (short)24377);
}
