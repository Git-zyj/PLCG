/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160371
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
    var_18 = ((/* implicit */_Bool) var_5);
    var_19 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))), (var_6))), (((/* implicit */long long int) var_8))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))), (max((arr_0 [i_0] [i_0 + 3]), (18446744073709551604ULL)))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) ^ (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (unsigned short)38802))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_1] [i_2] [(unsigned char)7] [i_1] = ((/* implicit */_Bool) ((((min((12ULL), (((/* implicit */unsigned long long int) var_8)))) << ((+(((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3]))) >= (arr_0 [(unsigned char)3] [(unsigned char)3]))))));
                        var_20 = ((((/* implicit */_Bool) ((unsigned char) 1318386221694188444ULL))) ? ((-(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) (_Bool)0)));
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0 + 1])), (var_14)))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-9975)), (var_4)))))) : (((((/* implicit */_Bool) var_15)) ? (((arr_5 [(unsigned char)3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)26735)))) : (((/* implicit */int) var_0))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_19 [i_4 - 1] [i_6] [i_5])) % (((/* implicit */int) arr_14 [i_5])))))) ? (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (arr_15 [(unsigned char)2])))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) (_Bool)1)))))));
                    arr_22 [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((-(arr_18 [i_4]))), (((/* implicit */int) arr_19 [i_4 - 1] [i_5] [(short)4]))))) % (((((/* implicit */_Bool) arr_15 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_13)))));
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5 + 1] [i_6] [(unsigned char)0]))))), ((~(((/* implicit */int) (unsigned char)206))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) arr_27 [(signed char)3] [11ULL] [(unsigned char)8] [i_4] [(short)11] [i_4 - 1] [(signed char)3]);
                                var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4 - 1] [i_5 + 1] [i_4] [i_7] [i_5 + 1] [(short)9] [i_8 - 1]))) < (arr_27 [i_8] [i_8 + 2] [i_8] [i_4] [i_8 + 2] [(unsigned char)11] [i_8]))) ? (min(((-(arr_17 [(unsigned char)11]))), (((/* implicit */long long int) ((arr_26 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [7ULL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4])))))))) : (((((11ULL) < (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_0))))));
                                var_26 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_20 [i_4 - 1])) | (((/* implicit */int) arr_20 [i_4 - 1])))));
                                var_27 += ((/* implicit */short) min((((((/* implicit */int) arr_24 [i_5] [i_5] [i_5 + 3])) >> (((((/* implicit */int) arr_25 [i_5 + 3] [(unsigned short)12] [i_5 - 2] [i_5 + 3])) + (19268))))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_5 + 1] [i_5 + 1] [i_5 + 4])), (arr_24 [i_5] [i_5] [i_5 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 |= ((/* implicit */short) (((+(((((/* implicit */int) (short)-28468)) ^ (((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned char)4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_4])))))));
    }
}
