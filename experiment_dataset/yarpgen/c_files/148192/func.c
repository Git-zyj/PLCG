/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148192
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
    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17))))))), (((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) -4991427680036224823LL))))), (var_17)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) arr_2 [i_0]);
        var_23 ^= ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_1 [i_0] [(short)3])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)13)))), (((/* implicit */int) ((unsigned short) (_Bool)1))))) <= ((~(((/* implicit */int) arr_0 [(signed char)11] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (-(((/* implicit */int) (short)-5369)));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16)))))))))));
        arr_6 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [11ULL] [i_1])))));
    }
}
