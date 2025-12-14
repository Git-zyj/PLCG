/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16506
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */short) (_Bool)1))))) ^ (((/* implicit */int) (_Bool)1)))))));
                var_10 = ((/* implicit */int) (_Bool)1);
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_1), ((_Bool)1)))), (var_7)))) ? (min((min((7780439577517663194ULL), (6556156746026729465ULL))), (((/* implicit */unsigned long long int) (short)-17632)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / ((-(var_3))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_3), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))))));
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned long long int) var_8);
}
