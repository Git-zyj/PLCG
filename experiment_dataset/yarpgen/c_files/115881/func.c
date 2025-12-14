/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115881
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((((arr_1 [i_1]) % (((/* implicit */int) var_11)))) == (((/* implicit */int) ((short) (short)-6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 2])) : (max((((/* implicit */int) (unsigned short)21623)), (var_3)))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) : ((-(var_0)))))));
                arr_5 [i_0] [i_0] &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21809)) ? (7545778715317868558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((var_4), (((/* implicit */unsigned long long int) (short)6)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (var_4))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (min((var_2), (var_4))))) : (var_0)));
}
