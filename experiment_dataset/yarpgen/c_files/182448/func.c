/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182448
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
    var_14 -= ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_8)) - (15)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) : (var_5))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), ((unsigned short)54996)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((arr_6 [i_1] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 1]))))))))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)1] [i_1])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_1])) : (((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])) - (181))))))) : (((/* implicit */int) var_6))));
                    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) (signed char)-73)) % (((/* implicit */int) (signed char)-112))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) var_7);
}
