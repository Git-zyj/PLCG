/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157170
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
    var_17 |= ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [(short)4] [(short)4]) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) : (min((((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 + 2])), (arr_3 [i_1 + 1] [i_1 + 1])))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0]))))))));
                arr_5 [2LL] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
