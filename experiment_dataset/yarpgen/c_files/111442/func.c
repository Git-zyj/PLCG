/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111442
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((max((((/* implicit */long long int) 3166314439U)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) - (max((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_1) : (((/* implicit */long long int) 3166314439U)))), (((/* implicit */long long int) ((unsigned char) arr_0 [i_1])))))));
                var_12 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3166314439U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))) : (((((/* implicit */_Bool) arr_2 [18U])) ? (3166314444U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (min((((((/* implicit */int) (short)-28231)) & (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)113)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_1 - 3]))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(var_0)));
}
