/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103092
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) (short)25872));
        var_11 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 718599595703673350ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_12 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_3)))) & (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_3)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 1081476494)))), ((!(((/* implicit */_Bool) var_7)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_2] [i_1])), (1938662921U))))))));
                    var_14 = ((/* implicit */unsigned char) (signed char)-75);
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1]);
    }
    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(arr_19 [i_6] [i_4]))) << (((((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4])) - (13436)))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) arr_11 [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((((/* implicit */_Bool) 2707580558U)) ? (((/* implicit */int) (unsigned short)39022)) : (((/* implicit */int) (short)-25873)))))) : (((/* implicit */int) min((arr_7 [i_4]), (((/* implicit */unsigned short) arr_8 [i_4] [i_5])))))));
                    arr_24 [i_4] [i_4] [i_4 + 3] [i_4] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (14998577549074070628ULL))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((3799613195376738300ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (1163712417U))) - (3131255052U))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            arr_39 [i_8] [i_10] [i_11] = var_5;
                            arr_40 [i_7] [i_7] [i_7] [i_7] [i_8] [i_10] [i_11] = ((/* implicit */unsigned char) ((signed char) var_5));
                            var_16 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
        }
        for (int i_12 = 3; i_12 < 22; i_12 += 1) 
        {
            arr_43 [i_7] &= ((/* implicit */_Bool) var_3);
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_31 [i_13] [i_12] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (-36028797018963968LL) : (((/* implicit */long long int) ((955471128U) >> (((arr_44 [i_14] [i_13] [i_12]) - (1502081615059362663ULL))))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_6 [i_12 + 1] [i_12 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((3818854527U) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)46254))))));
                        arr_51 [i_7] [i_12] [i_13] [i_14 - 1] [i_15] = ((/* implicit */_Bool) ((18237827911320943331ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    }
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_12 - 2] [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12 + 2] [i_12 - 1]))) : (4216254126U)))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)25872)), (14647130878332813315ULL))))));
            }
        }
        var_23 = ((/* implicit */long long int) var_6);
    }
    var_24 = ((/* implicit */long long int) var_9);
}
