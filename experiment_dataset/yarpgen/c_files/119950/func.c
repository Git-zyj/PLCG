/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119950
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0 - 1])) ? (arr_0 [i_0 - 1] [(signed char)0]) : (arr_0 [i_0] [i_1])))));
            arr_6 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0 - 1]))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) (~(min((arr_5 [i_0 - 1]), (min((arr_0 [i_0] [i_0]), (arr_5 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            arr_11 [i_2 + 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12901))))) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 1] [i_2 - 1])) : (((arr_10 [i_0 - 1] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 1]))) : (arr_4 [i_2])))))));
            arr_12 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0] [i_0 - 1]))))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [6LL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_0 - 1]))))))) : ((+(arr_4 [(unsigned char)2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [(short)6]))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_2])))) : (((int) arr_10 [i_2 - 1] [4ULL])))))));
            var_19 = ((((long long int) arr_1 [i_0] [i_0 - 1])) + (min((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_0 - 1] [(unsigned char)5])) ? (arr_5 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
            var_20 += ((/* implicit */short) arr_2 [i_0 - 1]);
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [0ULL]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_10 [(short)9] [i_0]))))))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [(short)2] [i_3])) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (arr_13 [i_3]))) / (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (arr_13 [i_3])))))) ? ((+(((/* implicit */int) arr_15 [i_3] [i_3])))) : (((((/* implicit */_Bool) max((arr_15 [i_3] [i_3]), (arr_15 [(short)6] [(short)6])))) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (arr_13 [i_3]) : (((/* implicit */int) arr_15 [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (arr_13 [i_3]) : (arr_13 [i_3]))))))))));
        arr_16 [i_3] = ((/* implicit */unsigned short) ((short) ((short) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (arr_13 [i_3]) : (arr_13 [(unsigned char)16])))));
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) 18294420282864272977ULL)) ? (1645692787U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_4]))))) ? (((/* implicit */int) arr_17 [i_4])) : ((-(((/* implicit */int) arr_15 [i_4] [i_4])))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */signed char) arr_13 [i_4]);
        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_18 [i_4] [i_4])))));
    }
    var_24 = ((/* implicit */unsigned char) (-(max(((~(((/* implicit */int) (short)24966)))), (((/* implicit */int) var_5))))));
}
