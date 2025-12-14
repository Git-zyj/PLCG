/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116760
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
    var_19 = ((((/* implicit */int) min((((var_10) >= (((/* implicit */long long int) var_9)))), (((0U) != (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) >> (((((10U) << (((4294967276U) - (4294967260U))))) - (655360U))));
    var_20 &= ((/* implicit */unsigned char) var_13);
    var_21 &= ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] &= ((((/* implicit */_Bool) 20U)) ? (((/* implicit */int) ((4294967287U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)16601)));
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) - ((~(6665820562704383365ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_13);
}
