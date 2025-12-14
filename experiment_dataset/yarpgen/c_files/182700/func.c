/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182700
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
    var_12 += max((max((var_8), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (short)15461)) : (((/* implicit */int) (short)15461))))) ? (((((/* implicit */_Bool) (short)20679)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((short)18000), ((short)15448)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15454))) : (arr_1 [i_0 - 1] [i_0])))));
        var_14 = min((max((arr_0 [(short)17]), (arr_1 [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) min((9134460293748694281LL), (((/* implicit */long long int) (short)15461))))));
    }
    var_15 = ((/* implicit */short) var_11);
}
