/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179081
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
    var_15 = ((/* implicit */long long int) (unsigned short)36435);
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (arr_2 [i_0]))) ? (2732627539U) : (arr_2 [i_0]))))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (min((var_8), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16944))) + (2732627531U))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned short)32256)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) arr_5 [i_1])) ? ((~(arr_4 [i_1]))) : (((arr_4 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 10084999899121787553ULL)) ? (((/* implicit */unsigned int) -1726975835)) : ((~(2732627539U)))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5ULL)) ? ((+(((((/* implicit */_Bool) 12849744561667118839ULL)) ? (((/* implicit */unsigned long long int) 2230822043U)) : (10792119652888043604ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-5787288880813294067LL))))))))));
    var_22 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1562339750U)) : (0ULL))) & (((/* implicit */unsigned long long int) 1562339733U)))));
}
