/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100495
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((1079787056) < (((/* implicit */int) var_7))))), (6161108301372568995ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) 2474871627U);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (~(934053185)))), (3046658950U))) >= (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (274749947U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198)))))));
                var_14 = ((/* implicit */long long int) max(((+(((/* implicit */int) (short)128)))), ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
