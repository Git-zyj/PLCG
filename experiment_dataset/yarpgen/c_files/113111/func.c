/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113111
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((var_15) - (((/* implicit */unsigned long long int) 2724109180U)))))) : (max((var_14), (((/* implicit */unsigned long long int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)54508)) : (((/* implicit */int) (unsigned short)8184))))) ? (((((/* implicit */_Bool) var_6)) ? (2402496378U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11028)))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14770331879771086594ULL)) ? (var_10) : (((/* implicit */int) (unsigned short)54508))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_1])));
                var_21 = ((/* implicit */signed char) max((((arr_3 [i_1]) ^ (((/* implicit */int) var_17)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) ((((int) max((var_8), (var_1)))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))))))));
    var_23 = ((/* implicit */signed char) var_11);
}
