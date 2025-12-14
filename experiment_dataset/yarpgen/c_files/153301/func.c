/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153301
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
    var_14 = ((/* implicit */unsigned int) (-((+(((((/* implicit */long long int) var_5)) | (var_2)))))));
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((long long int) var_11)), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [(unsigned char)13] [i_0 + 1])) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [(short)13] [i_1] [6U]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 - 3])), (var_9)))))))));
                arr_6 [i_0] [i_1] [17U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_4 [i_0] [i_0 - 4]) : (((/* implicit */long long int) 832893206))))) ? (((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_7)))) : (((arr_4 [i_0] [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)38698)) : (((/* implicit */int) (_Bool)1)))) | (((arr_2 [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
