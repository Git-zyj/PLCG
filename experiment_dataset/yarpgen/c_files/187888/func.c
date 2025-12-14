/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187888
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
    var_12 = var_3;
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)5))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                arr_5 [(unsigned char)4] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) arr_1 [(unsigned char)7])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)116))))))) ? (((/* implicit */int) max(((unsigned char)128), ((unsigned char)128)))) : (((/* implicit */int) min((((unsigned char) var_11)), (((unsigned char) arr_0 [(unsigned char)7])))))));
            }
        } 
    } 
}
