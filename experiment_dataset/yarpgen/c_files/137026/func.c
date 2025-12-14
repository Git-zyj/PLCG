/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137026
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
    for (int i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && ((_Bool)1))))) : (max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */long long int) var_10)) ^ (-4140784709693221472LL)))))));
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [(signed char)13])))))))));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) (unsigned char)219)))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */signed char) (short)1665);
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((int) arr_2 [i_1 + 1]))), (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (arr_0 [i_1 - 2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    }
    var_19 = ((/* implicit */unsigned short) var_2);
}
