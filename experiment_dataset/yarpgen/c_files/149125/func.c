/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149125
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(var_6)))), ((~(-14)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((signed char) max((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) arr_2 [(signed char)11] [i_0])))));
        var_12 = ((/* implicit */unsigned char) var_5);
        var_13 *= ((signed char) 14);
        var_14 *= ((/* implicit */signed char) ((unsigned short) arr_2 [i_0] [i_0]));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 14)), (arr_5 [i_1 + 1] [i_1 + 1]))))));
        arr_7 [(unsigned short)8] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((signed char) arr_4 [i_1]))))));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 14)) : (((unsigned long long int) var_8))));
    }
    var_17 = var_4;
    var_18 = ((/* implicit */signed char) ((int) var_7));
}
