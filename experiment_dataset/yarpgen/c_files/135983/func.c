/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135983
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
    var_10 = ((/* implicit */short) min((9650469331060002509ULL), (((((/* implicit */_Bool) 396710634U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)201)), (2305843009213689856LL)))) : (8444473448759003884ULL)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((unsigned short) (unsigned char)240));
        var_12 &= ((/* implicit */unsigned short) ((unsigned int) var_7));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 67108864)) > (9650469331060002509ULL)));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(1879048192U)))) - (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_14 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2]))));
        var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_2 - 1]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
        var_17 = ((/* implicit */unsigned short) ((((long long int) (signed char)-54)) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    }
}
