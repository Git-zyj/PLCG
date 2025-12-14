/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152003
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_1])), (2262279913U)))) ? (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))) : (max((arr_7 [i_0 - 2] [i_1]), (((/* implicit */int) var_5))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0 - 1])))) ? ((+(arr_0 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_0))));
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */int) var_6)))))));
    var_16 = ((/* implicit */long long int) (_Bool)1);
}
