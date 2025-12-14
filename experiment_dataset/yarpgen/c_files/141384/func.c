/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141384
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
    var_16 = ((/* implicit */int) ((((min((((/* implicit */long long int) (_Bool)1)), (-2029174636812968250LL))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-124)), (var_2))))))) - (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (233653615U))) - (((((/* implicit */unsigned int) 565658876)) - (233653615U))))))));
    var_17 -= ((/* implicit */short) ((((var_6) ? (max((((/* implicit */unsigned int) var_8)), (1124437209U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]) : (((((/* implicit */_Bool) arr_2 [2ULL] [i_1] [i_2])) ? (233653617U) : (((/* implicit */unsigned int) arr_3 [i_0]))))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((signed char) (~(233653615U)))))));
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1])))) > (((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 3]))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4061313680U)))) ? (arr_3 [i_2]) : (((((/* implicit */_Bool) 4061313681U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [10ULL])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_14))));
}
