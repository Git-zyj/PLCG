/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15258
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
    var_10 = ((/* implicit */unsigned int) ((unsigned char) 0ULL));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) min((((18446744073709551597ULL) << (((((/* implicit */int) (short)-5435)) + (5438))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-15)))))));
                var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7263)) ^ (((/* implicit */int) (short)23797))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((signed char) (signed char)127));
    var_13 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)32743)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)90))))));
}
