/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128041
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_4))))))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) - (60)))));
        arr_2 [(signed char)8] = ((/* implicit */unsigned char) ((((_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-77))))) ? (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)20799)))) * (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_4))))))) : (((/* implicit */int) ((((/* implicit */int) max((var_14), ((signed char)76)))) < (((/* implicit */int) (_Bool)1)))))));
    }
    var_17 = ((((/* implicit */int) var_13)) < ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)28600)) : (((/* implicit */int) (unsigned short)65535)))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) var_0)), (15613588590974948794ULL)))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1523523403)) && (((/* implicit */_Bool) (short)-4372)))) || (((/* implicit */_Bool) ((short) (_Bool)1)))));
    }
}
