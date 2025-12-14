/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153113
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((signed char) (unsigned char)87))) : (((/* implicit */int) var_17)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_18), (arr_3 [i_0])))) % (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))) ? ((-(((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) var_10))))))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_14)), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_14)))))))));
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned char) var_16)), ((unsigned char)63)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_10)))))))));
    var_24 = ((/* implicit */unsigned char) var_18);
}
