/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13399
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
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_17))) ? (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_6)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((int) ((arr_1 [i_2] [i_1]) - (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))));
                    var_21 = max((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_2])) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (arr_0 [i_0] [i_1])))) : (min((var_1), (((/* implicit */unsigned int) var_7)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_8);
    var_23 = var_7;
}
