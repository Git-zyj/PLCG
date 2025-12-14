/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148472
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)107))) <= (((arr_0 [i_1] [i_0 + 1]) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) var_0))))))), ((+(((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))));
                var_14 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_1])) : (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (var_8) : (((/* implicit */unsigned int) var_6))))))) * (min((((/* implicit */unsigned long long int) ((short) arr_5 [i_1]))), ((~(var_1)))))));
                var_15 -= ((/* implicit */int) (unsigned char)194);
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_8)))))));
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)44))));
}
