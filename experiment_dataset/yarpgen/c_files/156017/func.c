/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156017
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 2070612850)) ? (((/* implicit */unsigned long long int) var_4)) : (8863915223770695659ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((long long int) arr_5 [i_1]))))), (((((/* implicit */_Bool) -2035880764)) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_2]))) : (arr_10 [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65535)))))))))));
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2035880739)))) * ((~(arr_10 [i_3 + 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_23 [i_6 - 4] [i_5] [i_6 - 4] [i_5] = ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_4 [i_7 + 1])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (arr_8 [i_1] [i_1]))))));
                        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_16 [i_5 + 1] [i_7 + 1] [i_6 + 1])) - (((/* implicit */int) arr_6 [i_5 + 1] [i_7 + 1]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) 8045287174219128467ULL);
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (short i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_31 [i_10] [i_8] [(unsigned char)6] [i_10])))), (((/* implicit */int) arr_31 [i_10] [i_9] [i_9] [i_10]))));
                        var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_11 + 1] [i_11 - 1] [i_10 + 2])))) * (((arr_34 [i_10] [i_10] [i_11 - 1] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29210))))));
                        var_24 = ((/* implicit */long long int) ((((-2035880775) ^ (2035880763))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_10 - 1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) 
    {
        arr_37 [i_12] = ((/* implicit */int) max(((-(7490276164968054285LL))), (max((6637736399045829728LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)156))))))));
        arr_38 [i_12] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) arr_35 [i_12 + 2] [i_12 + 2])))) / (((/* implicit */int) (unsigned short)38283))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12 + 2] [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12] [i_12]))) : (1993329479U)))) ? (((unsigned int) arr_36 [i_12])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32764)) && (((/* implicit */_Bool) -6637736399045829729LL))))))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
        {
            for (long long int i_14 = 1; i_14 < 23; i_14 += 2) 
            {
                {
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-22990)), ((unsigned short)4614)))) <= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)9))))));
                    var_26 &= ((/* implicit */long long int) max((((/* implicit */int) arr_41 [i_12])), (((var_11) % (((/* implicit */int) var_14))))));
                }
            } 
        } 
        var_27 -= ((/* implicit */short) (unsigned short)60921);
    }
    var_28 = ((/* implicit */short) 18446744073709551614ULL);
}
