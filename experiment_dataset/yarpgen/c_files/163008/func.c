/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163008
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (((~((+(((/* implicit */int) (signed char)88)))))) < (((/* implicit */int) (unsigned short)41289))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(1795966232U))))));
                arr_6 [i_0] [i_1] [i_0] |= (-((~(var_1))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */signed char) ((((/* implicit */long long int) ((2499001052U) ^ (1795966235U)))) != ((~(var_8))))))));
}
