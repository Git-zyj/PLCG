/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148010
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (((((/* implicit */_Bool) (short)11862)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)102)))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_5))))))));
    var_17 -= max((((/* implicit */long long int) (+(((/* implicit */int) max((var_12), ((unsigned char)118))))))), (var_1));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)19)) << (((4523258566991365354ULL) - (4523258566991365341ULL))))), (((/* implicit */int) var_8))))) : (((min((var_15), (((/* implicit */long long int) (unsigned char)237)))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((arr_2 [i_0]) * (arr_2 [i_0 - 2]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) (~(var_7)))) + (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 1])) >= (arr_2 [i_0]))))) - (var_1)))));
    }
}
