/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166668
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (arr_1 [i_0 - 1])));
        var_16 |= ((/* implicit */_Bool) 1049882593);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21211)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98)))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1367401978676611698LL) <= (var_1)))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)65528))))) : (((var_12) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */short) min((var_12), (var_1)));
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    var_23 = ((/* implicit */int) var_8);
}
