/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162885
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
    var_20 = ((/* implicit */_Bool) max((var_20), (var_6)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min(((+(arr_1 [i_0] [(short)10]))), (((/* implicit */int) ((signed char) 3180669686U)))));
        var_22 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 3487580436U))))) ? ((+(0))) : ((~(var_10))))) : (((/* implicit */int) ((unsigned short) (unsigned short)2047))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [(signed char)2] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [(_Bool)0] &= ((/* implicit */unsigned long long int) var_14);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((3487580449U), (3487580436U))) >= (arr_6 [i_1]))))) : ((-(arr_0 [i_1]))));
            var_23 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned int) arr_1 [i_1] [i_2])) : (33521664U)))))));
            var_24 = ((/* implicit */_Bool) max((((min((12U), (((/* implicit */unsigned int) (_Bool)0)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (1310979862U)));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_3] [i_3]))));
            var_26 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) -3805792187641743493LL)) ? (((/* implicit */int) (_Bool)1)) : (525744469))) : (((/* implicit */int) arr_4 [(unsigned short)0] [i_3]))));
        }
    }
}
