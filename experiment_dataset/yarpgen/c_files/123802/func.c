/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123802
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((unsigned int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 2692968404U))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)59898)) ? (arr_0 [i_0]) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1] [i_1])))));
                var_21 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) ((signed char) ((int) var_16)));
}
