/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160096
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) * (((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_11)) - (96)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_6))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) < (((/* implicit */int) var_15)))) ? ((~(((/* implicit */int) var_18)))) : (((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)98))))))) ? (((((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))));
    var_22 = (signed char)(-127 - 1);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : ((~(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((signed char) var_11)))));
                    arr_10 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18)))) << (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0)))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-83)) < ((~(((/* implicit */int) (signed char)110))))));
                }
            } 
        } 
    } 
}
