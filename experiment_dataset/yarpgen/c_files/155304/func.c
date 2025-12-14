/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155304
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
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_0)), (0ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23778))) : ((-(((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)122);
        var_14 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0 + 1]));
    }
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (((var_5) ? (var_9) : (((/* implicit */unsigned long long int) var_10))))))) ? ((~((+(((/* implicit */int) (unsigned short)65528)))))) : (((((/* implicit */int) ((signed char) var_11))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
}
