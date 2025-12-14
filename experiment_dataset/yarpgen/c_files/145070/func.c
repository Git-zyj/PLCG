/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145070
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), (min((var_7), ((unsigned char)0))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0] [i_1])))));
                    var_15 = ((/* implicit */signed char) 1672219741090694114ULL);
                }
            } 
        } 
    } 
}
