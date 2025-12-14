/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128725
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 7314621888266084622LL))));
                var_15 = ((/* implicit */unsigned short) arr_2 [i_1]);
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1 + 1] [i_1] [i_0])))) : ((~(((/* implicit */int) arr_3 [i_1 - 2] [i_1] [i_1 - 2])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1813383598U)))))) : (var_1)))) ? (var_7) : (((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_18 *= ((/* implicit */long long int) ((((/* implicit */long long int) arr_4 [i_2])) != (((((/* implicit */_Bool) arr_9 [0U] [0U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_3] [i_2])) ? (var_10) : (arr_8 [14LL] [i_2 - 2])))) : ((+((-9223372036854775807LL - 1LL))))))));
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_10) >> (((arr_9 [2LL] [i_3]) + (7288543198106077516LL)))))) != (((long long int) arr_9 [16LL] [i_3]))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) arr_4 [(unsigned short)8])) & (arr_9 [i_2] [i_3]))) : (min((((/* implicit */long long int) arr_8 [1U] [i_3])), (2747530598113324266LL)))))) ? (((unsigned int) max((0LL), (-5392478880034723667LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_3])))))))))));
            }
        } 
    } 
}
