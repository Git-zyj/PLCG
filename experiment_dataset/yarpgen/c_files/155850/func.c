/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155850
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
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (max((((/* implicit */unsigned long long int) var_0)), (var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((arr_1 [i_0] [(unsigned short)10]) << (((arr_1 [i_0] [(_Bool)0]) - (1137550969U))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((5734645330942967511LL), (((/* implicit */long long int) max((arr_3 [(unsigned short)2] [i_1] [i_1]), (((/* implicit */unsigned int) var_10)))))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (1699788966011470770ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
}
