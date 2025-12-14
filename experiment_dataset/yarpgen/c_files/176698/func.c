/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176698
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 ^= ((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))) + (((long long int) max((((/* implicit */unsigned short) var_11)), (arr_0 [i_0])))));
                arr_6 [i_1] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) ((short) var_8))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((arr_4 [i_1] [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */unsigned int) ((short) arr_5 [i_0]))), ((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))))))));
                arr_8 [i_1] = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) % (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */long long int) var_5);
}
