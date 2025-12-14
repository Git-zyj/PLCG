/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18338
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] = (unsigned char)33;
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (max((var_12), (((/* implicit */unsigned int) var_7))))));
    var_14 = ((/* implicit */unsigned char) (_Bool)1);
    var_15 = max((((/* implicit */unsigned short) var_3)), (max((var_5), (max(((unsigned short)7804), (((/* implicit */unsigned short) (_Bool)1)))))));
}
