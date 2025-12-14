/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146058
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) var_14));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 11482601554213510610ULL);
                                arr_12 [i_4 + 2] [i_1] [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4] = ((/* implicit */unsigned char) (-(min((arr_10 [i_4 + 2] [i_3] [i_4 + 2] [i_3] [i_4 + 1] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) ((max((((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1])), (arr_0 [i_0] [(_Bool)1]))) / (max((arr_6 [i_0] [i_2]), (((/* implicit */unsigned int) arr_1 [i_3]))))))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned short) min(((+((-(((/* implicit */int) arr_1 [i_0])))))), (arr_2 [6])));
                    var_21 += ((/* implicit */_Bool) min((((((arr_9 [(unsigned char)12]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-21851)))) * ((-(((/* implicit */int) (short)21833)))))), (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            {
                arr_19 [(unsigned char)13] [i_6] = ((/* implicit */unsigned short) var_0);
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    arr_24 [i_5] [i_5] = ((/* implicit */long long int) (short)21809);
                    var_22 = ((/* implicit */unsigned long long int) var_17);
                }
                for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    arr_29 [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_17 [i_5] [i_6 + 1] [i_5]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_33 [i_8] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) | (327624857)))));
                        arr_34 [i_5] [i_5] [i_8] [(_Bool)1] [(signed char)12] = ((((unsigned int) var_3)) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [3U]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_37 [i_5] [i_5] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned int) (((~(arr_26 [i_10] [i_10]))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_5])))))));
                            arr_38 [i_5] [i_6] [i_5] [i_5] [i_10] [(_Bool)1] [i_8] = ((/* implicit */short) ((unsigned int) arr_15 [i_5]));
                        }
                    }
                }
            }
        } 
    } 
}
