/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178056
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((long long int) 266338304))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_8))))) : (var_11)))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 266338304))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (15872ULL)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (2673803138U) : (2147483648U))) : (((/* implicit */unsigned int) ((int) (unsigned char)7))))));
                arr_5 [14LL] [i_1] [(unsigned char)14] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((long long int) ((short) 2080374784))) : (((/* implicit */long long int) ((/* implicit */int) (short)-28596)))));
            }
        } 
    } 
}
