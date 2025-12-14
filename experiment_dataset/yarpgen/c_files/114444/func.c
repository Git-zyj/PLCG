/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114444
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)5] = ((/* implicit */unsigned char) ((max((arr_4 [i_1 - 1]), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))) ^ ((+(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_2)) - (114)))))))));
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((var_16) * (((/* implicit */unsigned int) 1115392688)))) > (((/* implicit */unsigned int) arr_4 [i_1]))))), ((~(((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) var_9)) : (arr_4 [i_1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_20 = (~(((/* implicit */int) arr_0 [i_1 + 1])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */signed char) var_6);
                                var_21 -= ((/* implicit */unsigned short) var_2);
                                var_22 = ((/* implicit */unsigned char) (~(arr_14 [i_0] [i_1])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_8)) : (arr_14 [i_1 - 2] [i_1 - 2])))) != (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1 + 1] [i_2] [5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10572))) : (arr_10 [i_0] [(short)6] [i_1 - 1] [i_2]))));
                    var_23 = ((((/* implicit */_Bool) var_16)) ? (arr_14 [i_1 + 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_1])) ? (arr_2 [8] [i_0]) : (arr_1 [i_0])))));
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    arr_20 [(unsigned short)3] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [8U] [i_0] [i_0] [i_0] [i_0] [4LL])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_5])) : (arr_1 [i_0])))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) : (arr_15 [i_0] [(unsigned char)7] [i_0] [i_1] [i_0] [i_5])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_7 [i_0]);
                        var_25 = arr_21 [i_6] [i_6] [i_6 - 3] [i_6 - 1];
                        var_26 ^= ((/* implicit */short) (~(((/* implicit */int) arr_11 [10] [5ULL] [10] [i_1 - 1]))));
                        var_27 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (arr_3 [i_0]))) >> ((((-(((/* implicit */int) (unsigned char)87)))) + (97)))))) ? (((/* implicit */int) max((arr_23 [i_6]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [4U] [i_1] [i_5] [i_5] [(unsigned char)10]))) <= (var_13))))))) : (((/* implicit */int) arr_23 [i_0])));
                        arr_24 [i_0] [(short)4] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 - 2]))))) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] [3U])) : (((/* implicit */int) arr_9 [i_1 + 2] [i_1] [i_1])));
                    }
                    var_28 = ((/* implicit */int) max((((arr_22 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 3]) ? (max((((/* implicit */long long int) arr_23 [i_1 + 2])), (arr_12 [i_0] [i_1 - 1]))) : (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [8] [i_0] [i_0]))))))));
                }
                var_29 = ((/* implicit */int) max((var_29), (((int) ((((/* implicit */int) arr_19 [4U] [4U] [i_1 + 1] [i_1])) < (((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_0] [i_1] [(unsigned char)6] [(unsigned char)10])))))))));
            }
        } 
    } 
    var_30 *= ((/* implicit */signed char) (-(max((var_12), (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
}
