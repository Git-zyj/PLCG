/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184319
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_17)), ((~(min((var_14), (((/* implicit */unsigned long long int) var_3))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) ((15726852445428829211ULL) >> (((var_3) + (6027958159642044615LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 += ((/* implicit */long long int) var_0);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1] [i_0 - 2]) : (var_16)))) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) var_5)))))) ^ (((/* implicit */unsigned long long int) ((min((1040187392U), (((/* implicit */unsigned int) var_1)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [24ULL] [i_1])) : (((/* implicit */int) (unsigned short)7450))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26563))));
                var_23 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (short)7200)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0]))))))) : (min((arr_2 [i_0] [2LL]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                var_24 = ((/* implicit */unsigned short) ((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
}
