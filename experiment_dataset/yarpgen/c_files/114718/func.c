/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114718
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
    var_14 = ((/* implicit */_Bool) var_1);
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) max((max((3983538880U), (((/* implicit */unsigned int) (short)-21524)))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) var_9)))))));
                    arr_6 [i_0] [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)48)), (((((/* implicit */int) (signed char)-14)) + (((/* implicit */int) (signed char)108))))))), (min((11619077056892306691ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
