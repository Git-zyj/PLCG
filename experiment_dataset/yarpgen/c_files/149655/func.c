/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149655
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((long long int) (unsigned short)21026));
        var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65531))))));
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_19 *= var_7;
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1] [(signed char)14])))))));
        var_21 = ((/* implicit */int) var_6);
    }
    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_13)) < (((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned char)38)) - (34)))))))) / (((/* implicit */int) (unsigned char)202))));
    var_23 = ((/* implicit */unsigned char) var_1);
}
