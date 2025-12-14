/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10455
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
    var_11 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))))) : ((-(((long long int) var_2)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) var_10)) : (1787185701)));
                var_13 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) (+(((/* implicit */int) var_9))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48087))) : (-9147967302539270323LL))) : (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) arr_1 [4U])))))))) ? (min((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_8) : (arr_6 [i_3] [i_2]))), (((/* implicit */long long int) arr_3 [i_2 + 1] [2LL] [i_2 + 1])))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_3))))))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_9 [0U]))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) arr_2 [i_3]))))))))));
                arr_10 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2 + 1])) ? (arr_7 [i_2 + 1] [(signed char)3]) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((unsigned int) var_5)) << (((((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_2])) + (19825)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(var_1)));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_8))));
}
