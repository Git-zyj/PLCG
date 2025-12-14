/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171191
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
    var_16 = ((/* implicit */unsigned char) var_3);
    var_17 ^= ((/* implicit */signed char) (~(max((max((var_15), (((/* implicit */int) (_Bool)0)))), (((int) var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = (+(((((/* implicit */int) arr_0 [i_0])) - (var_15))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) 8764314763397932926ULL));
                var_19 = ((/* implicit */long long int) ((unsigned long long int) 8764314763397932926ULL));
                var_20 = ((/* implicit */short) var_8);
            }
        } 
    } 
}
