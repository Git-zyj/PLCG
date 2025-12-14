/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140575
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
    var_13 |= ((/* implicit */signed char) var_6);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)12)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_5))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_15 *= ((/* implicit */signed char) min((((long long int) (unsigned short)65535)), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_9)), (var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)20), (((/* implicit */unsigned short) (signed char)-74)))))))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-33)), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) | (((((/* implicit */_Bool) (unsigned short)19)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
