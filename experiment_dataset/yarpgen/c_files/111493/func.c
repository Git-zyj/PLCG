/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111493
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [6LL]) : (arr_0 [i_0 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        var_17 += ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_1 [i_0 + 1])))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 627856416325443096LL)) ? (((/* implicit */int) (unsigned short)57719)) : (arr_0 [i_0])))))) : (arr_1 [i_0 - 1]));
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_0])), (min((((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */int) var_2))))), (arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 4; i_1 < 23; i_1 += 4) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2]))) : (627856416325443096LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_4)) : (arr_4 [(unsigned char)12]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1])))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1 - 2])), (627856416325443082LL)))), ((-(((((/* implicit */unsigned long long int) var_0)) - (18446744073709551615ULL))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) arr_3 [i_1 - 2])), (((((/* implicit */_Bool) arr_4 [(unsigned char)24])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_14)))))));
        arr_6 [17LL] [i_1] = arr_4 [i_1];
    }
}
