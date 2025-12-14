/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150460
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), ((((_Bool)1) ? (((/* implicit */int) (short)24135)) : (((/* implicit */int) (unsigned short)48248)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) 31U);
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1287775950U)) && (((/* implicit */_Bool) 31U)))))) > (((((/* implicit */_Bool) -1018297822858982322LL)) ? (1623453505599118119ULL) : (((/* implicit */unsigned long long int) var_5))))))), (((signed char) (~(((/* implicit */int) (unsigned short)18088)))))));
                var_23 *= ((/* implicit */unsigned char) ((max((max((6673330520612507558ULL), (((/* implicit */unsigned long long int) 2018978960)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6673330520612507558ULL)) ? (((/* implicit */int) (unsigned short)8594)) : (((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (min((((/* implicit */unsigned int) (unsigned char)221)), (3007191336U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1623453505599118119ULL)))))))))));
                var_24 = ((((/* implicit */unsigned long long int) min((((int) var_9)), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 5765957486588350830ULL)))))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 565677278U))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) + (5765957486588350830ULL))))));
            }
        } 
    } 
}
