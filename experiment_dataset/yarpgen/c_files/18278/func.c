/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18278
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
    var_11 = ((/* implicit */signed char) var_4);
    var_12 = var_1;
    var_13 |= var_3;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_0 [i_0 - 4])))) ? (((/* implicit */long long int) ((-164798805) / (((int) arr_1 [(unsigned short)13] [(unsigned char)9]))))) : (((long long int) (unsigned short)31851)))))));
        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1878514127)) ? (((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [i_0 + 2])))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((-1990917088) / (max((-164798805), (1269794492))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 |= ((/* implicit */long long int) (unsigned char)249);
        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((0LL) >> (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1])))))));
    }
}
