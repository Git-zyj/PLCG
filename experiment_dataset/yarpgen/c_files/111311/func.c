/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111311
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
    var_10 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_7))));
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))), (min((((/* implicit */int) ((_Bool) var_5))), ((+(((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)32549)), (0U)))), (((unsigned long long int) 10926085707707994420ULL)))));
        arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((unsigned short) 3575290991U))), (min((7520658366001557195ULL), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_4)))))));
        var_12 = ((/* implicit */unsigned short) ((unsigned long long int) min(((-(((/* implicit */int) var_8)))), ((~(((/* implicit */int) arr_1 [i_0])))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (var_1)))), (arr_2 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_6 [i_1]))));
        var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((arr_6 [i_1]), (var_5)))))))));
    }
}
