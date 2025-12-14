/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165767
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (-((~(((/* implicit */int) var_3))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) var_7))))) ? (-2634779862041928302LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (2634779862041928309LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0 - 1])) > (7915861129850196677LL)))))));
            var_18 = ((/* implicit */int) arr_1 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) 2634779862041928309LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (816791506455996507LL))), (max((var_10), (arr_4 [i_0] [i_3])))))));
                        var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_4 [i_0 - 1] [i_3 + 1])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_16 [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-816791506455996507LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -868640723700569371LL)) ? (arr_4 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : (((unsigned long long int) -2634779862041928289LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (arr_3 [i_0])))) && (((/* implicit */_Bool) ((long long int) 2634779862041928289LL))))))) : (((((/* implicit */_Bool) arr_10 [i_4] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) ? (arr_10 [i_4] [i_0 + 1] [i_4] [i_0 - 1] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_21 += ((/* implicit */signed char) ((arr_13 [i_5] [i_0] [i_0] [i_0]) ? ((-(17568731773110383466ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0] [i_0 - 1] [i_0] [i_5] [i_5])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_26 [i_0] [(unsigned short)2] [i_8] [i_7] [i_8] = ((/* implicit */int) (-(7743208452859181034LL)));
                            arr_27 [i_6 - 1] [i_0] [i_1] [i_7] [i_0] [(short)4] |= ((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_6 - 1] [i_7] [i_8]);
                            arr_28 [i_0] [i_1] [i_8] [4LL] [i_8] = ((/* implicit */_Bool) var_0);
                            arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2656158906962612800LL)) | (878012300599168151ULL)))) ? (min((816791506455996506LL), (arr_18 [i_6 + 1] [i_0 - 1]))) : ((-(arr_18 [i_6 - 1] [i_0 + 1])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_22 = ((/* implicit */long long int) var_5);
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        {
                            arr_40 [i_12] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */signed char) (-(var_12)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25071)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11 - 1] [i_0 - 1] [i_11] [i_12]))) : (((unsigned int) arr_13 [6ULL] [i_11] [i_9] [i_0]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) var_9);
                arr_41 [i_10] = (~(2634779862041928288LL));
                var_25 ^= ((/* implicit */long long int) var_13);
            }
            arr_42 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_9] [i_9])) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(16383))))));
            /* LoopNest 3 */
            for (long long int i_13 = 2; i_13 < 9; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (unsigned int i_15 = 3; i_15 < 8; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) ((arr_30 [i_13 - 2] [i_0 + 1]) ? (((/* implicit */unsigned long long int) (+(-1LL)))) : (arr_20 [(unsigned char)7] [i_0 - 1] [i_13] [(unsigned short)1])));
                            var_27 = ((/* implicit */unsigned int) (-(arr_3 [i_0 + 1])));
                            var_28 = ((/* implicit */unsigned int) arr_51 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                        }
                    } 
                } 
            } 
            arr_52 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_51 [i_9] [11] [i_9] [i_9]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_56 [i_0] = ((/* implicit */_Bool) ((7743208452859181034LL) ^ (755226569927817046LL)));
            arr_57 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        arr_58 [i_0 + 1] = ((((/* implicit */_Bool) -2005525107)) ? (((long long int) arr_50 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])) : (min((arr_0 [i_0 + 1]), (((/* implicit */long long int) (_Bool)1)))));
        arr_59 [i_0] [i_0 + 1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [6LL] [6LL] [i_0]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))))) ? (((/* implicit */int) arr_12 [(unsigned short)6] [i_0])) : (((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 - 1] [(unsigned char)4] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_36 [i_0] [i_0])) : (arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])))))) + (max(((-(arr_51 [i_0] [i_0] [i_0] [i_0]))), (min((((/* implicit */long long int) var_3)), (arr_18 [i_0 - 1] [i_0]))))));
    }
    var_29 = ((/* implicit */long long int) var_9);
}
