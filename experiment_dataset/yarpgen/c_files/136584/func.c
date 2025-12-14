/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136584
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((var_7) / (var_1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36250)) / (((/* implicit */int) (unsigned short)36250))))) ? (((/* implicit */int) (unsigned short)29313)) : (((/* implicit */int) (unsigned char)64))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64620)) - (((((/* implicit */int) (unsigned short)36263)) % (((/* implicit */int) (unsigned short)29309))))))), (((max((((/* implicit */unsigned long long int) -519790324)), (var_3))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (var_3)))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((-2579059873870012567LL) + (9223372036854775807LL))) << (((var_2) - (7768038994070883778ULL)))))))) == (var_3)));
            var_13 = ((/* implicit */long long int) (~(((((281474909601792ULL) - (281474909601796ULL))) - (((/* implicit */unsigned long long int) (-(var_7))))))));
        }
    }
}
