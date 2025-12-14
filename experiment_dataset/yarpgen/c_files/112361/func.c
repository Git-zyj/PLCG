/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112361
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11)))), ((-(((((/* implicit */int) (short)-1291)) ^ (((/* implicit */int) var_15)))))))))));
    var_19 = ((/* implicit */unsigned int) var_10);
    var_20 = ((/* implicit */long long int) (short)-1296);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                    var_22 &= ((/* implicit */_Bool) min(((short)1290), (((/* implicit */short) (signed char)84))));
                    var_23 ^= ((_Bool) max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (short)1290)) : (((/* implicit */int) var_13))))), (((var_10) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
}
