/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11704
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_7)), (var_3))) : (((13145386370611180748ULL) ^ (((/* implicit */unsigned long long int) var_10)))))) % ((-(var_3)))));
    var_17 ^= ((((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) - (((/* implicit */int) var_13))))))) ? (min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_15)) + (51))))), ((~(((/* implicit */int) (unsigned char)96)))))) : (((/* implicit */int) (unsigned char)146)));
    var_18 ^= ((/* implicit */short) var_4);
}
