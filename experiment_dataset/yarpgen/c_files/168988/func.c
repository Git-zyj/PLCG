/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168988
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 &= ((/* implicit */unsigned char) ((long long int) max((var_7), (var_7))));
        var_16 |= arr_1 [(signed char)6];
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((_Bool) ((arr_4 [i_0 - 1]) + (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_8 [8ULL] [i_4]))));
                                arr_12 [i_1] [i_1 - 2] [i_0] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (((long long int) arr_7 [i_4] [i_0] [i_0] [i_0])))), (arr_9 [i_0])));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_4 [i_2 - 1]))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-1696)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0])) : (((/* implicit */int) (signed char)118)))))) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0] [12ULL] [12ULL] [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_9 [8ULL])))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [2ULL] [(short)6] [i_0]))))), (((unsigned long long int) arr_4 [i_0]))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_23 = ((/* implicit */short) ((unsigned long long int) arr_15 [i_5 + 1]));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (arr_14 [i_5])))) ? ((~(-5350208032437284029LL))) : (((((/* implicit */_Bool) var_3)) ? (-4185296455753182561LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_9) ? (arr_15 [(unsigned char)12]) : (((/* implicit */unsigned long long int) 2470041248U))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)65024))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_24 [i_6] [i_5] [i_6] = ((/* implicit */int) (signed char)-113);
                        arr_25 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (1095216660480LL) : (((/* implicit */long long int) 3509187964U))))))) || (((((/* implicit */_Bool) arr_17 [i_6] [(unsigned char)10] [(unsigned char)10])) && (((/* implicit */_Bool) var_13))))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((arr_22 [i_5 + 1] [i_5] [i_5] [i_5]), (((/* implicit */long long int) arr_13 [i_5 + 1])))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_23 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
    }
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_23 [i_9] [i_9] [i_9] [(signed char)2] [i_9] [i_9]), (arr_18 [i_9] [i_9] [10ULL]))))));
        arr_29 [i_9] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_15 [i_9]), (((/* implicit */unsigned long long int) var_10))))))))) != (arr_20 [15ULL] [i_9] [i_9])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_38 [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) arr_15 [i_13 - 1]);
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)124)))), (((/* implicit */int) var_10))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10] [(unsigned char)4]))) < (arr_23 [i_13] [i_12] [i_11] [i_10] [i_10] [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11])))));
                            arr_39 [i_13] [(unsigned char)12] [i_12 - 1] [i_13] [i_11] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_11]), (var_14)))) ? (((arr_22 [i_13 - 1] [i_10] [(short)10] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : ((~(((((/* implicit */_Bool) 4201144297749116120ULL)) ? (arr_14 [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            arr_40 [i_12] [i_10] [i_12] [i_11] [i_10] [i_10] = var_13;
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))))) | (max((arr_22 [i_11 - 1] [i_11] [i_10] [i_10]), (((/* implicit */long long int) ((((((/* implicit */int) arr_34 [i_11 - 2] [i_11 - 3] [i_10] [i_10])) + (2147483647))) >> (((arr_35 [4LL] [i_11] [i_11]) - (1203578625438220722LL))))))))))));
            }
        } 
    } 
}
