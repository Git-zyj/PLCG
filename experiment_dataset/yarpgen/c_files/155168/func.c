/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155168
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (arr_4 [i_1])))) : (arr_2 [i_0 - 2])))));
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 + 1]))))) % (var_4)));
                var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0 + 3])))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (1510146385)));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) var_8))) : (((int) (_Bool)0)))));
}
