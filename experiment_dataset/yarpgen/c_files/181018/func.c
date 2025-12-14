/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181018
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) << (((var_4) + (618261047)))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) ((unsigned short) var_8))))) : ((~((~(var_9))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))) || (((/* implicit */_Bool) ((int) var_9)))));
                var_13 &= ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)46721)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (signed char)127))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 2425499795U)) && (((/* implicit */_Bool) arr_0 [(unsigned short)2] [i_0])))) || (var_3))))));
            }
        } 
    } 
}
