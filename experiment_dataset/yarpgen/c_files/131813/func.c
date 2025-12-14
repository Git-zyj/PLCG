/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131813
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)2] [i_0]))) < (var_3))))) + (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned int) arr_7 [i_0] [(short)7] [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [(unsigned short)3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_12 [i_4] [(short)10] [i_4] [i_4 - 3] [i_4] [i_3 - 3])) : (((/* implicit */int) arr_12 [16U] [15U] [i_4] [i_4 - 1] [i_3 - 1] [i_3 - 1])))))));
                                var_18 = ((/* implicit */unsigned long long int) min((arr_7 [i_0] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]), (((/* implicit */int) var_5))));
                                arr_16 [i_0] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [(short)2] [i_1] [(unsigned short)8] [3LL] [i_1] [i_1])) ? (var_16) : (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (8589934591ULL)))) ? (max((var_11), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [(_Bool)0] [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                arr_23 [i_5] [(unsigned char)2] [i_5] = ((/* implicit */unsigned short) ((long long int) var_14));
                var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 14969248244504369746ULL)))))) | (((((/* implicit */_Bool) arr_12 [i_5] [i_6] [(_Bool)1] [i_6] [i_6] [(_Bool)1])) ? (((/* implicit */unsigned long long int) min((arr_19 [i_5]), (((/* implicit */unsigned int) var_15))))) : (((((/* implicit */unsigned long long int) var_14)) * (arr_21 [i_5])))))));
                arr_24 [i_6] = var_4;
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) var_4);
                    arr_27 [i_5] = ((/* implicit */int) (short)-6532);
                    arr_28 [i_5] [i_6] [i_7] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_13)))))) % (((15869987299742207872ULL) * (((/* implicit */unsigned long long int) var_0)))))), (((arr_21 [i_5]) * (((/* implicit */unsigned long long int) var_3)))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    arr_31 [7ULL] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)11] [6ULL] [i_6] [i_6] [i_5] [6ULL])))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_5] [i_5] [i_6] [(short)0] [i_8]))) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) arr_20 [(_Bool)1] [(unsigned short)6])) : (((/* implicit */int) arr_0 [2]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5] [i_5])) | (((/* implicit */int) arr_20 [i_5] [i_5]))))) ? (max((((/* implicit */long long int) ((arr_4 [i_10] [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))), (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_9 [i_5] [7ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_5))))) : (min((arr_33 [i_5] [i_5] [i_8] [i_9] [i_10]), (arr_33 [i_5] [3U] [i_5] [i_5] [7LL])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) ((arr_9 [9U] [i_6]) <= (((/* implicit */unsigned int) ((((((int) arr_35 [i_8] [i_8] [i_6] [2U] [i_5])) + (2147483647))) << ((((+(((/* implicit */int) var_13)))) - (19))))))));
                }
                for (signed char i_11 = 4; i_11 < 13; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (9200750113417632260LL) : (var_3))));
                    var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_11 [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 3] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_33 [i_11 + 2] [(short)10] [i_11 - 1] [i_11 + 3] [13LL])))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (_Bool)1);
    var_28 = ((/* implicit */long long int) var_7);
}
