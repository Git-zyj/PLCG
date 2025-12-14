/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132801
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_4)) + (2147483647))) << (((var_1) - (3826374057U)))))))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((((2226616938983744683ULL) >= (((/* implicit */unsigned long long int) arr_0 [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (-(0U)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))));
                var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (4294967295U))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)12932)))) : (((/* implicit */int) ((unsigned short) var_1))))) : (((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((int) var_10)))))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))) != (var_2)))), (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) var_1)))))))))));
}
