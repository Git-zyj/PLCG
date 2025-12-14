/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113079
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)17))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) var_14)), ((unsigned short)40878)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)109))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (short)-19319)) : (((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */unsigned short) (-(min(((-(var_9))), (((/* implicit */long long int) var_5))))));
    var_24 ^= ((/* implicit */_Bool) (~(((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
