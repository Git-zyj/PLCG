/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161778
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (~(((((_Bool) arr_0 [i_0])) ? (3478917342900710007LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))))));
        arr_3 [(unsigned short)19] = ((/* implicit */unsigned short) arr_2 [24LL]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_12 [22U] [i_2] [i_2] = ((/* implicit */short) var_10);
                            var_14 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) 1362295397)), (((var_10) ^ (arr_4 [i_0] [i_3] [i_2])))))));
                            arr_13 [i_2] [23LL] [i_2] [i_2] [1U] = ((/* implicit */unsigned long long int) 191880979U);
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_10 [i_0] [10LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9U] [9U] [(unsigned short)8] [3LL]))) : (191880963U))) : (191880963U))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_16 [(signed char)1] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1] [i_2]))))));
                            arr_17 [i_0] [i_1] [(unsigned char)4] [i_3] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                        }
                        var_16 = ((/* implicit */short) arr_6 [i_3] [i_2] [i_0]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_17 = ((/* implicit */short) (~(((var_6) | (arr_5 [7U])))));
        arr_22 [i_6] &= ((/* implicit */_Bool) arr_0 [14ULL]);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    arr_28 [i_6] &= ((/* implicit */short) 4103086317U);
                    arr_29 [9] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((_Bool) arr_21 [i_8]));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 4) 
    {
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-16142))));
        arr_34 [i_9 + 2] = ((/* implicit */unsigned long long int) 3990639137U);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 7862387596066854738LL))));
        arr_35 [i_9] = ((/* implicit */short) arr_33 [i_9]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        arr_39 [i_10] [(unsigned short)10] = ((((arr_24 [6U] [i_10] [i_10]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28334))))) ? (((int) 4103086300U)) : ((+(((/* implicit */int) (short)10527)))));
        arr_40 [6] [i_10] = ((/* implicit */unsigned int) (+((+(arr_30 [i_10] [20U])))));
    }
    for (unsigned short i_11 = 3; i_11 < 15; i_11 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_11 - 2] [i_11 - 3])) ? (arr_8 [10] [(unsigned short)10] [i_11] [i_11]) : ((~(((/* implicit */int) (unsigned short)37185))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (short i_13 = 1; i_13 < 12; i_13 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_9 [5ULL] [19ULL] [i_13 - 1] [19ULL] [i_13]), (arr_21 [(signed char)15])))), (((((/* implicit */_Bool) ((unsigned long long int) 191880996U))) ? (((((/* implicit */_Bool) 368930205)) ? (((/* implicit */long long int) 165006323U)) : (arr_25 [15U] [13] [i_11 + 1]))) : (((/* implicit */long long int) ((int) arr_26 [i_11] [i_11] [(unsigned short)1] [i_11]))))))))));
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4103086317U)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_4)) : ((+(arr_6 [i_11] [14ULL] [i_13 + 3])))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((2610170794249889167ULL) << (((4103086317U) - (4103086275U))))) << (((min((9657327892288145557ULL), (((/* implicit */unsigned long long int) arr_46 [i_14] [i_14] [i_14] [i_14])))) - (656085733ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_33 [i_14]) ? (((/* implicit */int) arr_33 [(unsigned short)2])) : (((/* implicit */int) (unsigned short)27011))))) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (unsigned short)13482))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1010848996858676618LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14]))) : (191880963U)))) : (((((/* implicit */_Bool) arr_31 [i_14])) ? (127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_52 [12ULL] = ((/* implicit */long long int) (+(var_12)));
    }
}
