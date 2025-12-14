/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109442
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
    var_16 = ((/* implicit */unsigned int) max((var_10), (((var_1) / (var_7)))));
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) ((unsigned short) var_4))), (max((4270385330U), (((/* implicit */unsigned int) (unsigned char)254)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)1] [(unsigned short)1] [1U] [i_2] = ((/* implicit */unsigned int) var_1);
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_5 [i_2] [i_2])) : (var_4))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)24961)), (-6447518411950327168LL)));
}
