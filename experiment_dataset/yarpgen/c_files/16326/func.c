/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16326
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
    var_12 = ((/* implicit */short) max((1579853140U), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [(short)17] = ((/* implicit */short) (unsigned char)15);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((+(arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)23539)) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) ^ (arr_4 [i_1] [i_1])))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (33554431LL)))) ? ((-(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_9)) : (1429885396U))))) : (((/* implicit */unsigned int) var_9))));
    }
}
