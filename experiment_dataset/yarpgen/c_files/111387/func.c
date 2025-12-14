/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111387
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
    var_14 = ((/* implicit */unsigned char) var_12);
    var_15 = ((/* implicit */unsigned long long int) (-(4127009719634785853LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) -4127009719634785854LL)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_0 [(unsigned char)3] [i_0])))));
        var_17 = ((/* implicit */long long int) var_9);
        var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [4U]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = (+(max((1005952567055914606LL), (((/* implicit */long long int) 897631596)))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */int) arr_0 [i_1] [14ULL]);
    }
    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
}
