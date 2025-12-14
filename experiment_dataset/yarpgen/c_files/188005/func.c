/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188005
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((arr_1 [i_1 + 1]) - (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1])))));
                var_19 = ((((/* implicit */long long int) (+(((/* implicit */int) var_13))))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) ? (arr_0 [i_0] [i_1 - 1]) : (arr_0 [i_1] [i_1 + 1]))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (((arr_4 [14U] [i_1]) >> (((arr_1 [i_0]) - (588587532406580712LL))))))) < (((/* implicit */unsigned long long int) ((-8985657530560757818LL) | (((/* implicit */long long int) 0))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) > ((-(var_14)))))), (3999041150U)));
}
