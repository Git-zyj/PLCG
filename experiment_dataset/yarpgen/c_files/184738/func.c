/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184738
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)222)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 -= arr_0 [i_0];
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [2ULL] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 2580864357924740373LL))));
        var_16 = (+(arr_0 [i_0]));
    }
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_12))))))), (((((/* implicit */_Bool) 5942149262040096437ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-9)) - ((-2147483647 - 1))))) : (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_5))))))));
    var_18 = var_0;
}
