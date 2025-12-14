/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165425
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 &= ((/* implicit */signed char) ((short) arr_1 [(unsigned short)8]));
        var_13 += (((!(((/* implicit */_Bool) (unsigned char)79)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)186)) - (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((arr_4 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) - (15823)))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((arr_3 [i_1]), (((/* implicit */unsigned short) (short)-14151)))))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_9))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)190)))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
