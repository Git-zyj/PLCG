/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168327
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
    var_13 = ((/* implicit */short) min((((((/* implicit */int) var_12)) + (((((/* implicit */int) var_10)) << (((2397477541U) - (2397477539U))))))), (((/* implicit */int) ((short) min((var_10), (((/* implicit */unsigned short) var_8))))))));
    var_14 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_1]);
                var_15 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-24)) >= (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) -930611033);
}
