/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188957
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
    var_20 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (+((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_1 [i_0]) >> ((((((-2147483647 - 1)) - (-2147483629))) + (38)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1083109518)) ? (4294965248U) : (((/* implicit */unsigned int) -1083109519))))) ? (((((/* implicit */long long int) 1073741824)) & (var_11))) : (((/* implicit */long long int) max((1073741824), (-1083109519))))))));
        arr_4 [10LL] [10LL] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1083109517)) ? (((/* implicit */int) arr_0 [18LL])) : (1083109519))), (((/* implicit */int) ((arr_1 [17]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) (short)-32759))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [(signed char)12] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) -5LL)))), (((arr_0 [18]) || (((/* implicit */_Bool) arr_6 [i_1]))))));
        arr_8 [i_1] = (~(arr_5 [20LL]));
    }
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) / ((+(767695592)))))) % (-132398041676506333LL)));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((3648575423U), (((/* implicit */unsigned int) (unsigned char)255)))) + (((/* implicit */unsigned int) (+(1083109519))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) ((((/* implicit */int) (short)-16384)) - (((/* implicit */int) var_4))))), (var_11)))));
}
