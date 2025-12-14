/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17732
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) min((var_4), (var_14)))) : (((/* implicit */int) ((signed char) var_12))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 3] [i_2] [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_3 [i_0 + 2] [i_0] [i_0]))), (((((/* implicit */int) (signed char)-124)) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1]))))))) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((((/* implicit */int) (signed char)112)) % (((/* implicit */int) (signed char)22)))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)127)))))) : (min((((((((/* implicit */int) (signed char)-110)) + (2147483647))) << (((((((/* implicit */int) arr_2 [(signed char)15])) + (4))) - (2))))), (((/* implicit */int) min((var_9), (arr_1 [i_0] [i_1]))))))));
                    var_18 -= (signed char)45;
                    arr_8 [i_0] [i_1] [(signed char)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2] [i_2 - 2])) + (((/* implicit */int) (signed char)73))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) (signed char)-1))))));
                }
            } 
        } 
    } 
}
