/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117385
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)27185)) + (((/* implicit */int) (signed char)-46)))))), (((int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] [i_0] = (-(((int) max((((/* implicit */unsigned short) var_1)), (var_6)))));
    }
    var_18 += ((/* implicit */unsigned short) ((max((2167047042593104796LL), (-2167047042593104797LL))) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6092)) ^ (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) (short)-27191))))))) : (min((var_4), (((/* implicit */unsigned int) var_2))))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_1 + 2]))))));
        var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)9] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) var_8))))));
    }
    for (int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) ((unsigned short) ((var_14) - (((/* implicit */unsigned long long int) arr_5 [i_2 - 1])))));
        arr_11 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2])))))))), (arr_5 [i_2])));
    }
}
