/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175077
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_17 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [5ULL])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((unsigned int) (unsigned short)37984)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1]))))))));
        var_18 = ((/* implicit */signed char) var_15);
        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned char) var_13))))) : (((((/* implicit */int) (unsigned short)34932)) / (var_8))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-15705)), (var_2)))))))));
    }
    var_20 = ((/* implicit */signed char) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)8191)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_5)) : (var_7))))))));
    var_21 = ((/* implicit */_Bool) (+(var_7)));
}
