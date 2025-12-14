/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100101
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) (unsigned char)106);
        var_18 ^= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)1316)), (var_7)))), (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) % (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
