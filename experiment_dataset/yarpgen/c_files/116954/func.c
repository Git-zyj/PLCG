/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116954
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 3])) ? (arr_1 [i_0 - 3] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))))) ? (min((arr_2 [i_0 - 1]), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2] [(short)6])) != (((/* implicit */int) var_11))))))) : (((((/* implicit */int) arr_0 [i_0 - 4] [i_0])) / (((((/* implicit */_Bool) (signed char)60)) ? (arr_2 [i_0 - 4]) : (arr_2 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((var_0), ((~(((((/* implicit */_Bool) 2038363119U)) ? (var_9) : (((/* implicit */int) (unsigned char)0)))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) ((var_2) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1] [(signed char)10]) : (arr_1 [i_1] [i_1])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [9] [i_1])))))));
        arr_7 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_1 - 1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)15] [i_1]))) : (arr_1 [i_1] [i_1 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [(short)17])))))))));
    }
    var_18 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254)))))), (((((/* implicit */_Bool) min((var_11), (var_11)))) ? (((/* implicit */int) var_6)) : (var_9)))));
}
