/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112757
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
    var_11 = ((/* implicit */unsigned int) ((short) var_5));
    var_12 -= ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11259136111757261531ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)3] [i_1] [i_0])) && (((/* implicit */_Bool) var_7))))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_3 [(short)13])))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_2 - 2] [i_2 - 2])) < (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_2 - 2] [i_2 - 1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
