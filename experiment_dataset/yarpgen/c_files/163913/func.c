/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163913
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0 - 3]))) ? ((~(min((var_10), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(var_7))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)14318)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65374)))), ((-(((/* implicit */int) (unsigned short)43058))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)22477), ((unsigned short)43048))))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((_Bool) var_2));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22477)) ? (288230375614840832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12610)))));
        arr_9 [i_1] [0LL] = ((/* implicit */unsigned short) var_7);
        arr_10 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    }
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) var_2)))))))), (var_3)));
}
