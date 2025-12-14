/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122048
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) (_Bool)1);
        var_20 *= var_3;
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) 2658879093U)) ? (((/* implicit */int) (short)16384)) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) -7092494478473270330LL)) ? (((/* implicit */int) (unsigned short)40411)) : (((/* implicit */int) (unsigned short)60098))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 4294967295U)) ? (-1476386741) : (((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (8881937449381826923LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33853))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)16)) ? ((+(1U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18710)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U)))) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)62723))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : ((-(var_12)))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_7);
}
