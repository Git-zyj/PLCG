/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179973
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = (i_2 % 2 == 0) ? (((/* implicit */long long int) ((((((int) arr_0 [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0])) + (70))) - (10)))))) : (((/* implicit */long long int) ((((((int) arr_0 [i_2])) + (2147483647))) << (((((((((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0])) + (70))) - (10))) - (138))))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [(short)2])) : (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) < (((/* implicit */int) arr_1 [i_1]))))) : (arr_0 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)65), (((/* implicit */unsigned char) (_Bool)1))))) - (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (~(arr_4 [i_0] [i_1] [i_2])))) : (arr_6 [i_2] [i_2] [i_2])))));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_2] [i_0 + 2] [i_0 + 1]))))) ? (((((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_0 + 2] [i_2])) | (((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_0 + 2] [i_2])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_0 + 2] [19ULL])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_0 + 2] [i_1]))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_2 [i_1])))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((var_2) * (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))))));
}
