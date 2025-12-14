/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110711
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (3072453943U))) : (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) ((var_5) ? (3072453943U) : (arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3072453936U)))) : (3072453936U)))));
        var_11 += 16053751155877655910ULL;
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (+(arr_7 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) max((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (3072453920U))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1 - 1])) + (26181))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_10 [i_2] [i_2])));
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1222513347U)) ? (3072453953U) : (((/* implicit */unsigned int) arr_13 [i_2]))))))) ? (((unsigned long long int) max((var_1), (1222513359U)))) : (arr_10 [i_2] [i_2])));
        var_14 = ((/* implicit */long long int) ((unsigned char) min((1222513353U), (((/* implicit */unsigned int) (short)28703)))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-15629)), (2146734172)))) ? (((arr_10 [i_2] [i_2]) - (((/* implicit */unsigned long long int) arr_13 [i_2])))) : (((/* implicit */unsigned long long int) min((1222513375U), (((/* implicit */unsigned int) arr_13 [i_2])))))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_9);
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((_Bool) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (var_0));
}
