/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133849
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_7))) ^ (((((/* implicit */int) var_5)) & (((((/* implicit */int) var_3)) | (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3))))) : (((unsigned int) var_1)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)13))));
        arr_2 [i_0] = arr_0 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)4] [i_1])) >= (((/* implicit */int) arr_3 [(signed char)6] [i_1])))))));
        var_17 = ((((/* implicit */_Bool) 9540137041485059569ULL)) ? (min((((/* implicit */int) arr_5 [i_1] [i_1])), (((arr_0 [i_1]) | (arr_0 [i_1]))))) : (((/* implicit */int) arr_5 [i_1] [i_1])));
    }
    for (short i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_18 = ((/* implicit */int) ((unsigned char) min((arr_6 [i_2 + 1]), (((/* implicit */unsigned int) ((arr_6 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2])))))))));
        arr_9 [i_2 + 1] [i_2] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) : (min((((/* implicit */unsigned int) arr_8 [i_2] [i_2 + 1])), (arr_6 [i_2 + 2]))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) != (arr_6 [i_2])))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) arr_7 [i_2 + 1]);
    }
}
