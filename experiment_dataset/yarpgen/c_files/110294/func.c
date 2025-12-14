/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110294
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)195)), ((unsigned short)65535))))), (((((/* implicit */_Bool) (-(2652477311U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (arr_1 [i_0 - 1] [i_1 + 4])))));
                arr_8 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((short) (unsigned char)173))))));
                var_16 = ((/* implicit */unsigned char) arr_1 [i_1 + 4] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? ((-(13314636559751653441ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((2148768503539994262ULL) - (var_9))), (((/* implicit */unsigned long long int) var_1))))) ? (var_15) : (((/* implicit */unsigned long long int) ((long long int) var_12)))));
}
