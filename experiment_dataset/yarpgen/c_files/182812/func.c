/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182812
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
    var_10 += ((/* implicit */signed char) var_8);
    var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)146)))) ? ((((-(((/* implicit */int) (signed char)127)))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)190)) || (((/* implicit */_Bool) (signed char)24))))))) : (((/* implicit */int) (unsigned char)66))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) (signed char)24);
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (signed char)-25))));
        var_14 = ((/* implicit */long long int) (short)13320);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13328)))));
    }
}
