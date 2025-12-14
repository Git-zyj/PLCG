/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119268
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) <= (((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_11)) : (var_7)))), (max((var_12), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_2 + 2] [i_0])) >= (var_11))))))));
                    var_22 *= ((/* implicit */_Bool) min((((int) arr_6 [i_2 - 1] [i_1] [i_0])), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_6 [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
}
