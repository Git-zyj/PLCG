/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102127
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-108)) ? (1001848882) : (((/* implicit */int) (unsigned short)6891))))) : (arr_1 [i_0 - 1])));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6891))))))))));
                var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [8ULL]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((unsigned long long int) var_6)) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)89))))))))));
    var_18 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))));
}
