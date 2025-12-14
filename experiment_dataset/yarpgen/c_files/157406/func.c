/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157406
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (((unsigned int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) ((unsigned char) arr_1 [6]))) ? (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) var_10))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0 + 2] = ((/* implicit */short) arr_3 [i_1] [4]);
            arr_6 [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0])));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 + 1]))) ? (((((/* implicit */int) arr_1 [i_0 + 2])) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2])) < (((/* implicit */int) arr_1 [i_0 - 1])))))));
            arr_9 [i_0 - 2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ^ (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 1]))))) ? (((((/* implicit */_Bool) (~(arr_3 [i_0 - 1] [i_2])))) ? (max((((/* implicit */int) arr_7 [i_0 - 2] [8ULL] [i_2])), (var_16))) : (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_8 [3LL])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (var_12) : (((/* implicit */unsigned int) var_13))))))))));
        }
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_0 - 2] [i_0 - 2])))))) ? (max((arr_0 [i_0 + 2]), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 - 2] [i_0 + 2])))) : (((arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1]))) : (arr_0 [i_0 + 1])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 ^= ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14382098637921695613ULL)));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_3]) & (arr_0 [i_3])))) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)28)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        arr_16 [(short)15] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [7ULL])))) : (((arr_15 [i_4]) - (((/* implicit */int) var_14))))));
        var_25 = ((((/* implicit */unsigned int) ((var_4) ? (arr_15 [(unsigned char)9]) : (((/* implicit */int) arr_14 [(_Bool)1]))))) >= (arr_13 [(short)6]));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 + 2]))))));
    }
    var_27 |= ((/* implicit */_Bool) ((short) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
    var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_18)))))) : (((max((((/* implicit */long long int) var_9)), (var_2))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}
