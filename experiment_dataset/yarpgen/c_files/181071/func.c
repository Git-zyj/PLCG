/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181071
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) (signed char)15)), (var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_2))))) : ((-(((-2464055675026437721LL) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [18U] [i_1] = ((/* implicit */long long int) var_2);
                var_11 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [12ULL])) - (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_6)) - (0)))))) : (((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [12])))));
                var_12 = ((/* implicit */unsigned short) (-(max(((-(((/* implicit */int) (signed char)-76)))), (((/* implicit */int) arr_5 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) var_8))))) ? (((long long int) (signed char)59)) : (((/* implicit */long long int) 985178033))))));
}
