/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147082
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))))));
                arr_5 [i_1 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned int) -5781281575156359091LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (max((((/* implicit */long long int) 4294967295U)), (-6072743953947105151LL)))))));
                var_19 = ((((/* implicit */_Bool) min((arr_4 [i_1 + 2]), (arr_4 [i_1 + 2])))) ? ((+(arr_4 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65330))));
                var_20 = ((/* implicit */short) ((min((arr_4 [i_0 + 1]), (((/* implicit */unsigned long long int) (signed char)-98)))) ^ (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (+(min((((arr_3 [8ULL] [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) (unsigned short)60931))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((var_14), (max((var_3), ((unsigned short)2))))))));
    var_22 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
}
