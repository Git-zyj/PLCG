/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127727
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
    var_13 = ((/* implicit */unsigned short) min((((((var_6) + (((/* implicit */long long int) var_12)))) + (((var_6) - (var_6))))), ((+(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-9175)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0])), (var_1)))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)13] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 3] [i_0 - 1]))))))) ? (-9223372036854775788LL) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)8] [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-16))))))))))));
                    arr_9 [i_0] [i_0] [i_1 - 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) | (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32740))) : (var_5)))))) ? (((/* implicit */int) min((arr_5 [(unsigned short)5] [i_2 + 1] [i_2 - 1]), (((/* implicit */unsigned char) ((signed char) var_7)))))) : (((/* implicit */int) (unsigned short)32767))));
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2350650945U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 3]))) : (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                }
            } 
        } 
    } 
}
