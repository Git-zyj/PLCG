/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10665
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
    var_10 = ((/* implicit */unsigned int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (2816891452U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (-4))))))));
    var_11 &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-9531))))) < (var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_1)))))) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 &= (((-(arr_2 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) > (((/* implicit */int) var_8)))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [(unsigned short)4] [i_1] [i_0])) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((_Bool) -5184672647988059302LL)))))));
            }
        } 
    } 
}
