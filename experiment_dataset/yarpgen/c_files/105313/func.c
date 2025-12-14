/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105313
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned short) var_2)), (var_10)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */long long int) arr_1 [12ULL]);
        arr_2 [i_0 + 1] [i_0 + 1] = min((arr_0 [i_0 + 3]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (((/* implicit */long long int) var_10)))) : (min((arr_0 [i_0]), (((/* implicit */long long int) var_1)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) + (var_7))), (((/* implicit */unsigned long long int) max((-655703806), (((/* implicit */int) (unsigned short)50637))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 + 3])))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */long long int) arr_3 [i_1])) : (arr_0 [i_1])))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) * (min((((/* implicit */unsigned int) var_4)), (arr_1 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((signed char) arr_4 [i_1])))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_1 + 3]), (arr_1 [i_1 + 3])))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 4])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)30)))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), (min((54043195528445952LL), (((/* implicit */long long int) 4294967295U)))))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (var_7))))) : (var_5)));
}
