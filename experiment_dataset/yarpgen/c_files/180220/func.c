/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180220
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108)))))));
        var_12 |= ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((signed char) ((unsigned short) arr_1 [i_0 - 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2] [i_0]), (arr_2 [i_0 + 3] [i_0])))) ? ((~(((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) ? (((min((((/* implicit */unsigned int) 1510489354)), (915591590U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)112)) <= (((/* implicit */int) (signed char)-96)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (min((var_1), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-122)))))))));
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-120))));
    var_16 = ((/* implicit */unsigned int) var_7);
}
