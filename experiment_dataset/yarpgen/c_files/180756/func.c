/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180756
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)0] [i_0])) : (((/* implicit */int) (signed char)0))))) <= (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((/* implicit */int) (signed char)24))))), (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_18 *= ((/* implicit */unsigned long long int) ((signed char) var_12));
    }
    var_19 = ((/* implicit */unsigned int) var_14);
}
