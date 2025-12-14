/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178451
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
    var_10 = ((/* implicit */_Bool) var_3);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) 2631855084U)) : (min((-1908124101873663702LL), (((/* implicit */long long int) (unsigned short)57951)))))))));
    var_12 &= ((/* implicit */unsigned short) ((max((((unsigned int) var_9)), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), (var_1)))))) < (((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (146122260U))) ^ (((unsigned int) (unsigned char)0))))));
}
