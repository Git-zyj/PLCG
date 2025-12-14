/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121318
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
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((int) arr_3 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [15LL]))) & (arr_2 [i_0] [i_1])))) : ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_0 [i_1] [i_0]))))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_12))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_3 [i_0])))))) / ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)100))) - (arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
}
