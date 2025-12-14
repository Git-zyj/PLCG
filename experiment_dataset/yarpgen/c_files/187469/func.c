/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187469
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */short) arr_2 [i_0 + 1] [i_0] [i_2]);
                    var_20 = ((/* implicit */int) arr_4 [i_2]);
                    var_21 = ((unsigned int) arr_4 [i_0]);
                    var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0)))), (((/* implicit */int) var_8)))) | (max((min((((/* implicit */int) var_6)), (var_10))), (((/* implicit */int) var_15))))));
}
