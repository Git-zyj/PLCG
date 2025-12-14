/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138228
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0LL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((max((((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0]))))) & ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_18 = arr_1 [16];
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */_Bool) arr_7 [5] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_1])))), ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_1]))))))))));
        var_20 ^= ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        arr_8 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) arr_4 [i_1 - 1] [i_1]);
        var_21 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))), (((arr_0 [i_1 - 1] [i_1 - 1]) / (arr_0 [i_1 + 1] [i_1 - 1])))));
    }
    for (signed char i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((~(arr_0 [i_2 - 2] [i_2 - 2]))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_2 - 2] [i_2 - 2])))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 77505917U)) ? (1753911718U) : (0U)))) ? (min((((/* implicit */long long int) ((4LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49371)))))), (min((arr_9 [i_2 - 1]), (((/* implicit */long long int) arr_1 [2])))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (arr_1 [(_Bool)1]) : (-1435345670)))), (min((var_1), (((/* implicit */unsigned int) arr_10 [i_2] [13]))))))))))));
        arr_12 [i_2 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [0U]) : (arr_1 [(unsigned short)4])))) ? (arr_1 [(short)0]) : (((arr_1 [16]) | (arr_1 [8U]))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_24 += ((/* implicit */short) max((((/* implicit */long long int) arr_7 [i_3] [i_3])), (((arr_11 [i_3] [i_3]) ? (arr_15 [i_3] [i_3]) : (((((/* implicit */long long int) var_0)) - (arr_0 [i_3] [i_3])))))));
        var_25 = ((/* implicit */unsigned char) ((((24576U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3]))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    }
    var_26 |= ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (-1677546913213788930LL)));
}
