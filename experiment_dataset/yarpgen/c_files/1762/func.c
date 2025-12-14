/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1762
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (max((((/* implicit */long long int) var_8)), (1175610806962700203LL))))))) : (max((max((-1668318607507975989LL), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((unsigned char) var_6))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                var_21 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_18);
}
