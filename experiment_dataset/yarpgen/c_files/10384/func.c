/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10384
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) max((((/* implicit */short) arr_3 [i_0])), (arr_4 [i_0] [i_1] [i_0]))))));
                arr_7 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0))))) ? ((((_Bool)1) ? (-3740010669991480144LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) : (var_6)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18443))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (12701843111072374337ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_6 [(short)11] [(short)11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [4U] [i_0]))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0]))) : (((int) 265951885U))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32162)))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))))));
    var_14 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) max((265951885U), (((/* implicit */unsigned int) (unsigned short)0))))), (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) & (((/* implicit */long long int) var_9))));
    var_15 = ((((/* implicit */unsigned int) 1571602740)) > (265951885U));
}
