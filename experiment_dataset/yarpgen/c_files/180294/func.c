/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180294
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 3624703567U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned int) arr_5 [i_0] [i_1])))) + (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [18ULL])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_1]))) ? (((var_0) ? (1006632960U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3166371387U)) ? (var_8) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5))))) ^ (((long long int) ((((/* implicit */_Bool) var_3)) && (var_4)))))))));
}
