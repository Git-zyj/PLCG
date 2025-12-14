/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106430
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
    var_10 = ((/* implicit */signed char) var_4);
    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) min((max((((/* implicit */short) var_2)), ((short)-9951))), (((/* implicit */short) var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */long long int) var_0);
                var_13 = ((/* implicit */unsigned int) ((unsigned char) ((long long int) arr_4 [i_0 + 2])));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) > (var_1)))));
}
