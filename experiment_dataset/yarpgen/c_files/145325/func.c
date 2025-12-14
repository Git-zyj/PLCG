/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145325
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-11611))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((((/* implicit */_Bool) ((arr_1 [i_0]) | (arr_1 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)141)), ((short)-11606))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20779))) : (var_11))))), (((/* implicit */long long int) ((short) ((arr_1 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11611))))))))))));
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_0 [i_0 + 1]), ((short)11611))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (((((-(((/* implicit */int) (short)11629)))) == ((-(((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 1]), ((short)-32758))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_3)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_3))) || (((/* implicit */_Bool) (short)32736)))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)166)))))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((min((var_6), (((/* implicit */unsigned long long int) var_2)))) >> (((/* implicit */int) ((var_8) == (var_8)))))));
}
