/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121852
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) var_1)))));
                var_13 ^= ((/* implicit */short) (~((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6))))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (short)16382))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_9);
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
}
