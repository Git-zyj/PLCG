/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16982
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
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [(short)2] = (signed char)-79;
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (unsigned short)63090)))));
        var_22 = ((/* implicit */unsigned short) (short)-2768);
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_13);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (+(arr_5 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)23)))) - ((-(((/* implicit */int) arr_4 [i_1]))))));
    }
    var_23 = ((/* implicit */long long int) (signed char)123);
}
