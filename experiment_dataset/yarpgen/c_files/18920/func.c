/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18920
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) arr_0 [18ULL] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_15)))))) | (((((/* implicit */int) ((var_2) || (var_19)))) << (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = (!(((/* implicit */_Bool) 1ULL)));
        arr_4 [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 5431138199781375340ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)17919)))), (((/* implicit */int) (short)63))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (short)-32762))))) ? (4503599358935040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21575))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2084883165U)) ? (2084883183U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) ((_Bool) var_6)))))));
    }
    var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_9))))), ((-(var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3963149405867280499ULL)) || ((_Bool)1))))));
    var_23 = ((/* implicit */unsigned int) (short)-21575);
}
