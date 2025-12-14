/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15257
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])) / (4292695082U)))) ? ((-(2272214U))) : (((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_2] [0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [10LL])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2272229U)) | (arr_8 [i_0] [i_2] [(_Bool)1])))) ? (arr_3 [i_2]) : (arr_3 [i_2])))) : (4292695056U)));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((8388606U) == (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [i_1] [i_4])))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)77)) & (((/* implicit */int) (unsigned char)176))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned long long int) (unsigned char)208);
                }
                var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_10 [i_0] [i_0])))) * ((-(((/* implicit */int) arr_10 [i_0] [i_1]))))));
                var_23 = (~(((((/* implicit */_Bool) ((4292695066U) / (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [(unsigned char)4] [i_1]))))) ? (9456131866107266957ULL) : (((/* implicit */unsigned long long int) 1954501418)))));
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((int) arr_1 [i_0])))));
                    arr_18 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 639108316)) ? (arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_1] [8] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) arr_1 [(unsigned char)1])))) >= ((-(((/* implicit */int) arr_17 [i_6]))))))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    arr_21 [i_0] [i_1] [i_0] = ((arr_0 [i_0] [i_7]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_14 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9]) : (((/* implicit */unsigned int) arr_3 [i_0]))));
                                var_26 = ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_9]))) : (arr_24 [i_0] [i_0] [i_0] [i_0]));
                                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_9] [1] [i_0] [i_1] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_3 [i_9]) & ((+(((/* implicit */int) arr_7 [i_7] [i_1] [i_7]))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1592400904)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_16 [i_0] [i_7] [(unsigned char)2]) : (-639108323))) : (arr_6 [i_9] [4U] [i_9])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_12);
    var_29 = ((((/* implicit */_Bool) ((long long int) (~(var_14))))) ? (var_3) : (((/* implicit */long long int) var_2)));
}
