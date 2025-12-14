/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183533
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
    var_14 |= ((/* implicit */unsigned short) ((max((((/* implicit */int) var_5)), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_11)))))) | (((/* implicit */int) (unsigned short)52621))));
    var_15 = ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52614)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (unsigned char)207)) ? (1629723651U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)100))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
        arr_6 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)24))));
        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)7524))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_4))))) : (((((/* implicit */_Bool) var_9)) ? (16261121943954003622ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (var_6))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1300133275U)))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 915237733U)) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_1))))))), (min((((/* implicit */unsigned int) (unsigned short)52605)), (min((((/* implicit */unsigned int) (unsigned char)255)), (1522662279U)))))));
}
