/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152269
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
    var_11 = ((/* implicit */_Bool) var_5);
    var_12 ^= ((/* implicit */_Bool) ((max(((!(((/* implicit */_Bool) (unsigned short)63161)))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))))) ? (((var_7) / (((/* implicit */int) var_9)))) : (((((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) var_0)))) ? (var_7) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)108))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((arr_2 [i_1] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_10)) ? (((int) (short)11135)) : (((arr_1 [7ULL]) & (((/* implicit */int) var_8))))))));
                var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2048)) ? (arr_1 [i_1]) : (var_7)));
                arr_4 [i_0] = arr_0 [i_0] [i_0];
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])), (var_7)))) || ((!(arr_2 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_7);
}
