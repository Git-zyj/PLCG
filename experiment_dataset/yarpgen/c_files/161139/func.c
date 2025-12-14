/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161139
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16064)) ? (262143) : ((~(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(min((((/* implicit */unsigned int) (signed char)120)), (arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49472))) : (3720237633U)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (7074219423868557804ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (arr_4 [i_1] [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) max(((signed char)81), (((/* implicit */signed char) (_Bool)1))))) ? (arr_4 [i_1] [i_1] [i_1]) : (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) 1574860345U))));
            }
        } 
    } 
}
