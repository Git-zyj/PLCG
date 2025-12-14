/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179263
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+((~(563478836U))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_1)))) ? (((/* implicit */int) arr_4 [(unsigned char)15] [i_3])) : ((+(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                        arr_13 [i_3] [i_3] [i_2] [13LL] [i_1] [13LL] = ((/* implicit */_Bool) min((min((var_1), (arr_1 [i_3]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_3])))))));
                        arr_14 [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 3041099759U)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) ((unsigned char) var_12))))));
                        arr_15 [13] [i_2] [i_1] [i_0] = (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) || (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_0] &= (((!(((_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_16 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3041099749U))))));
                        arr_19 [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (arr_6 [i_0] [i_2]))) <= (((/* implicit */long long int) ((int) var_2)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        arr_22 [i_5] = (-(((/* implicit */int) ((unsigned short) arr_1 [i_2]))));
                        arr_23 [i_0] [(short)10] [i_1] [i_0] = ((/* implicit */int) ((short) arr_3 [i_5 + 3]));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_9 [i_5 + 4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) var_0)) ? (3041099758U) : (((/* implicit */unsigned int) var_12)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                arr_39 [i_6] [i_6] [i_6] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_6] [i_6 - 1] [i_8] [i_10] [i_10] [(_Bool)1])) ? ((+(((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1] [i_10] [i_10] [11ULL] [11ULL])))) : (((/* implicit */int) (short)(-32767 - 1)))));
                                arr_40 [i_6] [i_9] [i_8] [i_7] [i_6] = ((short) (~(((/* implicit */int) arr_21 [i_6] [i_6 - 3] [i_8] [i_9] [i_8] [i_9]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_50 [i_6] [i_7] [i_6] [i_12] [i_12] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_11 [i_12] [i_7] [i_7] [i_11])))) - (((/* implicit */int) arr_10 [i_6 - 3] [i_6] [i_6] [i_11] [i_12] [(signed char)6]))));
                                arr_51 [i_13] [i_6] [i_6] [i_6] [i_6 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (3041099759U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (unsigned char)157)))) : ((+(((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                    arr_52 [(unsigned char)4] [i_11] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)16352)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    arr_55 [8ULL] = ((/* implicit */int) arr_26 [i_6]);
                    arr_56 [i_14] [i_6] [i_6] [i_6 - 2] = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((long long int) (short)8640)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_43 [i_6] [i_6 - 2] [i_7] [i_14])) : (arr_31 [i_6]))))))));
                    arr_57 [i_6 - 1] [i_6 - 1] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-79))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_6 - 2] [i_7] [i_14])))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_14);
}
