/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156730
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (63)))))) ? (max((((var_6) << (((/* implicit */int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) << (((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)27465)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_19 = (_Bool)1;
        arr_7 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((arr_0 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    }
    var_20 = (-(((/* implicit */int) (_Bool)0)));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 4194303))));
    var_22 = ((unsigned char) min((((((/* implicit */int) var_11)) / (-1195629730))), (min((1195629729), (((/* implicit */int) var_1))))));
    var_23 = 1195629730;
}
