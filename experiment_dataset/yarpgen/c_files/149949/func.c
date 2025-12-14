/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149949
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_13 = var_4;
                                var_14 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) : (arr_11 [i_0] [(short)1])))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)205);
                /* LoopSeq 3 */
                for (short i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) ((unsigned char) var_3))))))) - (((((unsigned long long int) 2915912773U)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [2U])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)26))))))))))));
                    var_16 = var_8;
                }
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [10ULL] [i_1] [i_6] [10ULL]))) > (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_6])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19559))))))), (((min((((/* implicit */unsigned int) var_6)), (var_11))) < (4287845921U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_11);
                                var_19 = ((/* implicit */unsigned char) ((((unsigned int) arr_1 [i_6] [i_6])) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [i_6])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_25 [11U] [11U] [i_0] [i_1] [i_0] = ((/* implicit */short) var_2);
                        var_20 = ((/* implicit */short) ((((unsigned int) arr_14 [i_0] [i_0] [i_6] [i_9])) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)13480)) && (((/* implicit */_Bool) var_9)))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))) - (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) + (var_10)))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 3) 
                    {
                        var_22 += ((/* implicit */unsigned int) ((max((min((((/* implicit */unsigned long long int) arr_3 [i_10 - 1] [i_1] [i_1])), (arr_9 [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) | (((/* implicit */int) var_3))))))) <= (((/* implicit */unsigned long long int) (+(((var_11) + (112673205U))))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        arr_28 [i_10] [i_6] [i_6] [i_1] [i_10] = min((((/* implicit */unsigned long long int) ((short) arr_16 [i_0 + 1] [i_0 - 1] [i_6] [i_6]))), ((+(var_5))));
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) % (min((255U), (var_10)))))));
                    var_25 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((~(arr_2 [i_0] [i_1] [i_11]))), (((((/* implicit */_Bool) (short)24857)) ? (arr_30 [i_0] [i_1] [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))))))) == (((((arr_7 [i_0] [i_0] [(unsigned char)14]) << (((36028797018963967ULL) - (36028797018963963ULL))))) + (((/* implicit */unsigned long long int) (+(arr_29 [13ULL]))))))));
                }
            }
        } 
    } 
}
