/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110317
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
    var_18 = ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_8)))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) var_12)))))) << (((min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_7))))) - (111))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_5));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) arr_4 [i_1 - 2] [i_1 - 1])))));
        var_22 = ((/* implicit */unsigned short) ((-6LL) * (6LL)));
    }
    var_23 = ((/* implicit */unsigned short) var_0);
}
