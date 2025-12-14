/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118575
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (arr_1 [i_0])))))))));
                var_13 = ((/* implicit */long long int) arr_0 [5U] [i_0]);
                var_14 = ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) <= (-613118315));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) && (((/* implicit */_Bool) var_5))))) == (((/* implicit */int) arr_2 [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned int) var_7);
}
