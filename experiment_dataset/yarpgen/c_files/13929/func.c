/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13929
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_11 = max((max((min((((/* implicit */long long int) (unsigned char)86)), (-12LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 13LL)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)98))))))), (((/* implicit */long long int) var_6)));
        var_12 = -2726856592067978860LL;
        arr_2 [i_0] = ((long long int) ((((777789677980013262LL) >> (((arr_1 [i_0]) - (1641725601))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (2726856592067978868LL)))));
        var_13 = ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-2940972215330184865LL) : (9223372036854775807LL)))))) ? (max(((~(2940972215330184895LL))), (max((-5298400191803710706LL), (7553916747999741010LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) != (min((var_1), (arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_0 [i_1])))), (min((max((((/* implicit */unsigned long long int) var_6)), (8102183702438450547ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
        var_15 ^= ((((/* implicit */_Bool) ((long long int) min((9223372036854775801LL), (var_5))))) ? (-3726365678941423079LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))));
    }
    var_16 ^= var_3;
}
