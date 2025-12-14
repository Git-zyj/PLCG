/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128342
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
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_4))));
                arr_6 [i_0] = max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_17))))))), (min(((~(17511287170288866829ULL))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */short) var_8))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) var_15))))))));
    var_21 = var_8;
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
}
