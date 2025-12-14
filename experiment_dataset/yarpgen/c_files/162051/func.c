/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162051
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
    var_16 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 += ((/* implicit */short) ((unsigned long long int) ((min((((/* implicit */long long int) var_15)), (arr_0 [12U]))) >> (((((/* implicit */int) arr_1 [(unsigned char)3])) - (32364))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [6U]))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)21147)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (897703948561371496LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_0 [(_Bool)1])))) : (((163006438) ^ (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -897703948561371497LL)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */unsigned short) arr_4 [i_1 - 1]);
        var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_4))))))));
    }
}
