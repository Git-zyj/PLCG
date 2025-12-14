/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175805
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
    var_17 = max(((+(((((/* implicit */_Bool) -8309903125121335045LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20164))))))), (((/* implicit */unsigned long long int) (short)20163)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = min((((((/* implicit */_Bool) (short)-20164)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((638515983) >> (((((/* implicit */int) (short)20163)) - (20142))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (((((/* implicit */_Bool) 4294967295U)) ? (2129454386404596750ULL) : (((/* implicit */unsigned long long int) var_13)))))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8309903125121335037LL)) ? (2147483647) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_13)) ? (3310125102U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60))) >= (4294967295U)))))));
                }
            } 
        } 
    } 
}
