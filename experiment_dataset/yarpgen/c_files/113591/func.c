/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113591
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
    var_12 = ((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_2))));
    var_13 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (var_5))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) ((signed char) 43028142)))))), (min((((/* implicit */unsigned long long int) (-(var_1)))), (min((var_10), (9959550853761951005ULL)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((var_1) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((808111877U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    arr_6 [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) max((min((arr_0 [i_0] [i_1]), (var_9))), (((/* implicit */short) (!(((/* implicit */_Bool) 3862532856U)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15648))))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [(signed char)1]))) : (arr_2 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_2] [i_1] [0]))))))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) -557546004)) : (808111877U))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned int) arr_5 [(_Bool)1] [(signed char)4] [i_2] [(_Bool)1])), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8707104909670058004LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
                    var_16 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((short) 3486855419U)))))));
                }
            } 
        } 
    } 
}
