/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112354
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
    var_13 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_5), (((/* implicit */short) var_0)))))))));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)14924))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46131)) ? (8939800021445129548ULL) : (((/* implicit */unsigned long long int) -246172002))));
                var_16 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (1121764250U))) ? (min((((arr_5 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [9U] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)0)))), (var_3)))) || (var_0)));
}
