/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111286
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)96)) - (((/* implicit */int) (short)6006)))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_5 [i_1] [i_1]))));
                var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 3])))) ? (((((/* implicit */int) arr_1 [i_0 - 4])) ^ (((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */int) arr_1 [i_0 - 3])) >> (((((/* implicit */int) arr_1 [i_0 - 3])) - (99)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) 3052389972U)) ? (-728695021) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-6008)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1242577324U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))))));
    var_18 = ((/* implicit */unsigned short) var_7);
}
