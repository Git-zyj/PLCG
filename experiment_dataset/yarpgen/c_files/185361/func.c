/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185361
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
    var_10 = ((/* implicit */signed char) var_3);
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_7)))) : (max((14ULL), (((/* implicit */unsigned long long int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))) ? (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) -84667746))))) > (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 665296018)) : (4ULL)))));
                var_13 ^= ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
}
