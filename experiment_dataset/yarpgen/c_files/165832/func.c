/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165832
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) ((unsigned char) ((signed char) arr_1 [i_0]))));
        var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned char)11]))) ? (((long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (4294967295U) : ((~(3440407053U)))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_2 [(_Bool)1]))));
    }
    var_16 *= ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((var_9) ? (var_3) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))))));
}
