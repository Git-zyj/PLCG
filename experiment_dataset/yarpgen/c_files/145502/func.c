/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145502
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
    var_10 = ((/* implicit */_Bool) var_9);
    var_11 = ((/* implicit */signed char) (short)-24277);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)24274)))), ((-(((/* implicit */int) (short)24256))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((156075876U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)24291)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) max((((/* implicit */long long int) var_4)), (((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24276))) : (777261251408101507LL))))));
        arr_4 [i_0] = ((/* implicit */int) ((arr_0 [i_0]) ? (((((/* implicit */long long int) 3108767259U)) & (var_3))) : (max((((/* implicit */long long int) max((var_4), (((/* implicit */signed char) var_0))))), (max((((/* implicit */long long int) var_1)), (arr_3 [i_0])))))));
        arr_5 [(short)4] [i_0] = ((_Bool) var_3);
    }
}
