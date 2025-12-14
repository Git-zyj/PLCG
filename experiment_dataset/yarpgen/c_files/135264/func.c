/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135264
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_4) * (arr_8 [i_0] [i_0 + 3]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_1]))))))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) ((((arr_2 [i_0 - 1]) & (arr_7 [i_0] [i_0] [i_1] [(unsigned char)5]))) >= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)132), ((unsigned char)112))))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned int) (unsigned char)143)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_0 + 2] [i_1] [i_0 + 2]) <= (313274803U)))))));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))) == (((((/* implicit */_Bool) 1063387919U)) ? (1063387919U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) 4290111992U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) + (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))))) : (max((arr_7 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned int) min((arr_9 [i_1]), ((unsigned char)30))))))));
                }
            } 
        } 
    } 
    var_14 = ((var_11) - (((127400715U) - (((((/* implicit */_Bool) (unsigned char)171)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_15 |= ((/* implicit */unsigned int) (unsigned char)30);
    var_16 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) 4078594285U))), (max((var_0), (var_12)))));
}
