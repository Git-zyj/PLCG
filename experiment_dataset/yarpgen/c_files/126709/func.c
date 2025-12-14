/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126709
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
    var_17 = ((((((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)9102))))) ? (max((((/* implicit */unsigned int) var_14)), (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)17] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) var_5))))) <= (((/* implicit */int) arr_3 [i_0])))));
                    arr_8 [(short)16] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_8)), (903626508))) * (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -903626509)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) : (4294967295U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)4])) ? (((/* implicit */int) var_6)) : (var_1)))) ? (min((var_11), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    var_18 = ((/* implicit */short) arr_2 [i_0]);
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_5))));
                    arr_9 [i_0] [i_1] [0U] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (6675561177345262773LL)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_5 [i_0])));
                }
            } 
        } 
    } 
}
