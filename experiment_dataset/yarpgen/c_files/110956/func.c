/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110956
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((short) arr_4 [i_0] [i_1] [i_1]));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_16)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) ? (min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) 2816784970859728976ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (676414320525296181ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (unsigned char)191))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (-7142213822521870600LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-27932), (var_16))))) : (((unsigned int) var_0)))))));
                arr_8 [i_0] [i_0] [i_0 - 4] = ((/* implicit */signed char) ((long long int) min((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3508887720U))), (((/* implicit */unsigned int) max((var_17), (((/* implicit */short) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */_Bool) var_14);
}
