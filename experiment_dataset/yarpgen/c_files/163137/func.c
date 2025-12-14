/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163137
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
    var_12 = var_9;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) var_2))));
        var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (var_8)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) ? (((unsigned int) ((((/* implicit */int) (short)27858)) ^ (((/* implicit */int) (unsigned char)172))))) : (((((/* implicit */_Bool) ((int) (unsigned char)253))) ? (((unsigned int) (unsigned short)53025)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_14 |= ((/* implicit */short) max((((/* implicit */unsigned char) var_1)), (((unsigned char) max((((/* implicit */unsigned short) var_1)), (var_10))))));
}
