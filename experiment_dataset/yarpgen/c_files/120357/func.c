/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120357
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) -81590525)) ? (10901113514360668795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))))) : (((unsigned long long int) var_3))));
        var_18 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(unsigned char)2]))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)123))))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14831164945089246790ULL))))), (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 1])) : (arr_4 [i_1 + 2])))));
        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_4 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [3LL])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (_Bool)0)))))))));
        var_21 -= (!(((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)113), ((unsigned char)59))))) == (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_5) : (var_15))))));
        var_22 = ((/* implicit */unsigned char) ((2425432060U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))));
    }
    var_23 = var_3;
}
