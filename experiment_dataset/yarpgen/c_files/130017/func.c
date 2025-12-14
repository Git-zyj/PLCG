/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130017
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1 - 1])), (var_8))))) : (arr_2 [i_1 + 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)5819)) == (((((/* implicit */int) (signed char)24)) + (((/* implicit */int) var_4))))))))));
                var_12 = ((/* implicit */unsigned long long int) ((short) ((unsigned int) arr_3 [i_1 - 1] [i_1 + 3] [i_1])));
                arr_6 [i_1 + 2] [i_1 + 1] = arr_5 [i_0] [i_0] [(short)23];
                var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) >= (arr_2 [i_1] [i_1 + 3])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 1])) ? (2147483647) : (arr_3 [i_0] [i_0] [i_1 + 2])))));
            }
        } 
    } 
    var_14 |= ((/* implicit */long long int) var_3);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (max((((((/* implicit */long long int) ((/* implicit */int) (short)-5476))) - (var_10))), (((/* implicit */long long int) var_3))))));
}
