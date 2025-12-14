/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152399
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
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))) : (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31012)))))))) ? (var_0) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = min((max((((/* implicit */unsigned char) arr_1 [i_0])), (var_10))), (((/* implicit */unsigned char) max((min((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (arr_3 [i_0]))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_15);
                var_20 = ((/* implicit */unsigned int) var_7);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_13)))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned int) 2147483621))))) ? (min((((/* implicit */int) (_Bool)1)), (-1563301752))) : (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) (short)18134)) - (18127))))))) : (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_1);
}
