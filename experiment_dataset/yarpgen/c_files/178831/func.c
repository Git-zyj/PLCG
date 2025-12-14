/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178831
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (var_19)));
                var_21 ^= ((/* implicit */int) var_6);
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_19))))) & (var_2)))), (var_3)));
}
