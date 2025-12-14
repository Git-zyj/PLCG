/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183160
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_4))) * (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (+(arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [6U] [i_1] &= (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_3])));
                    var_17 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (71916856549572608LL)));
                    var_18 += ((/* implicit */signed char) arr_5 [i_1] [i_2] [i_3]);
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_5 [i_1] [i_2] [i_3])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))));
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) + (((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) var_6))))))));
        arr_15 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [10LL])), (min(((+(((/* implicit */int) (unsigned char)252)))), (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))))));
        arr_16 [i_4] = min((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_4)))), (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))))), (min((max((arr_9 [9] [i_4] [i_4]), (((/* implicit */long long int) arr_0 [i_4])))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_13 [i_4] [i_4])), ((unsigned short)63359)))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_4] [i_4])))) : (((unsigned int) arr_7 [i_4] [i_4] [i_4]))));
    }
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */int) (short)-32755)) % (((/* implicit */int) (short)32750))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    arr_27 [i_5] [i_6] [i_6] [(short)13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5] [i_6])) ? ((-(((/* implicit */int) arr_23 [i_5 + 3] [(unsigned char)6] [i_5 + 3])))) : (((((/* implicit */_Bool) arr_23 [i_5 + 2] [i_6] [i_5 + 2])) ? (((/* implicit */int) arr_23 [i_5 - 2] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_5 + 1] [i_6] [(short)14]))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_20 = arr_21 [i_5 + 2] [i_5] [i_5];
                                arr_34 [i_9] [i_5] [i_8] [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)13610))));
                            }
                        } 
                    } 
                    arr_35 [i_5] |= ((/* implicit */_Bool) min((max((arr_23 [i_5 + 2] [8ULL] [i_5]), (arr_23 [i_5 + 3] [i_5] [i_5]))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-84)), ((unsigned char)63))))));
                    arr_36 [i_5 - 2] [i_6] [i_6] [i_6] = ((/* implicit */short) max(((((((~(((/* implicit */int) arr_31 [i_7] [i_6] [i_5] [i_5])))) + (2147483647))) << (((((/* implicit */int) min((arr_24 [i_5] [i_6] [i_7] [i_7]), (arr_32 [i_5] [i_6] [i_7] [i_6] [i_7] [i_6])))) - (3649))))), (((((_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6] [i_7]))))) : (((/* implicit */int) arr_24 [i_5 - 2] [i_5 + 3] [7U] [i_5 + 3]))))));
                }
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((~(arr_29 [i_5 - 1] [i_5 + 3] [i_5 - 2] [i_5 + 3]))) | (arr_29 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 2]))))));
                    arr_39 [i_5] [i_5 - 1] [i_5 + 2] [i_5] = ((/* implicit */unsigned int) (short)13603);
                    var_22 = ((/* implicit */signed char) arr_37 [i_5] [i_5] [i_5] [i_5]);
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_18 [i_10] [i_10])) ? (((/* implicit */int) arr_21 [i_5] [i_5 + 3] [i_5])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_24 [i_10] [i_6] [i_5] [i_5 + 3])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_42 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_5 - 1] [i_6] [i_6] [i_6])) | (((/* implicit */int) arr_26 [i_5 - 2] [i_5] [i_5]))));
                    var_24 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_33 [i_5] [i_5] [i_6] [i_11])))) + (2147483647))) << (((((/* implicit */int) ((short) var_13))) - (10779)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) (short)13632)))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((arr_38 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_5 + 2] [i_5 + 1] [i_5] [i_5] [i_5 - 2]))) : (((((/* implicit */_Bool) arr_40 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11] [i_6] [i_6] [i_5]))) : (arr_40 [i_5]))))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    arr_45 [i_12] [i_6] [i_5] = ((/* implicit */unsigned int) min((min((min((((/* implicit */short) arr_33 [i_12] [i_12] [i_12] [i_5])), (var_1))), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_5] [i_6])) && (((/* implicit */_Bool) arr_25 [i_5] [(short)9] [(unsigned char)14] [5U]))))))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_5] [i_5 - 1] [i_5])))))));
                    var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32757))))) ? (arr_25 [i_5] [i_5 - 1] [i_6] [i_6]) : (((/* implicit */long long int) max((((/* implicit */int) arr_32 [i_12] [i_5] [14LL] [i_6] [i_6] [(unsigned char)14])), (arr_29 [i_6] [i_6] [i_5] [i_5]))))))));
                    var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_26 [i_5 - 1] [i_5 - 2] [i_5])) ? (min((arr_40 [i_5 + 3]), (((/* implicit */unsigned int) arr_24 [i_6] [i_12] [i_6] [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_41 [i_6]), (var_7)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_51 [i_14] [(unsigned short)0] [(unsigned short)8] [(unsigned short)8] [i_14] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-13621)), (arr_37 [(_Bool)1] [(_Bool)1] [i_6] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(short)1] [i_13] [i_12] [i_13]))))) : (((/* implicit */int) arr_32 [i_14] [i_13] [i_12] [i_6] [i_6] [i_14])))), (((/* implicit */int) min((arr_31 [i_14 + 2] [i_6] [i_5 + 1] [i_13]), (arr_33 [i_14 + 2] [i_14] [i_5 + 1] [i_6]))))));
                                var_29 -= ((/* implicit */unsigned int) min(((+(((/* implicit */int) min((arr_24 [i_5] [i_6] [i_12] [i_13]), (arr_26 [i_5] [i_6] [i_12])))))), (arr_46 [i_5])));
                                var_30 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_31 [i_5 + 3] [i_5] [i_5 + 1] [i_14 + 2])), ((-(arr_18 [i_14 - 1] [i_5 - 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
                        {
                            {
                                var_31 -= ((/* implicit */unsigned char) (((+((~(((/* implicit */int) var_5)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_18 [i_12] [i_15])))))))));
                                arr_56 [i_5] [i_6] [i_12] [i_15] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15 + 2] [i_6])) ? (((/* implicit */int) arr_20 [i_15 + 1] [i_12])) : (((/* implicit */int) arr_49 [i_16] [i_15] [i_12] [i_15] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 + 2]))) : (arr_40 [i_15 - 1])))) ? (((/* implicit */int) ((signed char) arr_19 [i_5]))) : (((/* implicit */int) (!(((_Bool) var_1)))))));
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_21 [i_16] [i_12] [i_6]), (arr_21 [i_15 - 1] [i_12] [i_6])))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) / (2253353412U))), (var_4))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_41 [i_6])), (((((/* implicit */int) arr_21 [i_5] [i_5] [i_5 + 3])) | (arr_29 [i_5 - 2] [(unsigned char)1] [i_5] [i_5]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_33 *= ((/* implicit */_Bool) var_10);
    var_34 = ((/* implicit */unsigned long long int) var_12);
}
