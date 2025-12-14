/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170397
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
    var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0U)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 3] = max(((-((~(var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41702)))))))));
                arr_7 [i_0 - 1] [i_1 + 2] = ((((/* implicit */_Bool) 288230376151711743ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37185))) ^ (2341048685746118865ULL))));
            }
        } 
    } 
    var_14 *= (((!(((/* implicit */_Bool) (unsigned short)1023)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-127)), (var_9)))) || (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) 8716926028479176723LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51499))) : (2701044759U))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77))))) & (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(((((/* implicit */_Bool) var_7)) ? (var_3) : (18446744073709551615ULL)))))));
}
