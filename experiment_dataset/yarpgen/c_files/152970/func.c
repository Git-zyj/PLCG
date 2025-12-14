/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152970
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [2ULL])))) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_1])))))))))));
                    var_15 = ((/* implicit */short) ((((arr_5 [i_0] [1] [i_0] [i_2]) < (arr_5 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [12LL] [i_2] [i_2])) : (arr_6 [i_2] [i_1]))) : (((arr_6 [i_1] [i_1]) & (arr_6 [i_2] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [8U]) < (((/* implicit */long long int) var_8)))))) * ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0])))));
                        arr_11 [(unsigned char)12] [i_3] [18] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (arr_8 [i_0] [i_1] [i_2])))) ? (min((var_5), (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_1] [i_2] [i_1]))))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
                    {
                        arr_14 [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_4 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (arr_3 [i_4 - 1]))))) : (((((/* implicit */_Bool) 1220214878340694124ULL)) ? (162410547U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 - 3]))))));
                        arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (arr_4 [i_4 + 3]) : (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_2])) || (((/* implicit */_Bool) var_2))))) | (arr_8 [(unsigned char)6] [i_4 - 4] [i_4 - 4])))) : (((unsigned int) arr_13 [i_0] [i_4 - 2] [i_0] [i_4] [i_0]))));
                        var_17 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_4 - 4] [i_4 - 2] [i_4 - 3] [i_4 - 3] [i_4 + 3]))), (var_6)));
                        arr_16 [i_4] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)16]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_24 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_21 [i_5 - 1])))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (-(((((arr_29 [i_5 + 1] [i_5 + 1] [i_5 + 1] [1U]) + (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max((arr_19 [i_9] [i_8]), (((/* implicit */short) var_9)))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned int) 5793638584389761819LL)))));
                                arr_34 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_5] = (-((-(min((4968761169852565324LL), (-2302204399312864250LL))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)41997), (arr_30 [i_6] [i_5 + 3] [i_5 + 1] [i_5])))))))));
                    var_21 &= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)62)) ? (arr_27 [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)15361)) : (((/* implicit */int) (unsigned char)3))))))), (((/* implicit */long long int) arr_22 [i_5] [i_7]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) 2444980419U))), (((int) (_Bool)1))))) / (var_5)));
}
