/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142807
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)72)), ((short)-19630)))) : ((~(var_9))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) min((var_14), (var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned int) arr_3 [i_1 + 1])), (var_4)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_14);
            }
        } 
    } 
}
