/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130270
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
    var_15 = var_0;
    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-86)) ? (-6152918143587401699LL) : (((/* implicit */long long int) 3424154282U))));
    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) 13U));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967277U)) ? (39U) : (23U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((4294967282U) + (4294967283U))) & (((13U) >> (13U))))), (((((4294967283U) % (13U))) >> (((var_11) + (385670109)))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((unsigned long long int) arr_2 [i_0])), (((/* implicit */unsigned long long int) 33U)))))));
                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
        } 
    } 
}
