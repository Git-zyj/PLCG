/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126020
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [4LL] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_5)), (arr_1 [i_0])))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_0 [i_0 + 1] [7ULL]) - (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_4), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) == (((/* implicit */long long int) var_13)))))) : (arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) ((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1]))) | ((~(arr_1 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))) ? (var_16) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] &= ((/* implicit */short) (+(arr_1 [(short)3])));
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (10351276810673209847ULL))))));
}
