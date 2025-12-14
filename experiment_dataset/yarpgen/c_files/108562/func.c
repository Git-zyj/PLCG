/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108562
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
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0ULL)))) ? (var_15) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((short) min((((/* implicit */int) var_4)), (var_15))))) : (max((var_3), (min((var_12), (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_0 [(_Bool)1]);
                arr_4 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_1]))) ? (max((((/* implicit */unsigned long long int) ((short) arr_3 [i_0] [(unsigned short)4]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [8] [0LL]) : (arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65533)), (4294967287U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (var_3)));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15865)) ? (2U) : (17U)))) ? (var_12) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    var_20 = ((/* implicit */int) var_6);
}
