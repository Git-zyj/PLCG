/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176129
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) (short)20401)) - (20401))))))) ? (((/* implicit */unsigned long long int) var_6)) : ((-(var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) (short)20411)) <= (((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_2 [i_0] [i_1]))))))));
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))) >= (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((var_9) % (9505714232952206365ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (short)20402)) ? (((/* implicit */int) (unsigned short)26250)) : (((/* implicit */int) var_16)))))) - (((((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */short) (_Bool)1))))) * (((/* implicit */int) max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (arr_4 [i_0])))) && (((_Bool) (_Bool)1))));
            }
        } 
    } 
}
