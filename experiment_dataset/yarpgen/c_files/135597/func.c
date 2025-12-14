/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135597
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
    var_14 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_4))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(2496802084559762626ULL)))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)12704))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 -= var_1;
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)29996), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))) & (((((/* implicit */_Bool) (unsigned short)29996)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35566))) : (4294967295U)))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 + 2] [i_1]))) && (var_8)));
            }
        } 
    } 
}
