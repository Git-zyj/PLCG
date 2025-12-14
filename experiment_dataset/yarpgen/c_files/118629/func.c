/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118629
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))), (var_5)))) || ((!((!(((/* implicit */_Bool) var_9))))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((int) arr_2 [i_0 - 1] [i_0]))), (((((/* implicit */_Bool) var_10)) ? (arr_2 [13ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2] [i_0])))))))));
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3811252034U))))))))));
    }
    var_15 = ((/* implicit */long long int) var_7);
}
