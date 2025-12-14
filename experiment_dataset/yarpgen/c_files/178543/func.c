/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178543
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 558766750)) : (((((/* implicit */_Bool) 3821643987540660274LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6815))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_9)) : (var_2)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [(signed char)12] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8LL]))) : (var_3)))) ? (3821643987540660274LL) : (min((-3821643987540660275LL), (((/* implicit */long long int) var_1))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))) & (var_0))))) : (max((min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_6)), (arr_1 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (3821643987540660274LL) : (((/* implicit */long long int) 1934885410U)))) << (((((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */short) arr_1 [i_1]))))) - (32593)))))) ? (((((/* implicit */_Bool) (unsigned short)3082)) ? (((((/* implicit */_Bool) 1022487830)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (2019616939U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    }
}
