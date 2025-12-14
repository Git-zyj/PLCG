/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184042
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
    var_18 = ((/* implicit */long long int) max((var_18), (var_12)));
    var_19 = min((((/* implicit */long long int) var_5)), (max((((long long int) (signed char)-110)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) var_5))))))));
    var_20 |= ((/* implicit */int) ((unsigned long long int) max((min((var_12), (((/* implicit */long long int) var_14)))), (min((((/* implicit */long long int) var_15)), (var_8))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_10))))) ? (((arr_1 [6U]) >> (((((/* implicit */int) var_11)) + (50))))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)0)))))))));
        var_22 &= ((/* implicit */signed char) ((((unsigned long long int) ((unsigned short) var_6))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */int) var_5)))))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((short) ((unsigned long long int) var_8)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [(short)6])) ? (((((/* implicit */_Bool) var_6)) ? (2450786856305489643ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)10]))))) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [2LL])) / (((((/* implicit */_Bool) arr_2 [0] [0])) ? (((/* implicit */int) arr_3 [(short)8])) : (((/* implicit */int) var_7))))))))))));
        arr_4 [10LL] |= arr_2 [i_1] [4LL];
    }
}
