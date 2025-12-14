/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107248
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
    var_14 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-3565)) : (((/* implicit */int) (unsigned short)15772)))), (max((((/* implicit */int) var_0)), (var_9))))), (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (max((((/* implicit */int) var_12)), (var_9)))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_8)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_16 = ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) max((var_8), (max((((/* implicit */unsigned int) var_10)), (var_8)))))) : ((((_Bool)1) ? (((/* implicit */long long int) 1833634144)) : (5172387571694518920LL))));
        var_17 = ((/* implicit */int) max((((/* implicit */long long int) min((var_10), (var_7)))), (max((var_1), (((/* implicit */long long int) var_11))))));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_4))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_13)))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_0)) : (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
        arr_6 [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_5)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */short) var_4))))));
    }
}
