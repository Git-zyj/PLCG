/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154535
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2135334846U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) min(((-(var_5))), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_10 [i_1] [(unsigned char)9] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_2] [i_1])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [12U] [i_1 - 1]))))) : (((/* implicit */int) (signed char)-60)))), (((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (unsigned short)46782)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_3] [i_4])), (var_7)))) : (((/* implicit */int) var_11))))));
                                var_14 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((8866857420366364069LL) + (((/* implicit */long long int) (-(2267873383U)))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_4])), ((-(((/* implicit */int) arr_7 [i_2] [i_1 - 1] [i_1 + 1] [i_0])))))))));
                                var_16 = ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-19112)) ? (((/* implicit */int) (short)-2243)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [3U] [i_0]))));
                                var_17 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned int i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(short)17])) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (unsigned short)43954)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_1 [i_0]))))), (12720491630168659182ULL)));
                                var_19 -= ((/* implicit */unsigned long long int) arr_24 [i_0] [i_1 - 1] [i_7] [i_0] [i_9 + 1]);
                            }
                            for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) 
                            {
                                var_20 = ((1488611887U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2292))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_4 [i_0] [i_7 + 2] [i_1 - 1] [i_10 + 1]), (arr_4 [i_1] [i_7 + 3] [i_1 + 1] [i_10 + 1])))) == (((/* implicit */int) arr_4 [i_7] [i_7 - 1] [i_1 + 1] [i_10 - 1])))))));
                                var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 5726252443540892433ULL)) ? (((/* implicit */int) arr_21 [i_10 - 2] [i_10 - 2] [i_1 + 1] [5ULL] [i_7 + 2] [i_8 - 2])) : (((/* implicit */int) arr_0 [i_7 + 2])))), (((/* implicit */int) var_6))));
                                arr_31 [(signed char)4] [i_1 + 1] [i_7 + 2] [(signed char)4] [i_8 - 1] [i_8] [i_0] |= ((/* implicit */long long int) arr_29 [i_0] [(signed char)23] [(signed char)23] [i_8] [i_10 - 1]);
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                            {
                                var_23 = var_8;
                                var_24 = min((((/* implicit */unsigned int) (short)8188)), (2125977525U));
                                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_8 - 1] [i_11] [i_8 - 1])) : (((/* implicit */int) arr_16 [i_11] [i_8 + 1] [i_8] [16LL] [i_1 + 1] [i_0])))) * (((/* implicit */int) (short)7029))));
                                var_26 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [(signed char)22] [i_1 + 1] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7] [i_1 + 1] [i_7 + 3] [i_0] [i_8 - 2] [i_7] [i_7])) || (((/* implicit */_Bool) arr_26 [i_11] [i_8 - 2] [13LL] [i_1 + 1] [i_1] [15U])))))));
                            }
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) min((1581463376U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)2047), ((short)-1)))) ? (((/* implicit */int) (short)9410)) : (((/* implicit */int) arr_13 [(unsigned char)9] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8])))))));
                                arr_37 [i_1] [i_1] [(short)9] = ((/* implicit */unsigned short) arr_1 [i_8]);
                            }
                            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((arr_13 [i_8] [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1]), (((/* implicit */unsigned short) arr_23 [i_1 - 1] [i_0] [i_7 + 2] [i_8 - 2]))))) : (((((/* implicit */int) arr_9 [i_8] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1])) + (((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_43 [i_0] [19U] [i_13] [i_1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [(short)3] [18U] [i_13] [i_1] [i_1 - 1] [i_0] [(short)21])) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_1] [i_14] [i_14] [i_1])) & (((/* implicit */int) arr_33 [(unsigned char)2] [i_0] [i_0] [i_1] [(unsigned char)2] [i_0] [(unsigned char)2])))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1 + 1] [(unsigned char)0] [i_13] [21U] [i_0]))) : (min((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [(short)0] [i_0] [(short)9] [i_0])), (2099588202U)))))) ? (((/* implicit */int) (signed char)0)) : ((~(((/* implicit */int) (short)7275)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (short i_15 = 0; i_15 < 18; i_15 += 2) 
    {
        for (short i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2185688928469881537LL)) ? (((/* implicit */int) (unsigned short)4092)) : (((/* implicit */int) (unsigned short)1843))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (unsigned short)22933)) : (((/* implicit */int) (unsigned short)63690))))))) ? (((((((/* implicit */int) arr_44 [i_16] [i_17])) ^ (((/* implicit */int) arr_11 [i_15] [i_16] [i_15])))) ^ (((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) arr_44 [i_15] [i_16]))));
                    var_33 += ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)23702));
                }
            } 
        } 
    } 
}
