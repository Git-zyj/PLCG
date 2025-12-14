/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187701
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_4);
        var_13 = var_9;
        var_14 = ((/* implicit */unsigned long long int) ((((((long long int) (_Bool)1)) <= (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))) ? (7003585296384763982LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [(unsigned char)6] [i_0]), (arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_1 [17LL] [17LL])))) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)21]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (12805)))))) : ((~(5279314799979932854LL)))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = arr_3 [i_1];
        var_16 -= ((/* implicit */unsigned char) var_9);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (var_7))))));
    }
    var_18 = ((((unsigned int) var_5)) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -9105349787121109253LL)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)-7581)))) : (((/* implicit */int) var_7))))));
}
