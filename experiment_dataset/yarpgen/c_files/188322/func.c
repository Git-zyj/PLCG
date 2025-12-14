/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188322
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
    var_13 = ((/* implicit */int) (~(var_12)));
    var_14 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) arr_0 [i_0]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_1 [i_0]), (((arr_1 [i_0]) >> (((((/* implicit */int) var_5)) - (27523))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [(unsigned short)5])), (var_3)))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) : (arr_1 [i_0]))));
    }
}
