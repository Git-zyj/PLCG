/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148584
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
    var_14 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1546730386U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [10ULL] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(short)14]))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [2LL] [i_0]))))))))));
    }
    var_18 = ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
}
