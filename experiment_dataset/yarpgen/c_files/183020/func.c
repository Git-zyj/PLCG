/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183020
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_1 [i_1 + 2] [i_0]))), ((~(((/* implicit */int) arr_1 [10LL] [i_1 - 3])))))))));
                var_15 |= ((/* implicit */unsigned int) ((7) < (((/* implicit */int) var_4))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                arr_7 [i_1 - 2] |= ((/* implicit */short) (((!((!(((/* implicit */_Bool) var_6)))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57543))) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2294561229231886809LL)) ? (1956389612) : (var_7)))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_4 [i_0 - 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 393001234))))), (var_9)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_12))));
}
