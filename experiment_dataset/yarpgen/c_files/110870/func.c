/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110870
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8192239150641947390LL)) ? (951616713U) : (((/* implicit */unsigned int) -2097152))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((arr_6 [i_1] [i_1] [4U]) << (((var_13) - (292402125))))) - (1580337434)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((((arr_6 [i_1] [i_1] [4U]) << (((var_13) - (292402125))))) - (1580337434))) - (392715707)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_4 [1ULL])) : (((/* implicit */int) var_10)))), ((((_Bool)1) ? (var_19) : (var_16)))))) <= (((((long long int) arr_2 [i_1])) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
}
