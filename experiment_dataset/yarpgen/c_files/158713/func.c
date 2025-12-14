/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158713
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
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_2 [i_0 + 1] [i_1 - 1]);
                var_16 = ((/* implicit */long long int) arr_3 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_10), (var_10)));
    var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) 18093005130078104438ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3449372137U)) || (((/* implicit */_Bool) (signed char)122)))))) : (max((((/* implicit */unsigned int) (unsigned char)0)), (2100612136U)))));
    var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)14439)), (0U)))) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_8))))) && (((((/* implicit */_Bool) (unsigned char)50)) && (((/* implicit */_Bool) (signed char)-1)))))))) : (2313237548U)));
}
