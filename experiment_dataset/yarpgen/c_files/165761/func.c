/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165761
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((var_8) + (-9223372036854775789LL)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3888))) > (var_12))))) | ((~(var_7)))))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) (unsigned char)0))))) : (var_5)))));
    var_17 += ((/* implicit */unsigned short) min((var_8), (var_5)));
    var_18 ^= ((/* implicit */int) ((((((var_5) + (9223372036854775807LL))) >> (((min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_11))) - (245ULL))))) & (((((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((var_12) - (5347747169063709439ULL)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
}
