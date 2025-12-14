/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15325
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)-15)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))))));
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((max((((arr_2 [i_0] [(_Bool)1]) / (arr_2 [i_0] [(unsigned char)12]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_1 [i_0])))))) / ((+(min((arr_2 [i_0] [22U]), (((/* implicit */int) var_4)))))))))));
        var_11 *= ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)-28)) <= (((/* implicit */int) (signed char)-33)))), (var_0)));
    }
    var_12 = (((-(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1194079879U))))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (max((((/* implicit */unsigned int) (_Bool)1)), (2372225557U))))));
    var_13 -= ((/* implicit */int) var_0);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((16ULL), (((/* implicit */unsigned long long int) var_4)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)47)))), (((((/* implicit */int) (signed char)33)) + (var_9))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (signed char)21))))) - (249))))))))));
}
