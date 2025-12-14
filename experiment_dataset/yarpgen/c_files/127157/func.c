/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127157
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
    var_15 = ((/* implicit */unsigned int) (-(var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 ^= arr_0 [i_0];
        arr_2 [i_0] [i_0] = (((((_Bool)1) && (((/* implicit */_Bool) var_4)))) ? (5233380063959622274ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])));
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (~(596806255032809421LL))));
        arr_3 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 += ((/* implicit */unsigned int) max((max((arr_0 [i_1]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (arr_0 [i_1])))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_10)))))) : (((long long int) 3968U))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_4 [i_1]))))))));
    }
    var_19 = ((/* implicit */unsigned int) var_13);
}
