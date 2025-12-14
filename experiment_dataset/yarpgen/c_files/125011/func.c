/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125011
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) var_14)), (var_12))));
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)82))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) arr_0 [i_0 - 1] [i_0]);
        var_22 ^= ((/* implicit */_Bool) (unsigned char)82);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1]))))), ((-(((((/* implicit */_Bool) 1202468582U)) ? (((/* implicit */unsigned int) var_12)) : (348154170U)))))));
        var_24 += ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) * (911811637U))))));
        arr_4 [i_1] [i_1] = max((arr_3 [i_1]), (((/* implicit */short) ((_Bool) ((short) var_10)))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(1202468598U)))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) var_9)) : (var_6))))));
}
