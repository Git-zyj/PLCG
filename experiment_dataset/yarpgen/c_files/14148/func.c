/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14148
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (((unsigned short) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)30356)) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33017)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [10U])) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) (unsigned short)41643)))) : (((/* implicit */int) max((((_Bool) 325741076U)), (arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) - (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)130))))))) ? (3969226240U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1])))))));
        var_19 -= ((/* implicit */unsigned short) (-(min((((/* implicit */int) (unsigned char)130)), (((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) var_13))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_10 [(unsigned char)3] [i_2] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 2])) != (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(var_5))), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) var_4)) : (max((((/* implicit */int) ((unsigned short) (unsigned short)0))), ((+(((/* implicit */int) var_1))))))));
    var_22 = ((/* implicit */unsigned long long int) var_13);
    var_23 = ((/* implicit */unsigned char) var_4);
}
