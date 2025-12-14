/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112555
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
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) 4294967276U);
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) var_10)))));
                    var_21 -= ((/* implicit */short) (~(((((/* implicit */_Bool) 25U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
}
