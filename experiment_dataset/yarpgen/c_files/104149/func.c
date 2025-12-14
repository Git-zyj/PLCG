/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104149
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) arr_2 [i_0]);
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
        arr_3 [i_0] = (-(((/* implicit */int) arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)12393)) >= (arr_4 [i_1] [i_1]))) ? (((/* implicit */int) (signed char)47)) : (min((((((/* implicit */_Bool) arr_5 [(signed char)19] [i_1])) ? (-1558405463) : (((/* implicit */int) var_6)))), (arr_4 [i_1] [i_1]))))))));
        var_24 = ((/* implicit */signed char) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) -2146008235))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_6 [i_1] [i_1])))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned short)13])) + (((/* implicit */int) arr_2 [i_2])))));
        var_25 *= ((/* implicit */signed char) min((min((max((((/* implicit */int) (signed char)-122)), (arr_1 [i_2] [4ULL]))), (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) arr_6 [5ULL] [i_2]))));
    }
    var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) 805306368)), (15684366858077607486ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)55)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-23557481509235297LL) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (var_14)))));
}
