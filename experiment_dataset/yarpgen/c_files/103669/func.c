/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103669
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) / (1ULL)));
        arr_5 [i_0] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (12929223293778713596ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14677)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) (unsigned short)53664))))), ((+(var_2)))));
    }
    for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)3)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)8]))) : (-7930560517452103937LL)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1672765366)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_1])), (((unsigned int) var_10)))))));
    }
    var_19 = max((var_1), (((unsigned long long int) var_11)));
}
