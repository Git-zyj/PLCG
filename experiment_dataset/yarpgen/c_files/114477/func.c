/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114477
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
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */unsigned short) 2719343061U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)4]))) >= (arr_7 [10U] [i_1] [0ULL]))) ? (((9122025100361825017LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_6 [i_2 - 2] [i_0 - 2]))), (((/* implicit */unsigned long long int) (unsigned char)232))));
                }
            } 
        } 
    } 
}
