/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170351
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */short) max(((_Bool)1), ((_Bool)1)))), (((short) (signed char)17))));
                    var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (((unsigned int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 ^= ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_9)), (((unsigned short) 2210251688U)))))));
}
