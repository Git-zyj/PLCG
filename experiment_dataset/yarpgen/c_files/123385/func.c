/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123385
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
    var_13 = ((/* implicit */int) ((unsigned short) var_9));
    var_14 = (+(-1));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58403)) ^ (-928065984)))) ? (min((var_8), (var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (min((((/* implicit */unsigned int) var_5)), (arr_2 [i_0]))))))) - ((-(0U))))))));
                arr_6 [i_0 + 1] [(unsigned short)6] [i_0] = min((((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_9)));
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) : (((var_6) * (((/* implicit */unsigned int) arr_3 [(_Bool)1]))))))) ? (((/* implicit */int) var_12)) : (((arr_4 [i_0 - 3] [i_0 - 1]) ^ (var_4)))));
            }
        } 
    } 
}
