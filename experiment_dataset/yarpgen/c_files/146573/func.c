/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146573
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
    var_19 = ((1940037326) << (((((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_5)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41899)))))))) - (3262234946U))));
    var_20 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) 4294967285U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)21262)) : (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_22 &= ((/* implicit */signed char) ((unsigned long long int) arr_6 [i_1] [i_1]));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_7);
    }
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2 + 1] [i_2]);
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) var_2)), ((+(((long long int) var_15))))));
    }
    var_23 = ((/* implicit */unsigned char) ((var_16) ^ (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))))));
}
