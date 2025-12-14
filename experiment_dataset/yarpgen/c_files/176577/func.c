/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176577
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) (short)-9806)) ? (-1427508544) : (((/* implicit */int) (short)-17974)))) != (((/* implicit */int) arr_2 [i_0])));
                var_21 = ((/* implicit */signed char) ((short) ((_Bool) (_Bool)1)));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((int) ((unsigned int) var_12)))));
}
