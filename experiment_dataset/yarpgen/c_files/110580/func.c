/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110580
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
    var_11 ^= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (unsigned char)132)))));
    var_12 *= (unsigned char)132;
    var_13 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3814946824U)) ? (var_10) : (((long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */long long int) var_6);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        var_16 = ((/* implicit */unsigned int) var_4);
    }
}
