/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182956
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
    var_18 &= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) -1)))) ? (17453080807314862962ULL) : (((/* implicit */unsigned long long int) 0LL))));
        var_20 *= ((((/* implicit */_Bool) var_15)) ? (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))) : (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] = arr_2 [i_1] [i_1];
        arr_6 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_21 = ((/* implicit */unsigned char) ((arr_2 [(unsigned short)6] [i_1]) ? (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1])))) : (((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)13))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
        var_22 = ((/* implicit */unsigned long long int) var_14);
    }
    var_23 = ((/* implicit */unsigned int) var_16);
}
