/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10771
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
    var_19 = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) var_17))))));
    var_20 += var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_3 [(unsigned char)7] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) / (((/* implicit */int) max((var_13), (arr_2 [i_1] [i_0])))))), (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_18))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (max((min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)197))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(unsigned char)5] [i_0]), (((/* implicit */unsigned short) var_6)))))) == (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (arr_4 [(unsigned short)2] [i_1])))))))));
            }
        } 
    } 
}
