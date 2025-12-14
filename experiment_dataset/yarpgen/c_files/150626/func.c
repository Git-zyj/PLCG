/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150626
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) & (min((((14940440982884937398ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0] [i_1] [4ULL])) ^ (-7179094291833801972LL)))))))))));
                var_14 = ((/* implicit */unsigned int) (short)-128);
                var_15 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)128))))) ? (((12546299320649079187ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (min((var_7), (((/* implicit */unsigned long long int) (short)56)))))), (((/* implicit */unsigned long long int) var_10))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (signed char)-76);
    var_17 = ((/* implicit */unsigned long long int) ((int) var_3));
}
