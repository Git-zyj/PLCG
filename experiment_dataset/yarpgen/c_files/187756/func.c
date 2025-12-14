/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187756
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                                var_12 = arr_11 [7LL] [i_1] [i_2] [i_1] [i_4];
                                arr_18 [i_0] [i_1] [i_2 + 1] [i_3] [(short)14] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (arr_6 [i_2] [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [13ULL])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned char)50)))))))) : (((((((/* implicit */_Bool) arr_5 [(unsigned char)4] [i_3] [i_0])) ? (13190511422191151507ULL) : (13190511422191151497ULL))) << ((((+(arr_0 [(unsigned char)12] [i_1]))) - (2332257272U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 13190511422191151513ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [2] [(unsigned short)11] [i_2] [i_5 + 1] [i_6] [i_2] [2]))) : (arr_16 [8ULL]))) | (min((arr_20 [i_0]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2 + 1] [5] [i_6]))))))) ? (((((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2 + 1] [i_5] [i_6] [13U] [14U])) ? (-998710825) : (((/* implicit */int) (signed char)-38)))) % (((/* implicit */int) arr_10 [i_0] [(unsigned char)0] [i_2 + 1])))) : (((/* implicit */int) ((unsigned char) arr_10 [i_0] [12U] [i_2 + 1]))))))));
                                var_14 -= (!(((/* implicit */_Bool) max(((-(arr_14 [i_6] [11U] [i_0] [i_1] [i_0]))), (((/* implicit */long long int) (+(arr_16 [8ULL]))))))));
                                arr_25 [i_1] [i_1] [i_2 + 1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned int) ((signed char) max((arr_16 [i_1]), (arr_16 [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_39 [i_10 - 1] [i_9] [i_7] = ((unsigned int) min((arr_36 [i_7] [i_10 - 1] [i_9] [i_10] [i_9]), (((/* implicit */unsigned short) arr_35 [(signed char)3] [i_10 - 1] [i_9] [i_10 - 1]))));
                            var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_7] [i_10 - 1])) ? (((((/* implicit */_Bool) arr_38 [i_7] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19749))) : (arr_38 [2] [i_10 + 1]))) : (((/* implicit */long long int) arr_37 [i_7] [i_8] [i_10 + 1] [i_10]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (+(1133493255U))))), ((-(((/* implicit */int) ((859855658238780643ULL) < (((/* implicit */unsigned long long int) arr_34 [i_7] [i_8] [i_11])))))))));
                            var_17 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_34 [i_12 - 2] [i_12 - 1] [i_12 - 2])) ? (arr_44 [i_7] [i_8] [i_12 - 2]) : (arr_34 [i_12 + 1] [i_12 + 1] [i_12 - 3]))) - (min((arr_34 [i_12 + 1] [i_12 - 1] [i_12 - 1]), (arr_34 [i_12 + 1] [i_12 + 1] [i_12 - 3])))));
                            arr_46 [(unsigned short)9] [(unsigned short)9] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5256232651518400089ULL))), (((/* implicit */unsigned long long int) arr_43 [i_7] [i_7] [i_7] [(short)7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_7] [i_7])) ? (3373307799U) : (arr_44 [i_7] [i_7] [i_7])))))))) : (arr_28 [i_12 + 1])));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_7] [i_8] [(unsigned short)12] [(short)19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_11] [i_12 - 2]))) : (arr_37 [i_7] [i_8] [i_11] [i_12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_7] [(_Bool)1] [i_11] [i_12])) ? (((/* implicit */int) arr_35 [i_7] [i_8] [i_11] [i_12 - 3])) : (((/* implicit */int) arr_35 [4U] [i_8] [i_11] [i_12 - 3]))))) : (((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_11] [i_12 - 3] [i_12 - 1])) ? (13190511422191151516ULL) : (((/* implicit */unsigned long long int) arr_37 [i_7] [i_8] [i_11] [i_12 - 2]))))));
                            var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((arr_32 [2] [2] [i_11]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_11] [i_12 - 3])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((13190511422191151520ULL), (((/* implicit */unsigned long long int) arr_37 [i_14] [i_13] [i_8] [i_7]))));
                            arr_53 [i_14] [i_14] [i_14] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) arr_48 [3LL] [3LL] [7LL] [i_14]))), (arr_47 [4LL])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((unsigned int) 652913048U)) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_38 [i_16] [i_8]))))))), (((long long int) (~(arr_48 [i_7] [(short)12] [(_Bool)1] [i_16]))))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((int) -6))) ? (-429479617734425316LL) : ((~(-1LL))))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((arr_41 [i_15 + 1] [i_8] [i_15] [i_16]) >> (((arr_41 [i_15 + 1] [i_8] [i_15 + 1] [i_16]) - (5816592874897324753LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)19131)), (-429479617734425316LL)))) ? (((arr_58 [i_16] [i_15 + 2] [i_8] [i_8] [5U] [i_7]) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) arr_58 [(short)2] [i_8] [i_8] [i_8] [(short)16] [i_8])))) : (((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_29 [(unsigned char)0])) : (((/* implicit */int) arr_29 [i_8]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_24 = 13190511422191151520ULL;
                                var_25 = ((unsigned char) ((arr_65 [i_18 - 1] [i_18]) & (5256232651518400103ULL)));
                                var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -429479617734425322LL)), (5256232651518400106ULL)))) ? (((/* implicit */int) min((arr_73 [i_18 - 1] [i_21]), (arr_63 [i_18 - 1] [i_18 - 1] [i_18 - 1])))) : (((/* implicit */int) arr_75 [i_20] [i_21]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 17; i_22 += 3) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
                        {
                            {
                                arr_81 [i_17] [i_17] [i_18] [i_18] [i_22] [i_23] = max((arr_37 [i_17] [i_18 - 1] [i_19] [i_22]), (arr_42 [i_17]));
                                var_27 -= ((/* implicit */unsigned int) 17669066258999287528ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            {
                                var_28 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6176563763085630427LL)) ? (((/* implicit */int) arr_75 [i_25] [i_18 - 1])) : (arr_80 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])))));
                                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_17] [i_25])) ? (arr_65 [8LL] [i_17]) : (arr_65 [i_17] [i_19])))) ? (((((/* implicit */_Bool) arr_52 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_17] [i_18 - 1])) ? (((/* implicit */int) (unsigned char)114)) : (((((/* implicit */_Bool) arr_77 [i_25])) ? (((/* implicit */int) arr_68 [i_17] [i_24] [i_24] [(_Bool)1])) : (((/* implicit */int) arr_85 [i_25] [i_24] [i_17] [i_18] [i_17])))))) : (((/* implicit */int) (short)-22674))));
                                arr_87 [i_18] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_51 [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1]))) - (((/* implicit */int) arr_51 [i_24] [i_18] [i_18] [i_17]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 18; i_26 += 3) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_30 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_31 = ((/* implicit */short) 1133493255U);
                                var_32 *= ((/* implicit */_Bool) min((((/* implicit */int) (!(arr_68 [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1])))), (((arr_68 [i_18] [i_18 - 1] [i_18 - 1] [i_18]) ? (((/* implicit */int) arr_68 [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1])) : (((/* implicit */int) arr_58 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_19]))))));
                                var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((arr_62 [(unsigned char)16]), (3161474040U))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) arr_93 [i_17] [i_18] [i_27] [i_26] [15LL] [i_27])) | (-429479617734425317LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-28376)))))))) : (((unsigned long long int) arr_38 [i_19] [i_18 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
