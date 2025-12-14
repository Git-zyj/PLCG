/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128371
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
    var_15 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (_Bool)1))))))), (0U)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((((2047U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ? (((-999974646) / (((/* implicit */int) (unsigned char)99)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (unsigned char)237))))))) : (arr_4 [i_0])));
            arr_5 [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (arr_0 [3U] [i_0])))) ? (arr_4 [i_0]) : (((/* implicit */int) ((unsigned short) arr_3 [i_0])))))), (min((((long long int) (unsigned short)2405)), (((/* implicit */long long int) ((unsigned char) (signed char)29))))));
            arr_6 [(signed char)2] &= (unsigned char)179;
            var_18 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)11)), (min(((short)6144), (((/* implicit */short) arr_2 [i_0])))))))) == (((((/* implicit */_Bool) min((arr_0 [i_0] [(signed char)2]), (((/* implicit */unsigned int) 2023535232))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3313))) == (3866163055U)))))))));
        }
        var_19 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [(signed char)8])) ? (arr_4 [2]) : (arr_4 [10]))), (min((max((((/* implicit */int) var_9)), (var_11))), (((/* implicit */int) arr_1 [(_Bool)1]))))));
    }
    for (int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) max((max((min((var_11), (((/* implicit */int) (unsigned char)53)))), (((/* implicit */int) ((unsigned char) arr_1 [i_2]))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (var_13)))))));
        var_20 = ((/* implicit */_Bool) max(((-(max((arr_8 [i_2]), (((/* implicit */long long int) arr_0 [i_2] [i_2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 - 1])))))));
    }
}
