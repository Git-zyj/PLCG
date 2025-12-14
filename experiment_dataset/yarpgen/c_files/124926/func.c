/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124926
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)43)))) < (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1] [i_0]), (((/* implicit */unsigned short) var_9))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65534)))))) : (((/* implicit */int) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))))));
                var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? ((+(((((/* implicit */int) (unsigned short)54561)) * (((/* implicit */int) (unsigned short)35138)))))) : (((/* implicit */int) ((unsigned short) (unsigned char)25)))));
}
