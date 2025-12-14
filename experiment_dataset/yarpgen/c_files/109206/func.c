/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109206
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) (+((-(arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
    for (short i_1 = 3; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3408))) & (var_1))) ^ (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)3408))))) ? (arr_6 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((arr_5 [i_1] [(unsigned short)12]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
        var_20 -= ((/* implicit */short) arr_6 [i_1 - 1]);
        arr_7 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (arr_5 [i_1] [i_1])))));
        arr_8 [i_1] [i_1] = arr_6 [i_1];
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) != (var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_8)))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) << (((((/* implicit */_Bool) 16547493502325450899ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_21 = ((/* implicit */int) max((var_21), (var_4)));
}
