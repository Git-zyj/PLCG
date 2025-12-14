/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159626
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
    var_17 = ((/* implicit */unsigned int) var_11);
    var_18 = 8756909828590782071ULL;
    var_19 ^= ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((var_2) ^ (((/* implicit */int) (unsigned short)58665)))), (((/* implicit */int) ((unsigned char) 7273640836494561662LL))))))));
                arr_4 [i_0] [(short)0] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) var_2)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2894))) & (12934777452429351175ULL)))))));
            }
        } 
    } 
}
