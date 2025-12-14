/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152434
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
    var_17 ^= (~(((/* implicit */int) (unsigned short)65535)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [4LL] = ((/* implicit */int) var_4);
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_1)))))) ? (min((((/* implicit */int) arr_0 [i_0 + 1] [i_1])), (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2] [i_1])))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_11)))));
}
