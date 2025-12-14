/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143011
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_4 [i_1] [1ULL] [i_1] [i_0]);
                    arr_7 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (12098617776994458977ULL)))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_1)), (var_4))), (((/* implicit */unsigned int) var_6))))) ? ((-(max((var_4), (((/* implicit */unsigned int) (signed char)109)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)7)), ((short)-17828)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) -5923919666301321163LL)) && (((/* implicit */_Bool) var_9)))))))))))));
    var_11 = ((/* implicit */int) var_7);
}
