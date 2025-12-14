/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10360
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))))), (arr_4 [i_1])));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (max((((/* implicit */unsigned long long int) var_8)), (7573143393548222216ULL))) : (arr_6 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) max(((-(arr_2 [i_0 - 1]))), ((-(((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) ((arr_5 [(short)10]) ? (1725707349U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((3482903712U), (0U))) : (((/* implicit */unsigned int) max((arr_7 [i_0] [i_1]), (((/* implicit */int) arr_5 [i_0])))))))))));
                arr_8 [18LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_7 [i_1 + 1] [(short)11]) : (((/* implicit */int) var_16))))))) : (arr_4 [i_0])));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_3 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)253)))) + (((/* implicit */int) var_1))));
    var_21 = ((/* implicit */short) var_8);
}
