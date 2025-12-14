/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121647
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) max((max((((/* implicit */int) (_Bool)1)), (arr_2 [i_0]))), (((/* implicit */int) var_14)))));
                arr_6 [i_1] [(short)0] = ((/* implicit */signed char) ((-9223372036854775787LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                arr_7 [i_0] [i_0 + 1] [i_1] = ((((((_Bool) arr_2 [i_0])) ? (((2833874127488847437LL) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (+(var_6)))))) != (((/* implicit */long long int) ((/* implicit */int) var_4))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)-54))))), ((((!(((/* implicit */_Bool) 25LL)))) ? (2015632000530006742LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_17 = (~(((/* implicit */int) var_4)));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_11))));
    var_19 = ((/* implicit */signed char) max((var_19), (var_13)));
}
