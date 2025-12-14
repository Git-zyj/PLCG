/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148824
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (var_2)))) >= (((((/* implicit */_Bool) var_5)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) var_5)))))))) : (var_9)));
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) 1652790842U)), (min((((/* implicit */long long int) ((-7487235690989027339LL) <= (var_8)))), (var_4)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [5]);
                arr_6 [(short)0] [i_1] [(short)0] = ((/* implicit */unsigned long long int) ((unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-10916)))), (((/* implicit */int) ((short) -366656097))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_2);
}
