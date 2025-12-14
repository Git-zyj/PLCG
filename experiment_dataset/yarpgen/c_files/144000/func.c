/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144000
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((5517871481688143610LL) >> (((var_18) + (1461870785037556004LL))))), (max((5517871481688143610LL), (((/* implicit */long long int) 345010054U))))))) ? ((~((-(var_7))))) : (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */_Bool) min((var_4), ((short)-1491)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -3219987963894453536LL)))) : (min((((/* implicit */long long int) arr_1 [i_0])), ((((_Bool)1) ? (var_2) : (arr_4 [i_1] [i_0])))))));
                arr_7 [i_0] [i_1] = ((int) 10122509980153165557ULL);
            }
        } 
    } 
    var_22 = var_16;
}
