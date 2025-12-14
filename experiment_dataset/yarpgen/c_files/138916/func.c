/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138916
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
    var_20 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (2047180787U)))));
    var_21 = ((((/* implicit */_Bool) 201307458)) ? (5508250651476414661ULL) : (((/* implicit */unsigned long long int) 201307465)));
    var_22 = ((/* implicit */int) var_19);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) 201307465);
                var_23 = ((/* implicit */long long int) (-((+(((((/* implicit */int) (unsigned short)28943)) + (arr_3 [i_1])))))));
                var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) -201307488)))) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [6ULL])) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))))));
                arr_6 [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_0 [i_1 + 4] [i_1]))))));
            }
        } 
    } 
}
