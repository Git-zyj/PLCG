/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102
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
    var_19 = ((/* implicit */unsigned long long int) ((signed char) (((_Bool)0) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_18))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((var_7) << (((((/* implicit */int) (signed char)-21)) + (49))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_7) - (1995615411U))))))))));
    var_21 = ((/* implicit */unsigned short) ((((int) ((unsigned short) var_12))) * (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (~(var_4))))) ? (var_14) : (((arr_0 [i_0 - 3]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_23 = min((((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) & (var_0)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [(signed char)2])))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (var_12)))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) (-(var_4)))) ? (3607389074U) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (signed char)4)))))))));
            var_25 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)98))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_8))))) || (((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (signed char)4))))))));
        }
    }
}
