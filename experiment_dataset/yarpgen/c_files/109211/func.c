/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109211
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-9045262502601996856LL))))) : (((((/* implicit */_Bool) ((signed char) 9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)118)))) : (max((9045262502601996856LL), (9045262502601996855LL)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) | (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (((unsigned long long int) var_7))))) ? (min((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned short) var_0))))), (((long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9045262502601996864LL)) ? (-9045262502601996869LL) : (9045262502601996834LL))))))))));
    var_19 = ((/* implicit */long long int) ((max((((unsigned long long int) 2147483620)), (((/* implicit */unsigned long long int) var_3)))) >> (((max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (var_7))), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) - (4294967138U)))));
    var_20 -= ((/* implicit */signed char) ((var_2) > (((/* implicit */long long int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned long long int) (+(9045262502601996856LL)));
    }
}
