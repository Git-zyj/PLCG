/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124341
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)246))) ? (((((/* implicit */int) (unsigned char)65)) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_5 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) - ((~(((/* implicit */int) ((unsigned char) (unsigned char)74)))))));
                arr_7 [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_15 |= var_3;
}
