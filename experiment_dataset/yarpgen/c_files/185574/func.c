/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185574
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (30384649U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))))), (4264582645U))), (((/* implicit */unsigned int) arr_7 [i_1 - 2] [i_1 - 1]))));
                    var_17 |= ((/* implicit */unsigned short) (+(4264582669U)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (var_6)))) ? (((((/* implicit */_Bool) 3175537086U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-14590)))) : ((-(((/* implicit */int) (signed char)-8))))))), (max((555757349999019165ULL), (var_6)))));
}
