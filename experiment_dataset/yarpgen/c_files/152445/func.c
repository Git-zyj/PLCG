/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152445
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((arr_1 [6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6]))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(short)12])) : (((/* implicit */int) arr_1 [(short)6]))))) : ((~(arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) >> (((/* implicit */int) arr_1 [(unsigned char)6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) : (2298936466U))))))));
        arr_2 [(unsigned char)10] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(arr_0 [i_0]))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [(unsigned short)13])))))) != (((((/* implicit */_Bool) (unsigned char)133)) ? (982755931) : (((((/* implicit */_Bool) 2298936489U)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_1 [(unsigned short)14]))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)122)) ^ (((/* implicit */int) (unsigned short)65518))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (-1130051415) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17281)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) 55648351U))))) ? ((+(((/* implicit */int) arr_10 [i_2] [i_2] [i_3])))) : (((/* implicit */int) arr_10 [i_2 + 3] [i_3 - 2] [i_3 - 1]))))));
                    arr_13 [i_1] [(unsigned char)16] [i_3] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) | (arr_5 [i_1] [i_2 - 3])))) - (arr_9 [i_3 + 1] [i_1] [i_2 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)134), ((unsigned char)133))))) > (min((arr_6 [i_2 - 3] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 + 1] [14U])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        arr_17 [i_1] [5] [i_3] [i_3 - 2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17292)) & (8191)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_10 [i_1] [i_1] [(_Bool)1])))) ? (((/* implicit */int) min((arr_4 [i_1]), (arr_3 [(unsigned short)8] [i_2])))) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [16U] [i_3 - 2] [(short)21]))) % (min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_4])), (arr_16 [i_1] [i_2] [i_3 - 1] [i_4 - 2] [i_4])))))));
                        arr_18 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_4])) ? (((((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)5])) ? (arr_11 [i_3] [i_3] [i_3] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_4 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3 - 1] [i_3]))))), (((/* implicit */long long int) (-(arr_9 [i_1] [i_3] [i_4 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [(unsigned short)6])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_5])) ? (((/* implicit */int) arr_19 [14ULL] [i_1] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_1] [(short)18] [i_1] [i_1])) ? (((/* implicit */long long int) arr_20 [i_1] [i_2] [i_3] [i_4] [i_4] [i_4] [i_3])) : (arr_11 [i_5] [i_1] [i_4] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_12 [i_2] [i_4 + 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4 - 1]))) : (arr_11 [7ULL] [i_1] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? ((~(arr_11 [i_5] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_3 + 1] [i_4 + 2]) / ((+(((/* implicit */int) arr_10 [i_2] [i_3 - 1] [i_5]))))))) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_4] [i_1])))));
                            var_20 = ((/* implicit */unsigned short) arr_20 [i_1] [i_1] [6ULL] [i_3 + 1] [i_3] [i_4 + 2] [i_5]);
                            var_21 = ((/* implicit */_Bool) max((var_21), (((((((arr_9 [i_1] [i_4] [i_5]) >= (arr_20 [i_1] [i_1] [i_1] [(unsigned char)5] [i_5] [i_2] [i_2]))) ? ((+(arr_7 [20ULL] [20ULL] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_3])))))) != (((((/* implicit */_Bool) arr_21 [i_4 + 1] [i_4] [i_4 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_4 + 1] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_4 + 1] [12U] [i_4 - 2] [i_4] [i_5]))))))));
                            arr_22 [i_1] [i_1] [i_1] [i_4] [i_5] = (-(min((4294967287U), (((/* implicit */unsigned int) (short)-17281)))));
                        }
                    }
                }
            } 
        } 
    } 
}
