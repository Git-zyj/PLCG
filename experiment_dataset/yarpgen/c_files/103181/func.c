/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103181
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(var_8)))), (((((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) - (((((/* implicit */unsigned long long int) var_1)) + (arr_1 [i_0])))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 2755459556865859899LL))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [i_1])) * ((~(((/* implicit */int) (_Bool)1))))));
        var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [6U]))));
    }
    var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_8))))));
}
