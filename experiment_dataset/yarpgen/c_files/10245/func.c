/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10245
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
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    var_21 &= (+(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) max(((unsigned char)222), (((/* implicit */unsigned char) var_1)))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_5)))) / (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1099962157U)) && (((/* implicit */_Bool) 12688027641996310851ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((var_6), (var_17))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [14ULL])) : (((/* implicit */int) var_4)))) : (arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_3 - 1] [i_3] [i_4 - 1])) ? (arr_12 [i_0] [i_1 + 1] [i_3 - 1] [(unsigned char)22] [i_4 - 1]) : (3751606206659558017ULL))))))));
                            var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_3 - 1])), (min((var_12), (((/* implicit */unsigned long long int) var_4))))));
                            arr_14 [i_1] [i_1] [(signed char)10] [(short)9] [i_4 + 1] = ((/* implicit */short) var_12);
                        }
                        arr_15 [(unsigned char)7] [i_1] [i_2] [16] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)28))))), (var_18)));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) ((unsigned int) min((var_2), (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_5] [(unsigned char)3] [i_5]))))));
        arr_19 [(unsigned char)15] = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned short) arr_1 [i_5]))));
        arr_20 [i_5] = ((/* implicit */unsigned char) (~(((min((2148729721U), (((/* implicit */unsigned int) var_15)))) >> (((min((arr_6 [(unsigned char)19] [i_5] [i_5]), (((/* implicit */unsigned int) var_11)))) - (64347U)))))));
        arr_21 [i_5] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_5])))), (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_4 [i_5]) : (((/* implicit */int) var_16)))))), (((/* implicit */int) ((unsigned char) arr_12 [(unsigned short)8] [i_5] [i_5] [i_5] [i_5])))));
        arr_22 [i_5] [i_5] = ((((/* implicit */_Bool) 9666745636805434324ULL)) ? (((((/* implicit */_Bool) arr_12 [12] [i_5] [(_Bool)1] [i_5] [(unsigned char)4])) ? (((arr_7 [16U] [(short)16] [(unsigned char)6]) - (arr_7 [(unsigned char)10] [i_5] [(unsigned char)10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))) : (arr_6 [i_5] [i_5] [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_25 = ((/* implicit */_Bool) arr_8 [i_6]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (int i_8 = 3; i_8 < 17; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_24 [i_6] [i_10]))));
                                arr_39 [i_6] [i_6] [i_7] [i_7] [i_9] [i_10] = ((/* implicit */int) var_2);
                                arr_40 [i_6] [i_6] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) arr_38 [(unsigned short)13] [i_7] [i_8 - 1] [(unsigned short)13] [(unsigned char)15]))))) ? (((var_12) - (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_7] [i_9] [i_9]))))))));
                            }
                        } 
                    } 
                    arr_41 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (arr_26 [i_8] [i_7]) : (((/* implicit */long long int) var_8)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_8] [i_8 + 1] [i_8])))))) ? (((/* implicit */unsigned int) max((922446338), (-803838238)))) : (((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_8 - 2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)89))))) : (arr_35 [i_8] [i_8 + 1] [i_8] [18])))));
                }
            } 
        } 
    }
}
