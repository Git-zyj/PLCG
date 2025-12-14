/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135565
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
    var_16 = ((/* implicit */unsigned short) (-(min((max((var_9), (var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) arr_1 [i_1] [i_0]))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((arr_4 [(unsigned short)5] [i_1]) | (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((var_10) & (((/* implicit */unsigned int) -2147483644)))))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_4)))), ((~(var_9)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >= (((/* implicit */int) var_1))))) : (((((/* implicit */int) ((_Bool) var_6))) | (((((/* implicit */int) arr_3 [i_1] [10U])) ^ (((/* implicit */int) (unsigned short)37520)))))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (-(arr_0 [8LL] [i_0]))))) ? (((((((/* implicit */int) (unsigned short)37520)) & (((/* implicit */int) (short)-1)))) / (((/* implicit */int) ((signed char) (unsigned short)65531))))) : (((((/* implicit */_Bool) arr_1 [i_0] [6U])) ? (((/* implicit */int) (short)-19)) : (var_4))))))));
                var_20 += ((arr_3 [i_0] [2U]) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((arr_3 [i_0] [0]), (arr_3 [(short)10] [(short)4])))), (min(((unsigned short)58171), (((/* implicit */unsigned short) (_Bool)0))))))) : (((int) ((var_0) / (((/* implicit */long long int) var_8))))));
            }
        } 
    } 
}
