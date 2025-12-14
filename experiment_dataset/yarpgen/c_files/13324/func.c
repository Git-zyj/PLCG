/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13324
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((7375466334410029693ULL), (((/* implicit */unsigned long long int) 1131944441151561800LL)))) - (((/* implicit */unsigned long long int) ((((-1131944441151561801LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (39512))))))))) ? (10438132372185571147ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) + (((((/* implicit */_Bool) (signed char)-23)) ? (1131944441151561802LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)22))) != ((~(1131944441151561800LL)))))) % (arr_1 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (signed char)22)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1]))));
    }
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (max((var_3), (((/* implicit */unsigned long long int) -1131944441151561809LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-19))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-19)))))));
}
