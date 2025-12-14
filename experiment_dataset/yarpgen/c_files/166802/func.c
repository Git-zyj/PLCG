/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166802
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) min((arr_0 [6ULL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (unsigned short)18))))) || (((/* implicit */_Bool) (unsigned char)134)))))));
        var_10 *= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 - 1])), (arr_0 [i_0]))), (arr_0 [i_0])));
        var_11 = ((/* implicit */unsigned long long int) var_2);
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)111))))) + (min((((((/* implicit */_Bool) arr_0 [14ULL])) ? (arr_0 [i_0]) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_1 [6] [6])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_3 [i_1] [9]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_4 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((arr_5 [i_1] [10U]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    }
    var_14 = ((/* implicit */_Bool) var_1);
}
