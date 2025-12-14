/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102119
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_19)) * (((/* implicit */int) (unsigned char)199))))));
        var_21 = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */int) (~(((unsigned long long int) (unsigned short)3450))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) (unsigned short)240)))))) <= (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)159))))));
        var_23 = max(((~(((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_1] [i_1])))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5236821643252676274ULL)) ? (((/* implicit */int) (unsigned short)41337)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2836221303721981779ULL))))) : (((/* implicit */int) (signed char)-96))));
    }
    var_25 = min((((/* implicit */unsigned short) var_18)), (var_10));
}
