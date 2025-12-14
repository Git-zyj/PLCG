/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128967
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) arr_2 [i_0]);
        var_16 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [15ULL]) <= (arr_1 [i_0] [i_0])))))));
        arr_4 [(short)19] = ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_5 [i_0] [i_1] [i_0])))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1 - 2])), (arr_0 [i_0]))))) - (((/* implicit */unsigned long long int) (((+(arr_6 [i_0] [i_0] [i_1]))) + (((/* implicit */long long int) ((arr_5 [i_1] [i_1] [i_1]) - (arr_5 [(unsigned short)9] [(unsigned short)9] [i_1 + 1])))))))));
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_6 [i_1] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (arr_1 [i_0] [12U])))))) || (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_1 [12ULL] [i_0]) < (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (arr_0 [i_0])))))) ? (((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1 - 1])))) << (min((arr_1 [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])), (arr_1 [i_0] [i_0]))))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((max((arr_6 [(short)16] [i_1 - 1] [i_1 - 1]), (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))) == (max((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]), (arr_6 [i_0] [i_1 - 1] [i_1 - 2]))))))));
            var_21 *= ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_1 - 1]) == (arr_5 [i_0] [i_0] [i_0])))), (min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1 - 2] [i_1])))))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (arr_1 [i_1] [i_1 - 1]))))) : (arr_1 [i_0] [i_0]));
        }
        for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((max((arr_1 [i_2 + 1] [i_2 + 1]), (arr_1 [i_2 + 1] [i_2 + 1]))), (((((/* implicit */_Bool) ((arr_1 [(short)15] [(short)15]) ^ (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2 + 1]))))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_6 [2] [22U] [2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2])))))))))))));
            var_23 = ((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_2 - 1]);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0])), (arr_6 [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2 - 1])), (arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) | (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0])))))))))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) arr_8 [i_0] [1ULL] [1ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_2]))))), (arr_0 [i_0]))))));
        }
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned char) ((max((((/* implicit */unsigned int) -322879883)), (4294967280U))) / (((/* implicit */unsigned int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0])))))))))));
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_5)) / (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_5)))))))) + (var_1))))));
}
