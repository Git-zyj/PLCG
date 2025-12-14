/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183523
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((var_10) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))), (var_5)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)24])) ? (var_4) : (((long long int) ((((/* implicit */_Bool) 2139409206810275468LL)) ? (-1616310081) : (((/* implicit */int) (short)-22811)))))));
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [2ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22810))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0 + 1])) + (arr_1 [i_0])))), (10695009358582164240ULL)))));
        arr_3 [i_0 + 2] = (((!(((/* implicit */_Bool) var_2)))) ? ((~(arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))));
    }
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), ((unsigned short)32341)))) ? (min((((/* implicit */unsigned int) var_11)), (min((var_0), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2535657294808104220LL)))))))))));
}
