/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183003
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (5355092972018779427ULL))))) ^ (((0ULL) & (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (18446744073709551615ULL)))))));
                arr_6 [i_1 + 2] [i_1 + 2] = ((/* implicit */long long int) (((~(18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) (unsigned short)46980)))))));
                var_13 = ((/* implicit */short) var_5);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2120039623)) ^ (13091651101690772188ULL)))) ? (arr_3 [i_1 - 1] [i_1 + 2] [i_0]) : ((~(arr_3 [i_1 - 1] [i_1 - 2] [(_Bool)1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((unsigned short) var_6))))), (((/* implicit */int) var_11))));
    var_16 = ((((((((/* implicit */_Bool) (unsigned char)138)) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) var_10)) : (max((var_7), (((/* implicit */unsigned long long int) 2120039623)))))) ^ (5355092972018779427ULL));
}
