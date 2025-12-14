/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162159
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) (signed char)16)))))))));
    var_16 = var_5;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-115)))))) * (min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))))));
        var_18 *= ((/* implicit */signed char) max((min((max((((/* implicit */unsigned char) var_9)), (arr_1 [i_0]))), (min((((/* implicit */unsigned char) var_3)), (arr_1 [i_0]))))), (((/* implicit */unsigned char) var_14))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_8)) * (((/* implicit */int) var_14)))), (((/* implicit */int) max((var_2), (var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)110)) * (((/* implicit */int) arr_5 [i_1] [(signed char)6]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_4)))) : (max((((/* implicit */int) var_9)), (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_4 [i_1]))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? ((((~(((/* implicit */int) var_7)))) & ((~(((/* implicit */int) (unsigned char)254)))))) : (((/* implicit */int) (unsigned char)134)))))));
        arr_7 [(signed char)0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-12)) | (((((/* implicit */_Bool) arr_4 [(signed char)2])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_4 [(signed char)10]))))));
    }
    var_20 &= ((/* implicit */unsigned char) var_11);
}
