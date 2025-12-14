/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184076
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (576460477425516544ULL) : (576460477425516558ULL)))) ? (((/* implicit */unsigned long long int) (~(3U)))) : (min((var_0), (17561515734611660305ULL)))))) ? (min(((-(18446744073709551607ULL))), (max((((/* implicit */unsigned long long int) 517907922U)), (13065737326161687328ULL))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) arr_7 [i_2] [i_2] [(short)11] [(short)11])))))));
                    var_12 = ((/* implicit */_Bool) ((signed char) ((int) min((((/* implicit */unsigned long long int) (signed char)64)), (18446744073709551615ULL)))));
                    var_13 = ((/* implicit */unsigned int) (-(((min((-12LL), (arr_4 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_10))))))))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((unsigned long long int) arr_0 [i_1])) : (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))))))));
                    var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) ((signed char) var_1))), (var_8)))))));
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (max((((((/* implicit */unsigned long long int) var_8)) / (var_9))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))))));
}
