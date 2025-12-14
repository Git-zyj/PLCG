/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110912
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
    var_12 ^= ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) ((var_4) != (var_4)))) % ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) var_11)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)11]))))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? ((+((~(((/* implicit */int) arr_0 [i_0] [i_0])))))) : ((+(((((/* implicit */int) var_11)) << (((arr_1 [i_0]) - (3117494369U)))))))));
        arr_4 [19U] = ((/* implicit */int) var_6);
        arr_5 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))), (((/* implicit */unsigned long long int) (~(var_9)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [15]))) < (7080382838882156602LL)))))))));
    }
}
