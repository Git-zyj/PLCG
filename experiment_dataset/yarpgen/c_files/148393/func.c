/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148393
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-16))))))) : (var_1)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2839470158U)) : (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 2718457596U);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-6233))))) < (var_1))))) | ((-(arr_2 [i_0])))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_0 [5U]);
        arr_7 [i_1] = ((/* implicit */int) arr_5 [i_1] [9]);
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((int) arr_4 [i_1])) - (((/* implicit */int) ((1107330795924211092LL) < (arr_1 [i_1 + 1] [i_1])))))))));
    }
}
