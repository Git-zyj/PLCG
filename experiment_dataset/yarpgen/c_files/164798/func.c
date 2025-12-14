/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164798
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
    var_16 = (-(var_11));
    var_17 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        var_18 = ((/* implicit */unsigned short) ((short) var_7));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        var_20 = ((/* implicit */short) var_2);
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) var_11);
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : ((~(var_12)))))));
    }
}
