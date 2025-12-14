/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102811
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-22)), (0ULL)));
                    var_12 -= var_11;
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (var_8)));
    var_14 = (-(((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47884))))));
}
