/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162871
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = arr_5 [3] [i_0];
                    var_14 = ((/* implicit */unsigned long long int) var_13);
                    var_15 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (max((arr_8 [i_0] [(_Bool)1] [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))))) != (min((2834173854446961596ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((3135022162250319370LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_7))))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((((((/* implicit */_Bool) ((var_0) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_4))) : (((/* implicit */unsigned long long int) (+(var_6)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
}
