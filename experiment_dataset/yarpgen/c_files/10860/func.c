/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10860
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) (unsigned char)246))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10692))) >= (2792784742U)))) >> (((((/* implicit */int) arr_2 [4U] [4] [i_2])) - (116)))))) && (((/* implicit */_Bool) var_8))));
                    var_12 = ((/* implicit */unsigned short) ((var_5) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) | (((/* implicit */int) var_4))))) & (var_0)))));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (var_8))) - (40405U))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_2])), (arr_1 [i_0])))) ? (((/* implicit */int) ((var_9) >= (var_3)))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_4 [i_0] [(unsigned char)9] [i_2] [i_2])))))))));
                    arr_6 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */_Bool) var_5);
        arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (min((((/* implicit */unsigned short) var_6)), (var_4)))))) ? (((/* implicit */unsigned long long int) ((((var_1) < (((/* implicit */unsigned long long int) var_9)))) ? (((((/* implicit */unsigned int) 0)) | (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))) - (var_1)))));
}
