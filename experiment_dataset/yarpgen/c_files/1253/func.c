/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1253
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
    var_19 = ((/* implicit */int) (unsigned char)15);
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        arr_3 [i_0 + 1] &= ((/* implicit */long long int) var_15);
        var_21 = ((/* implicit */long long int) (_Bool)1);
        var_22 += ((/* implicit */unsigned long long int) (-(max(((+(0U))), (((/* implicit */unsigned int) (unsigned char)15))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (arr_1 [i_1]))))));
        var_23 &= ((/* implicit */int) var_5);
        var_24 = ((unsigned int) arr_1 [i_1 - 2]);
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_15);
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30226))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((((/* implicit */_Bool) 4347761565091972748LL)) ? (7041335567171713350LL) : (8803108428845050822LL))), (min((5103573694987191551LL), (((/* implicit */long long int) var_16))))))));
}
