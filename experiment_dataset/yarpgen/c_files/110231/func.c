/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110231
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_9)))))) >= (((unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_6)))))));
    var_15 = ((/* implicit */_Bool) min((((unsigned int) ((unsigned char) var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2981213587297880963LL) / (((/* implicit */long long int) 22))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_2)) - (34259)))))) : (max((((/* implicit */unsigned int) var_9)), (var_12)))))) ? (((((((/* implicit */int) var_6)) >> (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */int) ((unsigned short) -1577620356))) ^ (((((/* implicit */int) var_1)) / (((/* implicit */int) var_13))))))));
    var_17 ^= ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_10)))))) : (((unsigned int) var_6)))) : (((/* implicit */unsigned int) min((var_7), (((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) (signed char)46)))))))));
}
