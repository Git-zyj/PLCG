/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175495
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((var_3), (var_12))))))), (((min((var_2), (((/* implicit */unsigned int) var_5)))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)13838)))))))));
    var_20 = var_17;
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_1 [16U]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_22 = arr_0 [(signed char)1];
        var_23 = (unsigned short)13821;
        var_24 = arr_1 [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_25 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) (signed char)-100)))))));
        var_26 = (unsigned short)13822;
        var_27 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((unsigned short) var_8))), (arr_3 [i_1]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (unsigned short)38857)) : (((/* implicit */int) arr_1 [i_1]))))) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) arr_4 [(unsigned short)15] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) : (3234473335U)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((1060493960U) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    }
    var_28 = ((/* implicit */unsigned short) var_18);
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
}
