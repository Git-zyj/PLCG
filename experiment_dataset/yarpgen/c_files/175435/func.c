/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175435
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) : (arr_1 [i_0] [i_0])));
        var_13 = ((/* implicit */unsigned char) (signed char)10);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) 0)) : (((arr_1 [i_0] [i_0]) + (arr_1 [13U] [(_Bool)1])))));
        var_14 -= ((/* implicit */unsigned int) ((int) (-(var_4))));
        arr_4 [i_0] = ((/* implicit */signed char) ((var_2) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) 17774482)) : (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_10)) : (arr_1 [i_0] [i_0])))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((signed char) (+(arr_1 [i_1] [i_1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)238);
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_2)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_6)))))) ? (((var_6) + ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) var_0))));
}
