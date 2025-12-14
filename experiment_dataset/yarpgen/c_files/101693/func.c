/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101693
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_4)))))))));
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((20), (451481271)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) * (451481266)))) / ((+(8796091664475257730ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_19 = var_5;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) > (((/* implicit */int) var_1))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2951284703U))));
        var_22 = ((/* implicit */unsigned short) var_5);
    }
}
