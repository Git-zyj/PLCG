/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180553
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
    var_12 -= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_1 [i_0]) / (var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) % (3269938481U)))));
        var_13 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (arr_1 [i_0])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 229376U)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = 3269938481U;
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) max((((1025028814U) / (1303311189U))), (4294967295U))));
        var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)120)))))))) == (var_11)));
    }
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (var_3) : (((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (0) : (((/* implicit */int) (signed char)-34))))));
        var_16 = ((/* implicit */short) (-(min((-164208001), (arr_0 [i_2 - 1])))));
    }
    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) var_3);
        var_17 = ((/* implicit */_Bool) (((+(arr_5 [i_3 - 2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_3 + 1]) >= (arr_4 [i_3 - 1])))))));
        arr_13 [(unsigned char)8] &= ((/* implicit */unsigned int) -164208021);
    }
}
