/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112030
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [(unsigned short)22] [7U]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_1] [i_0])) : ((+(((/* implicit */int) arr_6 [i_2]))))))), (((((/* implicit */_Bool) ((var_12) + (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_0])))))) : (arr_1 [i_0])))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [5U] [5U])), (arr_0 [i_0] [i_1 + 2])))), (((((/* implicit */int) arr_5 [i_0] [i_2])) << (((((/* implicit */int) arr_4 [i_2 + 2] [i_1])) - (14464))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) max((var_16), (var_3))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_0))))))) : (max(((~(var_4))), (((((/* implicit */_Bool) var_14)) ? (var_12) : (var_1)))))));
    var_22 = (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)7045)), (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (var_12))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1))))));
    var_23 = min((((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_19)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)-7046))))))))));
}
