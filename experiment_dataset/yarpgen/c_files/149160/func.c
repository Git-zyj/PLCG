/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149160
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (var_12))))));
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)18198))));
                var_21 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_5 [i_0 + 2] [i_1]))))));
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (short)-12307)) : (((/* implicit */int) (short)-32752))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))))) ? ((((-(((/* implicit */int) var_9)))) - (((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) var_9)))))) : ((-(((((/* implicit */int) (short)32758)) + (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-10561), (var_9)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))))))));
    var_24 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))))));
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */int) (short)-32745)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) (short)-1)) + (5))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))))));
}
