/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169823
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
    var_17 = min((var_12), (((max((((/* implicit */unsigned int) (signed char)46)), (2236839939U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) min((((arr_0 [i_1 - 1]) >> (((arr_0 [i_1 + 1]) - (1131914825U))))), ((-(arr_6 [i_0] [i_0] [i_1])))));
                var_19 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12))))), ((-(arr_1 [i_0] [i_0]))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (2058127357U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) < (arr_4 [i_0] [i_0] [i_0])));
                var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_0])))))))) >= (arr_6 [i_1] [i_1] [i_0])));
            }
        } 
    } 
}
