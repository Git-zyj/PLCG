/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183561
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
    var_11 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max((var_10), (((/* implicit */signed char) var_3))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))), (((/* implicit */long long int) var_9))))));
    var_12 = ((/* implicit */unsigned char) min((9919481089783003496ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
        var_14 -= ((/* implicit */short) (~(((/* implicit */int) (!((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((arr_0 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? ((~(var_5))) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2LL])))))))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [(signed char)11] [(signed char)11]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_2 [i_1] [i_1]))))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_3))));
}
