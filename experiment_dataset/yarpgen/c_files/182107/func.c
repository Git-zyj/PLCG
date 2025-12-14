/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182107
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
    var_10 |= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [(signed char)6] |= min((((/* implicit */long long int) ((unsigned short) ((unsigned short) arr_1 [i_0])))), (arr_1 [i_0]));
        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))) | (((int) var_7))));
        var_12 = ((/* implicit */int) ((max((((unsigned int) var_9)), (max((((/* implicit */unsigned int) (signed char)-105)), (224U))))) << ((((-(arr_1 [i_0]))) + (6843855597268408442LL)))));
    }
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_6)) - (42389)))));
}
