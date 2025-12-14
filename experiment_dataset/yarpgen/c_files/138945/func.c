/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138945
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (var_5)))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(275191374068349642LL)))) ? (var_8) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-857)))))))));
            }
        } 
    } 
    var_16 = (+(min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (short)857)) ? (var_11) : (((/* implicit */unsigned int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) var_6))) * (((((/* implicit */_Bool) arr_12 [(signed char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (var_12)))))) ? (var_0) : (min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) : (arr_11 [(signed char)14]))))));
                arr_14 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (+(((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_2]))))) * (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)857))) : (var_11)))))));
                arr_15 [0LL] &= ((/* implicit */unsigned char) -871013908);
                arr_16 [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_1)))) + (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) <= (((/* implicit */int) arr_1 [i_2 + 1] [i_3])))))));
            }
        } 
    } 
}
