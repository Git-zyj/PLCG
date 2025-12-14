/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109933
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
    var_20 = min((((/* implicit */int) var_8)), (((int) var_12)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) max((var_2), (((/* implicit */unsigned short) var_11)))))) ? (((/* implicit */long long int) -2034202475)) : (var_15)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (signed char)10))));
        var_23 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_24 = ((/* implicit */int) max((var_24), (-2034202473)));
        var_25 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (1170396598)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) arr_0 [i_1] [i_1]);
        var_26 = ((/* implicit */unsigned short) min((var_26), (arr_3 [i_1])));
        arr_5 [i_1] = ((/* implicit */short) var_18);
        var_27 = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 4; i_2 < 16; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) arr_9 [i_2 - 2] [i_2 - 1]);
    }
    for (int i_3 = 4; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((unsigned long long int) -2034202471));
        var_28 = ((/* implicit */signed char) 14960922443074203397ULL);
    }
    var_29 = ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (-2147483647 - 1)))), (var_7)));
}
