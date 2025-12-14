/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176881
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
    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))))), (((/* implicit */long long int) ((unsigned int) var_8)))))) ? (((/* implicit */unsigned long long int) -560311466)) : (((unsigned long long int) (~(((/* implicit */int) var_12)))))));
    var_20 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) var_10))), (min((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)90)))), (max((var_5), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [0ULL] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) max((arr_0 [(signed char)10]), (arr_0 [i_0])))))));
                arr_5 [10ULL] [i_0] = ((/* implicit */short) ((int) ((short) min((((/* implicit */int) (unsigned char)141)), (-410296016)))));
            }
        } 
    } 
}
