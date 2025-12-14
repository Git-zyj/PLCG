/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129086
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
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = (~(((/* implicit */int) (unsigned char)249)));
                var_11 = ((/* implicit */unsigned char) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_3 [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1)))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7))))))) >= (var_1)));
    var_13 = var_8;
}
