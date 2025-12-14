/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133469
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2725230980U)) ? (var_9) : (((/* implicit */int) var_5)))))))), (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_11)) : (var_7))))));
    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-26898))))) ? (((var_10) / (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) var_3)))), (min((((/* implicit */int) (signed char)58)), (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (-3402973464065675940LL) : (((/* implicit */long long int) 2725230980U)))) : (((/* implicit */long long int) ((int) (unsigned short)15)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) - (((/* implicit */int) var_2)))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
        }
    }
}
