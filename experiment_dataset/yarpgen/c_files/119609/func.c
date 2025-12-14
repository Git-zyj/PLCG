/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119609
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_8 [(short)2] [8LL] = ((/* implicit */int) max((max((((/* implicit */unsigned short) (short)-31738)), (arr_1 [i_0]))), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)0]))) : (arr_7 [i_1] [(short)6])))))));
                arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (short)24724))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (var_8)))), (max((var_6), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_8))));
    var_12 &= ((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (short)31737))));
    var_13 = ((/* implicit */unsigned short) var_5);
}
