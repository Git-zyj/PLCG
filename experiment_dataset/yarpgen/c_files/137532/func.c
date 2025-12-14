/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137532
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
    var_11 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (short)-32056)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */long long int) ((unsigned int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_3))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11045))))) : (((unsigned int) (short)-9065)))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (var_1)))));
    var_15 |= ((/* implicit */unsigned char) var_2);
}
