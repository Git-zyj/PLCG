/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187062
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((max((max((((/* implicit */int) arr_3 [(unsigned char)21] [i_1] [i_1])), (var_5))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (arr_4 [i_0] [i_0])))))) >> ((+(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1] [(unsigned char)21] [i_1]))))) ? (((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */unsigned int) var_5)) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)94)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned int) var_13)), (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */int) arr_1 [i_0])))))))));
                var_19 -= ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_8), (var_10)))) ? (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)19980)) - (19957))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (var_2)))))), (min((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_2))))), ((~(((/* implicit */int) var_9))))))));
}
