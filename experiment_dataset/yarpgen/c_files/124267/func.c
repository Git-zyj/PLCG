/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124267
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
    var_14 = max((((/* implicit */short) (unsigned char)252)), ((short)-2945));
    var_15 |= ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((unsigned char) var_0))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0])) >= (((/* implicit */int) var_7))))), (((unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) var_6))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_6 [i_1] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
}
