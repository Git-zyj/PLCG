/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119825
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((((/* implicit */short) (unsigned char)34)), ((short)-146))))) ? (max((((/* implicit */long long int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (-4234552311653826544LL))) : (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (min((4194303LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((var_7) + (((/* implicit */unsigned int) var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_1] [0LL]))), (4194303LL)))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_1 [i_0])))) <= (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (short)21137)) : (var_5)))))) : (var_5)));
                var_13 -= max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (var_7)))) / (max((var_4), (((/* implicit */long long int) var_3))))))));
            }
        } 
    } 
}
